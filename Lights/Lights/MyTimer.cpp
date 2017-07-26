#include <conio.h>
#include <Windows.h>
#include "MyTimer.h"

void MyTimer :: sleep (int sec)
{
	while (sec>0) { 
	Sleep (70);
	if (_kbhit()){
		char  ch1 = _getch();
		int code1 =static_cast <int> (ch1);
		if (code1  == 112){
			while (true){
				char ch2 = _getch();
				int code2 = static_cast<int>(ch2);
				if(code2 == 115) 
					break;
				if(code2 == 101) {
					exit(0);
					system("cls");
				}
			}
		}
		if (code1==101) {
			exit(0);
			system("cls");
		}
	}
	sec-=100;
	}
}
