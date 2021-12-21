//---------------------------------------------------------------------------

#ifndef UnitStolAlmashtirishH
#define UnitStolAlmashtirishH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormStolAlmashtirish : public TForm
{
__published:	// IDE-managed Components
	TFlowPanel *FlowPanel1;
	TBitBtn *BitBtn1;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormStolAlmashtirish(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormStolAlmashtirish *FormStolAlmashtirish;
//---------------------------------------------------------------------------
#endif
