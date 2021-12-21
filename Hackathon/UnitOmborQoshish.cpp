//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitOmborQoshish.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitKategoriya.h"
#include "UnitMenyu.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitSotilganlar.h"
#include "UnitXodimlar.h"
#include "UnitOmborOzgartirish.h"
#include "UnitKarkulOzgartirish.h"
#include "UnitKarkulQoshish.h"
#include "UnitKarkulyatsiya.h"
#include "UnitKirish.h"
#include "UnitOmborKirim.h"
#include "UnitStol.h"
#include "UnitStolAlmashtirish.h"
#include "UnitStollar.h"
#include "UnitTolov.h"
#include "UnitTolovv.h"
#include "UnitXisobot.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormOmborQoshish *FormOmborQoshish;
//---------------------------------------------------------------------------
__fastcall TFormOmborQoshish::TFormOmborQoshish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormOmborQoshish::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormOmborQoshish::Button1Click(TObject *Sender)
{
if((LabeledEdit1->Text=="") || (LabeledEdit2->Text=="") || (LabeledEdit3->Text=="") || (LabeledEdit4->Text=="") )
{
 ShowMessage("Nimanidur Unuttingiz");
}
else
{

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="INSERT INTO MENYU(nomi,miqdor,narxi,birligi) values('"+LabeledEdit1->Text.Trim()+"','"+LabeledEdit2->Text.Trim()+"','"+LabeledEdit3->Text.Trim()+"','"+LabeledEdit4->Text.Trim()+"')";
DataModule2->ADOQueryMenyu->ExecSQL();


DataModule2->ADOQueryKirim->Close();
DataModule2->ADOQueryKirim->SQL->Text="INSERT INTO kirim(nomi,miqdor,narxi,birligi,vaqt) values('"+LabeledEdit1->Text.Trim()+"','"+LabeledEdit2->Text.Trim()+"','"+LabeledEdit3->Text.Trim()+"','"+LabeledEdit4->Text.Trim()+"',NOW())";
DataModule2->ADOQueryKirim->ExecSQL();
DataModule2->ADOQueryKirim->SQL->Text="select * from kirim";
DataModule2->ADOQueryKirim->Open();

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu";
DataModule2->ADOQueryMenyu->Open();

Close();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormOmborQoshish::FormClose(TObject *Sender, TCloseAction &Action)

{
LabeledEdit1->Text="";
LabeledEdit2->Text="";
LabeledEdit3->Text="";
LabeledEdit4->Text="";
}
//---------------------------------------------------------------------------
