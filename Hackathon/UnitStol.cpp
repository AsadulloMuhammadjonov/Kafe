//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitStol.h"
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
#include "UnitTolov.h"
#include "UnitXodimlar.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitStollar.h"
#include "UnitKirish.h"
#include "UnitOmborKirim.h"
#include "UnitStolAlmashtirish.h"
#include "UnitTolovv.h"
#include "UnitXisobot.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormStol *FormStol;

String status;
//---------------------------------------------------------------------------
__fastcall TFormStol::TFormStol(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormStol::Button2Click(TObject *Sender)
{
LabeledEdit1->Text=DataModule2->ADOQueryStollar->FieldByName("nomi")->AsString;
status="abc";
}
//---------------------------------------------------------------------------
void __fastcall TFormStol::Button1Click(TObject *Sender)
{
if(LabeledEdit1->Text=="")
{

}
else
{
if(status=="abc")
{   int id=DataModule2->ADOQueryStollar->FieldByName("id")->AsInteger;
	DataModule2->ADOQueryStollar->Close();
	DataModule2->ADOQueryStollar->SQL->Text="update stollar set nomi='"+LabeledEdit1->Text.Trim()+"' where id="+IntToStr(id)+"";
	DataModule2->ADOQueryStollar->ExecSQL();
	DataModule2->ADOQueryStollar->SQL->Text="select * from stollar";
	DataModule2->ADOQueryStollar->Open();
	LabeledEdit1->Text="";
}
else
{
   DataModule2->ADOQueryStollar->Close();
   DataModule2->ADOQueryStollar->SQL->Text="insert into Stollar (Nomi) values ('"+LabeledEdit1->Text.Trim()+"')";
   DataModule2->ADOQueryStollar->ExecSQL();
   DataModule2->ADOQueryStollar->SQL->Text="select * from Stollar";
   DataModule2->ADOQueryStollar->Open();
   LabeledEdit1->Text="";

}
 status="";
 FormStollar->Button3->Click();

}
}
//---------------------------------------------------------------------------
void __fastcall TFormStol::Button3Click(TObject *Sender)
{
if(DataModule2->ADOQueryStollar->RecordCount==0)
{

}
else
{
switch(MessageDlg("O'chirasizmi",mtConfirmation,mbYesNo, 1))
{
case mrYes:
int id=DataModule2->ADOQueryStollar->FieldByName("id")->AsInteger;
DataModule2->ADOQueryStollar->Close();
DataModule2->ADOQueryStollar->SQL->Text="delete from stollar where id="+IntToStr(id)+"";
DataModule2->ADOQueryStollar->ExecSQL();
DataModule2->ADOQueryStollar->SQL->Text="select * from stollar";
DataModule2->ADOQueryStollar->Open();
FormStollar->Button3->Click();

}
}
}
//---------------------------------------------------------------------------
