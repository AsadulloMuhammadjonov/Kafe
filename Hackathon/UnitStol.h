//---------------------------------------------------------------------------

#ifndef UnitStolH
#define UnitStolH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFormStol : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TLabeledEdit *LabeledEdit1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormStol(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormStol *FormStol;
//---------------------------------------------------------------------------
#endif
