//---------------------------------------------------------------------------

#ifndef UnitXisobotH
#define UnitXisobotH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFormXisobot : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TfrxDBDataset *frxDBDataset1;
	TfrxReport *frxReport1;
	TDateTimePicker *DateTimePicker1;
	TDateTimePicker *DateTimePicker2;
	TfrxDBDataset *frxDBDataset2;
	TfrxReport *frxReport2;
	TfrxDBDataset *frxDBDataset3;
	TfrxReport *frxReport3;
	TfrxDBDataset *frxDBDataset4;
	TfrxReport *frxReport4;
	TfrxDBDataset *frxDBDataset5;
	TfrxReport *frxReport5;
	TfrxDBDataset *frxDBDataset6;
	TfrxReport *frxReport6;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormXisobot(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormXisobot *FormXisobot;
//---------------------------------------------------------------------------
#endif
