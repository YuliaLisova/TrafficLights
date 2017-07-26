#ifndef PseudoGraphics_H
#define PseudoGraphics_H

#include <iostream>
#include <Windows.h>
#include "MyMath.h"
using namespace std;
class PseudoGraphics
{
   private:
	  static void setColor(int text, int background);
	  static float inOrOutCircle (int x,int y);

  public:
	  static void drawEmptyCircle(int radius, int textColor, int backgroundColor=0);
	  static void drawFilledCircle(int radius, int textColor, int backgroundColor=0);

};

#endif