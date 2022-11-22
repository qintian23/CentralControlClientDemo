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
		/// 启动线程
		/// </summary>
		void Start(
			EventCall onCreate = nullptr,
			EventCall onRun = nullptr,
			EventCall onDestory = nullptr);

		/// <summary>
		/// 关闭线程
		/// </summary>
		void Close();

		/// <summary>
		/// 在工作函数中退出
		/// 不需要使用信号量来阻塞等待
		/// 如果使用会阻塞
		/// </summary>
		void Exit();

		/// <summary>
		/// 线程是否启动运行状态
		/// </summary>
		bool isRun();

	protected:
		/// <summary>
		/// 线程运行时的工作函数
		/// </summary>
		void OnWork();

	private:
		EventCall _onCreate;
		EventCall _onRun;
		EventCall _onDestory;
		/// <summary>
		/// 不同线程中改变数据时需要加锁
		/// </summary>
		std::mutex _mutex;
		/// <summary>
		/// 控制线程的终止、退出
		/// </summary>
		CELLSemaphore _sem;
		/// <summary>
		/// 线程是否启动运行中
		/// </summary>
		bool _isRun = false;
	};


}

#endif // !_CELL_THREAD_H_
