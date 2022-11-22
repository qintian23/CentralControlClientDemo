#ifndef _CELL_SEMAPHORE_H_
#define _CELL_SEMAPHORE_H_

#include <chrono>
#include <thread>
#include <condition_variable>

namespace CentralControl
{
    /// <summary>
    /// �ź�����
    /// </summary>
	class  CELLSemaphore
	{
	public:
		CELLSemaphore();
		virtual ~CELLSemaphore();

		/// <summary>
		/// ������ǰ�߳�
		/// </summary>
		void wait();

		/// <summary>
		/// ���ѵ�ǰ�߳�
		/// </summary>
		void wakeup();

	private:
		/// <summary>
		/// �ı����ݻ�����ʱ��Ҫ����
		/// </summary>
		std::mutex _mutex;

		/// <summary>
		/// �����ȴ�-��������
		/// </summary>
		std::condition_variable _cv;

		/// <summary>
		/// �ȴ�����
		/// </summary>
		int _wait = 0;

		/// <summary>
		/// ���Ѽ���
		/// </summary>
		int _wakeup = 0;
	};
}

#endif // !_CELL_SEMAPHORE_H_