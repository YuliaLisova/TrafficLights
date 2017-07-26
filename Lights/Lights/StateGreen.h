//---------------------------------------------------------------------------

#ifndef StateGreenH
#define StateGreenH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "TrafficLights.h"
//---------------------------------------------------------------------------

class StateGreen: public State
{
	private:
		TrafficLights* _context;

	public:
		StateGreen(TrafficLights* context);
		void Handle();
		~StateGreen ();
};

#endif
