#ifndef _CELL_THREAD_H_
#define _CELL_THREAD_H_

#include "CELLSemaphore.h"
#include <functional>

namespace CentralControl
{
	class CELLThread
	{
	private:
		typedef std::function<void(CELLThread*)> EventCall;
	public:
		CELLThread();
		virtual ~CELLThread();

		/// <summary>
		/// �����߳�
		/// </summary>
		void Start(
			EventCall onCreate = nullptr,
			EventCall onRun = nullptr,
			EventCall onDestory = nullptr);

		/// <summary>
		/// �ر��߳�
		/// </summary>
		void Close();

		/// <summary>
		/// �ڹ����������˳�
		/// ����Ҫʹ���ź����������ȴ�
		/// ���ʹ�û�����
		/// </summary>
		void Exit();

		/// <summary>
		/// �߳��Ƿ���������״̬
		/// </summary>
		bool isRun();

	protected:
		/// <summary>
		/// �߳�����ʱ�Ĺ�������
		/// </summary>
		void OnWork();

	private:
		EventCall _onCreate;
		EventCall _onRun;
		EventCall _onDestory;
		/// <summary>
		/// ��ͬ�߳��иı�����ʱ��Ҫ����
		/// </summary>
		std::mutex _mutex;
		/// <summary>
		/// �����̵߳���ֹ���˳�
		/// </summary>
		CELLSemaphore _sem;
		/// <summary>
		/// �߳��Ƿ�����������
		/// </summary>
		bool _isRun = false;
	};


}

#endif // !_CELL_THREAD_H_
