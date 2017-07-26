//---------------------------------------------------------------------------


#pragma hdrstop

#include "StateGreen.h"
#include "StateEmpty.h"
#include "PseudoGraphics.h"
#include "StateRed.h"
#include "Logger.h"

//---------------------------------------------------------------------------
StateEmpty::StateEmpty(TrafficLights* context): _context(context) {};

void StateEmpty::Handle()
{
	
	Logger :: nextLog(__FUNCTION__, "log.txt");
	Sleep(2000);
	system("cls");
	PseudoGraphics ::drawEmptyCircle(14, 15);
	PseudoGraphics ::drawEmptyCircle(14, 15);
	PseudoGraphics ::drawEmptyCircle(14, 15);

	
}

StateEmpty :: ~StateEmpty ()
{

}

#pragma package(smart_init)
