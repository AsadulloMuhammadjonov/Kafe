//---------------------------------------------------------------------------

#ifndef UnitXodimOzgartirishH
#define UnitXodimOzgartirishH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TFormXodimOzgartirish : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *LabeledEdit1;
	TMaskEdit *MaskEdit1;
	TLabeledEdit *LabeledEdit2;
	TButton *Button1;
	TButton *Button2;
	TLabeledEdit *LabeledEdit4;
	TComboBox *ComboBox1;
	TLabeledEdit *LabeledEdit3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormXodimOzgartirish(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormXodimOzgartirish *FormXodimOzgartirish;
//---------------------------------------------------------------------------
#endif
