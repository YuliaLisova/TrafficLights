
#pragma hdrstop

#include "TrafficLights.h"
#include "StateRed.h"
#include "Logger.h"

//---------------------------------------------------------------------------

TrafficLights::TrafficLights()
{
	Logger :: firstLog(__FUNCTION__, "log.txt");
	_state = new StateRed(this);
}

void TrafficLights::setState ( State* state )
{
	if (_state != NULL) delete _state;
	_state = state;
}

void TrafficLights::Handle ()
{
	_state->Handle();
}

#pragma package(smart_init)
