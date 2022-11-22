#ifndef _CELL_TASK_H_
#define _CELL_TASK_H_

#include <mutex>
#include <list>

#include "CELLThread.h"

namespace CentralControl
{
	/// <summary>
	/// ִ������ķ�������
	/// </summary>
	class  CELLTaskServer
	{
	public:
		CELLTaskServer();
		virtual ~CELLTaskServer();

		/// <summary>
		/// ����serverid
		/// </summary>
		int serverId = -1;

	private:
		typedef std::function<void()> CELLTask;

	private:
		/// <summary>
		/// ��������
		/// </summary>
		std::list<CELLTask> _tasks;

		/// <summary>
		/// �������ݻ�����
		/// </summary>
		std::list<CELLTask> _tasksBuf;

		/// <summary>
		/// �ı����ݻ�����ʱ��Ҫ����
		/// </summary>
		std::mutex _mutex;
		CELLThread _thread;

	public:
		/// <summary>
		/// �������
		/// </summary>
		/// <param name="task"></param>
		void addTask(CELLTask task);

		/// <summary>
		/// ���������߳�
		/// </summary>
		void Start();

		void Close();

	protected:
		/// <summary>
		/// ��������
		/// </summary>
		void OnRun(CELLThread* pThread);
	};
}

#endif // !_CELL_TASK_H_
