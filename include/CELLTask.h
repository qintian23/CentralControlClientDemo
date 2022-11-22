#ifndef _CELL_TASK_H_
#define _CELL_TASK_H_

#include <mutex>
#include <list>

#include "CELLThread.h"

namespace CentralControl
{
	/// <summary>
	/// 执行任务的服务类型
	/// </summary>
	class  CELLTaskServer
	{
	public:
		CELLTaskServer();
		virtual ~CELLTaskServer();

		/// <summary>
		/// 所属serverid
		/// </summary>
		int serverId = -1;

	private:
		typedef std::function<void()> CELLTask;

	private:
		/// <summary>
		/// 任务数据
		/// </summary>
		std::list<CELLTask> _tasks;

		/// <summary>
		/// 任务数据缓冲区
		/// </summary>
		std::list<CELLTask> _tasksBuf;

		/// <summary>
		/// 改变数据缓冲区时需要加锁
		/// </summary>
		std::mutex _mutex;
		CELLThread _thread;

	public:
		/// <summary>
		/// 添加任务
		/// </summary>
		/// <param name="task"></param>
		void addTask(CELLTask task);

		/// <summary>
		/// 启动工作线程
		/// </summary>
		void Start();

		void Close();

	protected:
		/// <summary>
		/// 工作函数
		/// </summary>
		void OnRun(CELLThread* pThread);
	};
}

#endif // !_CELL_TASK_H_
