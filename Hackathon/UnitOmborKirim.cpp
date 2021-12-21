//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitOmborKirim.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitKarkulOzgartirish.h"
#include "UnitKarkulQoshish.h"
#include "UnitKarkulyatsiya.h"
#include "UnitKategoriya.h"
#include "UnitMenyu.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitOmborOzgartirish.h"
#include "UnitOmborQoshish.h"
#include "UnitSotilganlar.h"
#include "UnitStol.h"
#include "UnitStolAlmashtirish.h"
#include "UnitStollar.h"
#include "UnitTolov.h"
#include "UnitTolovv.h"
#include "UnitXisobot.h"
#include "UnitXodimlar.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitKirish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormOmborKirim *FormOmborKirim;
//---------------------------------------------------------------------------
__fastcall TFormOmborKirim::TFormOmborKirim(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormOmborKirim::Button1Click(TObject *Sender)
{
if((LabeledEdit1->Text=="") || (LabeledEdit2->Text=="") || (LabeledEdit3->Text=="") || (LabeledEdit4->Text=="") )
{

}
else
{
DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu where id='"+Label3->Caption.Trim()+"'";
DataModule2->ADOQueryMenyu->Open();

int re=DataModule2->ADOQueryMenyu->FieldByName("id")->AsInteger;
if(re==Label3->Caption.Trim())
{

int id=DataModule2->ADOQueryMenyu->FieldByName("id")->AsInteger;
DataModule2->ADOQueryMenyu->Close();

DataModule2->ADOQueryMenyu->SQL->Text="update menyu set nomi='"+LabeledEdit1->Text.Trim()+"',miqdor='"+(Label2->Caption.ToDouble()+LabeledEdit2->Text.ToDouble())+"',narxi='"+LabeledEdit3->Text.Trim()+"',birligi='"+LabeledEdit4->Text.Trim()+"' where id="+IntToStr(id)+"";
DataModule2->ADOQueryMenyu->ExecSQL();

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="INSERT INTO kirim(nomi,miqdor,narxi,birligi,vaqt) values('"+LabeledEdit1->Text.Trim()+"','"+LabeledEdit2->Text.Trim()+"','"+LabeledEdit3->Text.Trim()+"','"+LabeledEdit4->Text.Trim()+"',NOW())";
DataModule2->ADOQueryMenyu->ExecSQL();
DataModule2->ADOQueryMenyu->SQL->Text="select * from kirim";
DataModule2->ADOQueryMenyu->Open();



DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="SELECT * FROM menyu";
DataModule2->ADOQueryMenyu->Open();


Close();
}
}
}
//---------------------------------------------------------------------------
void __fastcall TFormOmborKirim::FormClose(TObject *Sender, TCloseAction &Action)

{
Label2->Caption=0;
Label3->Caption=0;
LabeledEdit1->Text="";
LabeledEdit2->Text="";
LabeledEdit3->Text="";
LabeledEdit4->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TFormOmborKirim::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
