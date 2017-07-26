//---------------------------------------------------------------------------

#ifndef StateYellowH
#define StateYellowH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "TrafficLights.h"
//---------------------------------------------------------------------------
class StateYellow: public State
{
	private:
		TrafficLights* _context;

	public:
		StateYellow(TrafficLights* context);
		void Handle();
		~StateYellow ();
};
#endif
