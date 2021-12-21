//---------------------------------------------------------------------------

#ifndef UnitMenyuqoshishH
#define UnitMenyuqoshishH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormMenyuQoshish : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TComboBox *ComboBox1;
	TLabel *Label1;
	TButton *Button1;
	TButton *Button2;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMenyuQoshish(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMenyuQoshish *FormMenyuQoshish;
//---------------------------------------------------------------------------
#endif
