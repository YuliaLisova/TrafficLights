
#pragma hdrstop

#include "StateRed.h"
#include "StateGreen.h"
#include "PseudoGraphics.h"
#include "StateYellow.h"
#include "Logger.h"


//---------------------------------------------------------------------------
StateRed::StateRed(TrafficLights* context): _context(context) {};

void StateRed::Handle()
{
	
	Logger :: nextLog(__FUNCTION__, "log.txt");
	system("cls");
	PseudoGraphics ::drawFilledCircle(14, 4);
	PseudoGraphics ::drawEmptyCircle(14, 15);
	PseudoGraphics ::drawEmptyCircle(14, 15);

}

StateRed :: ~StateRed ()
{

}

#pragma package(smart_init)
