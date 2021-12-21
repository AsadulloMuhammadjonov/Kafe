//---------------------------------------------------------------------------

#ifndef UnitKarkulOzgartirishH
#define UnitKarkulOzgartirishH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormKarkulOzgartirish : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TComboBox *ComboBox2;
	TLabel *Label2;
	TComboBox *ComboBox1;
	TLabeledEdit *LabeledEdit3;
	TLabeledEdit *LabeledEdit4;
	TLabeledEdit *LabeledEdit2;
	TLabeledEdit *LabeledEdit1;
	TButton *Button2;
	TButton *Button1;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall ComboBox1Select(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall LabeledEdit1Exit(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormKarkulOzgartirish(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormKarkulOzgartirish *FormKarkulOzgartirish;
//---------------------------------------------------------------------------
#endif
