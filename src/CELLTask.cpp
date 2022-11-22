#include "CELLTask.h"

namespace CentralControl
{
	CELLTaskServer::CELLTaskServer()
	{
	}

	CELLTaskServer::~CELLTaskServer()
	{
	}
	void CELLTaskServer::addTask(CELLTask task)
	{
		std::lock_guard<std::mutex> lock(_mutex);
		_tasksBuf.push_back(task);
	}
	void CELLTaskServer::Start()
	{
		_thread.Start(nullptr, [this](CELLThread* pThread) {
			OnRun(pThread);
			});
	}
	void CELLTaskServer::Close()
	{
		///CELLLog::Info("CELLTaskServer%d.Close begin\n", serverId);
		_thread.Close();
		//CELLLog::Info("CELLTaskServer%d.Close end\n", serverId);
	}
	void CELLTaskServer::OnRun(CELLThread* pThread)
	{
		while (pThread->isRun())
		{
			//�ӻ�����ȡ������
			if (!_tasksBuf.empty())
			{
				std::lock_guard<std::mutex> lock(_mutex);
				for (auto pTask : _tasksBuf)
				{
					_tasks.push_back(pTask);
				}
				_tasksBuf.clear();
			}
			//���û������
			if (_tasks.empty())
			{
				std::chrono::milliseconds t(1);
				std::this_thread::sleep_for(t);
				continue;
			}
			//��������
			for (auto pTask : _tasks)
			{
				pTask();
			}
			//�������
			_tasks.clear();
		}
		//����������е�����
		for (auto pTask : _tasksBuf)
		{
			pTask();
		}
		//CELLLog::Info("CELLTaskServer%d.OnRun exit\n", serverId);
	}
}