//---------------------------------------------------------------------------

#ifndef StateH
#define StateH
//---------------------------------------------------------------------------
class State
{
   public:
	 virtual void Handle() = 0;
	 virtual ~State ();
	 
};
#endif
