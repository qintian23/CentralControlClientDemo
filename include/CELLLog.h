#ifndef _CELL_LOG_H_
#define _CELL_LOG_H_

#include "CELL.h"
#include "CELLTask.h"
#include <ctime>

namespace CentralControl
{
	/// <summary>
	/// »’÷æ¿‡
	/// Info/Debug/Warring/Error
	/// </summary>
	class CELLLog
	{
	public:
		CELLLog();
		virtual ~CELLLog();

	public:
		static CELLLog& Instance();

		void setLogPath(const char* logPath, const char* mode);

		static void Info(const char* pStr);

		template<typename ...Args>
		static void Info(const char* pformat, Args ... args);

	private:
		FILE* _logFile = nullptr;
		CELLTaskServer _taskServer;
	};
}

#endif // !_CELL_LOG_H_
