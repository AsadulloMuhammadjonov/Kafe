//---------------------------------------------------------------------------

#ifndef UnitSotilganlarH
#define UnitSotilganlarH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFormSotilganlar : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
private:	// User declarations
public:		// User declarations
	__fastcall TFormSotilganlar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSotilganlar *FormSotilganlar;
//---------------------------------------------------------------------------
#endif
