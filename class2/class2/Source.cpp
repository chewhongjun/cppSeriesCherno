#include <iostream>

class Log
{
private:
	int m_LogLevel = LogLevelInfo;

public:
	int LogLevelError = 0;
	int LogLevelWarning = 1;
	int LogLevelInfo = 2;


public:
	void setLevel(int level)
	{
		m_LogLevel = level;
	}
	void Warn(const char* message)
	{
		if(m_LogLevel>=LogLevelWarning)
		std::cout << "[Warning]: " << message << std::endl;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
		std::cout << "[Error]: " << message << std::endl;
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
		std::cout << "[Info]: " << message << std::endl;
	}
};

int main()
{
	Log log;
	log.setLevel(log.LogLevelWarning);
	log.Warn("Hello");
	std::cin.get();
}