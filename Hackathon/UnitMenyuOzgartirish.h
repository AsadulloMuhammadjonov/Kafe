//---------------------------------------------------------------------------

#ifndef UnitMenyuOzgartirishH
#define UnitMenyuOzgartirishH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormMenyuOzgartirish : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TLabel *Label1;
	TComboBox *ComboBox1;
	TButton *Button2;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMenyuOzgartirish(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMenyuOzgartirish *FormMenyuOzgartirish;
//---------------------------------------------------------------------------
#endif
