//---------------------------------------------------------------------------

#ifndef TLNetTrafficH
#define TLNetTrafficH
#include "State.h"
//---------------------------------------------------------------------------
class TrafficLights
{
	private:
		State* _state;
	public:
		TrafficLights();
		void setState ( State* state );
		void Handle();
};
#endif
