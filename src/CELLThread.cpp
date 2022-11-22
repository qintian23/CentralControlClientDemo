#include "CELLThread.h"

namespace CentralControl
{
	CELLThread::CELLThread()
	{
	}

	CELLThread::~CELLThread()
	{
	}

	void CELLThread::Start(EventCall onCreate, EventCall onRun, EventCall onDestory)
	{
		std::lock_guard<std::mutex> lock(_mutex);
		if (!_isRun)
		{
			_isRun = true;

			if (onCreate)
				_onCreate = onCreate;
			if (onRun)
				_onRun = onRun;
			if (onDestory)
				_onDestory = onDestory;

			//Ïß³Ì
			std::thread t(std::mem_fn(&CELLThread::OnWork), this);
			t.detach();
		}
	}

	void CELLThread::Close()
	{
		std::lock_guard<std::mutex> lock(_mutex);
		if (_isRun)
		{
			_isRun = false;
			_sem.wait();
		}
	}

	void CELLThread::Exit()
	{
		std::lock_guard<std::mutex> lock(_mutex);
		if (_isRun)
		{
			_isRun = false;
		}
	}

	bool CELLThread::isRun()
	{
		return _isRun;
	}

	void CELLThread::OnWork()
	{
		if (_onCreate)
			_onCreate(this);
		if (_onRun)
			_onRun(this);
		if (_onDestory)
			_onDestory(this);

		_sem.wakeup();
	}



}
