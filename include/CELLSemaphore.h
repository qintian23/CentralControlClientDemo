#ifndef _CELL_SEMAPHORE_H_
#define _CELL_SEMAPHORE_H_

#include <chrono>
#include <thread>
#include <condition_variable>

namespace CentralControl
{
    /// <summary>
    /// 信号量类
    /// </summary>
	class  CELLSemaphore
	{
	public:
		CELLSemaphore();
		virtual ~CELLSemaphore();

		/// <summary>
		/// 阻塞当前线程
		/// </summary>
		void wait();

		/// <summary>
		/// 唤醒当前线程
		/// </summary>
		void wakeup();

	private:
		/// <summary>
		/// 改变数据缓冲区时需要加锁
		/// </summary>
		std::mutex _mutex;

		/// <summary>
		/// 阻塞等待-条件变量
		/// </summary>
		std::condition_variable _cv;

		/// <summary>
		/// 等待计数
		/// </summary>
		int _wait = 0;

		/// <summary>
		/// 唤醒计数
		/// </summary>
		int _wakeup = 0;
	};
}

#endif // !_CELL_SEMAPHORE_H_