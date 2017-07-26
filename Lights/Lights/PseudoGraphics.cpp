#include "PseudoGraphics.h"

void PseudoGraphics :: setColor(int text, int background)
{
   HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

float PseudoGraphics :: inOrOutCircle (int x, int y)  {
    return  MyMath:: mySqRoot (static_cast<float>(MyMath :: myPow (x, 2) + MyMath :: myPow (y, 2)));
 }

void PseudoGraphics :: drawEmptyCircle(int radius, int textColor, int backgroundColor)
{
	const int width = radius;
    const int height = radius;

	setColor(textColor, backgroundColor);
    for (int y = width; y >= -width; y -= 2)  {
        for (int x = -height; x <= height; x++)  {
		     if (static_cast <int>( inOrOutCircle(x, y)) == radius) cout<<"@";
            else cout << " ";

         }
         cout << "\n";
     }
}


void PseudoGraphics :: drawFilledCircle(int radius, int textColor, int backgroundColor)
{
	const int width = radius;
    const int height = radius;

	setColor(textColor, backgroundColor);
    for (int y = width; y >= -width; y -= 2)  {
        for (int x = -height; x <= height; x++)  {
		     if (static_cast <int> (inOrOutCircle(x,y)) < radius) cout<<"@";
             else cout << " ";

         }
         cout << "\n";
     }
}