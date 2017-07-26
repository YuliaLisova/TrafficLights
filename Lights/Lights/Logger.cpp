#include "Logger.h"


void Logger::  firstLog ( const char* funcName, const char* logFileName)
{
	char buffer[80];
    time_t seconds = time(NULL);
    tm timeinfo;
    localtime_s(&timeinfo, &seconds);
    char* format = "%A, %B %d, %Y %H:%M:%S";
    strftime(buffer, 80, format, &timeinfo);
	ofstream fout;
	fout.open(logFileName, ios_base::trunc );
	
	if (!fout.is_open()) 
		{
			return;
		}
	fout << buffer << " Entering " << funcName << std::endl;
	fout.close();

}


void Logger::  nextLog ( const char* funcName, const char* logFileName)
{
	ofstream fout;
	char buffer[80];
    time_t seconds = time(NULL);
    tm timeinfo;
    localtime_s(&timeinfo, &seconds);
    char* format = "%A, %B %d, %Y %H:%M:%S";
    strftime(buffer, 80, format, &timeinfo);
	fout.open(logFileName, ios_base::app);
	if (!fout.is_open()) 
		{
			return;
		}
	fout << buffer << " Entering " << funcName  << std::endl;
	fout.close();

}
	