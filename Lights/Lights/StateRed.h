//---------------------------------------------------------------------------

#ifndef StateRedH
#define StateRedH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "TrafficLights.h"
//---------------------------------------------------------------------------

class StateRed: public State
{
	private:
		TrafficLights* _context;

	public:
		StateRed(TrafficLights* context);
		
		void Handle();

		~StateRed ();
};
#endif
