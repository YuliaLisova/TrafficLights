

#include "MyMath.h"

int MyMath :: myPow (int base, int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent ; i++)
	{
		result *= base;
	}
	return result;
}

float MyMath :: mySqRoot(float x)
	{
  int sp = 0, i , inv = 0;
  float a, b;
  if (x <= 0.F) return(0.F);
  
  if (x < 1.F) {x = 1.F/x ; inv = 1;}
  
  while (x > 16.F) {sp++; x/=16.F;}
  
  a = 2.F;
   
  i = 4;
  while (i > 0)
  {
	  b = x/a; a += b; a *= 0.5F;
	  i--;
  }

  while(sp > 0) {sp--; a *= 4.F;}
 
  if (inv) a = 1.F/a;
  return a;
}

	

