#ifndef StateEmptyH
#define StateEmptyH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "TrafficLights.h"
//---------------------------------------------------------------------------

class StateEmpty: public State
{
	private:
		TrafficLights* _context;

	public:
		StateEmpty(TrafficLights* context);
		void Handle();
		~StateEmpty ();
};

#endif