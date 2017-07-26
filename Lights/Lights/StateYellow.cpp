
#pragma hdrstop   

#include "StateYellow.h"
#include "StateRed.h"
#include "StateGreen.h"
#include "PseudoGraphics.h"
#include "Logger.h"

//---------------------------------------------------------------------------
StateYellow::StateYellow(TrafficLights* context): _context(context) {};

void StateYellow::Handle()
{
	
	Logger :: nextLog(__FUNCTION__, "log.txt");
	system("cls");
	PseudoGraphics ::drawEmptyCircle(14, 15);
    PseudoGraphics ::drawFilledCircle(14, 6);
    PseudoGraphics ::drawEmptyCircle(14, 15);

}

StateYellow :: ~StateYellow ()
{

}
#pragma package(smart_init)
