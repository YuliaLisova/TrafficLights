#pragma hdrstop
#include <iostream>
#include <stdio.h>
#include <time.h>

#include "TrafficLights.h"
#include "StateRed.h"
#include "StateYellow.h"
#include "StateGreen.h"
#include <conio.h>
#include "StateEmpty.h"
#include "MyTimer.h"

using namespace std;
//---------------------------------------------------------------------------


int main(int argc, char* argv[])
{
	
      system("mode con cols=80 lines=50");
	  TrafficLights trafficLights;
	  cout<<"to start Traffic Lights press \"s\"\n";
	  cout<<"to pause Traffic Lights press \"p\"\n";
	  cout<<"to exit Traffic Lights press \"e\"";
      char c;
      c = _getch();
      if (static_cast<int> (c) == 115) 
	  {
		  while(true)
		  {
	 
		     trafficLights.setState(new StateRed (& trafficLights));
		     trafficLights.Handle();
		     MyTimer ::sleep(2000);

		     for (int i = 0 ; i < 4; i++)
			 {
			   trafficLights.setState(new StateYellow (& trafficLights));
		       trafficLights.Handle();
		       MyTimer ::sleep(100);
		       trafficLights.setState(new StateEmpty (& trafficLights));
		       trafficLights.Handle();
		       MyTimer ::sleep(200);
		     }
		
		     trafficLights.setState(new StateGreen (& trafficLights));
		     trafficLights.Handle();
		     MyTimer ::sleep(3000);

	     }
	  }
	return 0;
}

