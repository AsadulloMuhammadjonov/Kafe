//---------------------------------------------------------------------------

#ifndef UnitXodimlarH
#define UnitXodimlarH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFormXodimlar : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormXodimlar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormXodimlar *FormXodimlar;
//---------------------------------------------------------------------------
#endif
