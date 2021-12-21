//---------------------------------------------------------------------------

#ifndef UnitOmborOzgartirishH
#define UnitOmborOzgartirishH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormOmborOzgartirish : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TLabeledEdit *LabeledEdit3;
	TLabeledEdit *LabeledEdit4;
	TButton *Button2;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormOmborOzgartirish(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormOmborOzgartirish *FormOmborOzgartirish;
//---------------------------------------------------------------------------
#endif
