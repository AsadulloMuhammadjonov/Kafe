//---------------------------------------------------------------------------

#ifndef UnitStollarH
#define UnitStollarH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TFormStollar : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TFlowPanel *FlowPanel1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TBitBtn *BitBtn1;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormStollar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormStollar *FormStollar;
//---------------------------------------------------------------------------
#endif
