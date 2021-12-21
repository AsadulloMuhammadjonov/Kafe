//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitKategoriya.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitMenyu.h"
#include "UnitXodimlar.h"
#include "UnitSotilganlar.h"
#include "UnitKarkulOzgartirish.h"
#include "UnitKarkulQoshish.h"
#include "UnitKarkulyatsiya.h"
#include "UnitKirish.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitOmborKirim.h"
#include "UnitOmborOzgartirish.h"
#include "UnitOmborQoshish.h"
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
TFormKategoriya *FormKategoriya;

String status;
//---------------------------------------------------------------------------
__fastcall TFormKategoriya::TFormKategoriya(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormKategoriya::Button1Click(TObject *Sender)
{
	if(LabeledEdit1->Text=="" )
{
	ShowMessage("Nimanidur unutdingiz");
}
else
{
if(status=="abs")
{
int id=DataModule2->ADOQueryKategoriya->FieldByName("id")->AsInteger;
DataModule2->ADOQueryKategoriya->Close();
DataModule2->ADOQueryKategoriya->SQL->Text="update Kategoriya set Nomi='"+LabeledEdit1->Text.Trim()+"' where id="+IntToStr(id)+"";
DataModule2->ADOQueryKategoriya->ExecSQL();
DataModule2->ADOQueryKategoriya->SQL->Text="select * from kategoriya order by id desc";
DataModule2->ADOQueryKategoriya->Open();
LabeledEdit1->Text="";
}
else
{
DataModule2->ADOQueryKategoriya->Close();
DataModule2->ADOQueryKategoriya->SQL->Text="insert into Kategoriya(Nomi) values('"+LabeledEdit1->Text.Trim()+"')";
DataModule2->ADOQueryKategoriya->ExecSQL();
DataModule2->ADOQueryKategoriya->SQL->Text="select * from kategoriya order by id desc";
DataModule2->ADOQueryKategoriya->Open();
LabeledEdit1->Text="";
}
status="";
}
}
//---------------------------------------------------------------------------

void __fastcall TFormKategoriya::Button3Click(TObject *Sender)
{
LabeledEdit1->Text=DataModule2->ADOQueryKategoriya->FieldByName("Nomi")->AsString;
status="abs";
}
//---------------------------------------------------------------------------

void __fastcall TFormKategoriya::Button2Click(TObject *Sender)
{
if(DataModule2->ADOQueryKategoriya->RecordCount==0)
{

}
else
{
switch(MessageDlg("O'chirishni hoxlaysizmi ?",mtConfirmation,mbYesNo, 1))
{
	case mrYes:
int id=DataModule2->ADOQueryKategoriya->FieldByName("id")->AsInteger;
DataModule2->ADOQueryKategoriya->Close();
DataModule2->ADOQueryKategoriya->SQL->Text="delete from Kategoriya where id="+IntToStr(id)+"";
DataModule2->ADOQueryKategoriya->ExecSQL();
DataModule2->ADOQueryKategoriya->SQL->Text="select * from kategoriya";
DataModule2->ADOQueryKategoriya->Open();
}
}
}
//---------------------------------------------------------------------------

