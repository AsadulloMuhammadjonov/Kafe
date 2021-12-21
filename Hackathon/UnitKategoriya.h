//---------------------------------------------------------------------------

#ifndef UnitKategoriyaH
#define UnitKategoriyaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormKategoriya : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TLabeledEdit *LabeledEdit1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormKategoriya(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormKategoriya *FormKategoriya;
//---------------------------------------------------------------------------
#endif
