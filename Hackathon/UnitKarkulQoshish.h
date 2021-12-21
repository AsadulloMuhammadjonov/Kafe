//---------------------------------------------------------------------------

#ifndef UnitKarkulQoshishH
#define UnitKarkulQoshishH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormKarkulQoshish : public TForm
{
__published:	// IDE-managed Components
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TLabel *Label1;
	TLabel *Label2;
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TLabeledEdit *LabeledEdit3;
	TLabeledEdit *LabeledEdit4;
	TButton *Button1;
	TButton *Button2;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall ComboBox1Select(TObject *Sender);
	void __fastcall LabeledEdit1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormKarkulQoshish(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormKarkulQoshish *FormKarkulQoshish;
//---------------------------------------------------------------------------
#endif
