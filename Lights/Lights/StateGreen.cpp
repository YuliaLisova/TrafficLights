//---------------------------------------------------------------------------


#pragma hdrstop

#include "StateGreen.h"
#include "StateYellow.h"
#include "PseudoGraphics.h"
#include "StateRed.h"
#include "Logger.h"
//---------------------------------------------------------------------------
StateGreen::StateGreen(TrafficLights* context): _context(context) {};

void StateGreen::Handle()
{
	Logger :: nextLog(__FUNCTION__, "log.txt");
	
	system("cls");
	PseudoGraphics ::drawEmptyCircle(14, 15);
	PseudoGraphics ::drawEmptyCircle(14, 15);
	PseudoGraphics ::drawFilledCircle(14, 2);

	
}

StateGreen :: ~StateGreen ()
{

}
#pragma package(smart_init)
