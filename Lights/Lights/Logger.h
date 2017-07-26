#ifndef Logger_H
#define Logger_H

#include <fstream>
#include <windows.h>
#include <ctime>

using namespace std;

class Logger {

   public:
	  static void firstLog ( const char* funcName, const char* logFileName);
	  static void nextLog ( const char* funcName, const char* logFileName);
	
};

#endif