//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
#include "UnitMenyu.h"
#include "UnitKategoriya.h"
#include "UnitXodimlar.h"
#include "UnitSotilganlar.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitOmborQoshish.h"
#include "UnitOmborOzgartirish.h"
#include "UnitKarkulOzgartirish.h"
#include "UnitKarkulQoshish.h"
#include "UnitKarkulyatsiya.h"
#include "UnitOmborKirim.h"
#include "UnitStol.h"
#include "UnitStolAlmashtirish.h"
#include "UnitStollar.h"
#include "UnitTolov.h"
#include "UnitTolovv.h"
#include "UnitXisobot.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitKirish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormOmbor *FormOmbor;
//---------------------------------------------------------------------------
__fastcall TFormOmbor::TFormOmbor(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormOmbor::Button4Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormOmbor::LabeledEdit1Change(TObject *Sender)
{
DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu where nomi like'%"+LabeledEdit1->Text.Trim()+"%'";
DataModule2->ADOQueryMenyu->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFormOmbor::Button1Click(TObject *Sender)
{
FormOmborQoshish->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormOmbor::Button2Click(TObject *Sender)
{
 if(DataModule2->ADOQueryMenyu->RecordCount==0)
{

}
else
{
FormOmborOzgartirish->LabeledEdit1->Text=DataModule2->ADOQueryMenyu->FieldByName("nomi")->AsString;
FormOmborOzgartirish->LabeledEdit2->Text=DataModule2->ADOQueryMenyu->FieldByName("miqdor")->AsFloat;
FormOmborOzgartirish->LabeledEdit3->Text=DataModule2->ADOQueryMenyu->FieldByName("narxi")->AsString;
FormOmborOzgartirish->LabeledEdit4->Text=DataModule2->ADOQueryMenyu->FieldByName("birligi")->AsString;
 FormOmborOzgartirish->ShowModal();
}

}
//---------------------------------------------------------------------------

void __fastcall TFormOmbor::Button3Click(TObject *Sender)
{
 if(DataModule2->ADOQueryMenyu->RecordCount==0)
{

}
else
{
String nomi=DataModule2->ADOQueryMenyu->FieldByName("nomi")->AsString;
String habbbb=nomi+" "+"O'chirilsinmi";

switch(MessageDlg(habbbb,mtConfirmation,mbYesNo, 1))
{
	case mrYes:

int id=DataModule2->ADOQueryMenyu->FieldByName("id")->AsInteger;
DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="delete from menyu where id="+IntToStr(id)+"";
DataModule2->ADOQueryMenyu->ExecSQL();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu";
DataModule2->ADOQueryMenyu->Open();
}
}
}
//---------------------------------------------------------------------------

void __fastcall TFormOmbor::DBGrid1DblClick(TObject *Sender)
{
 FormOmborKirim->Label3->Caption=DataModule2->ADOQueryMenyu->FieldByName("id")->AsInteger;
 FormOmborKirim->Label2->Caption=DataModule2->ADOQueryMenyu->FieldByName("miqdor")->AsFloat;
 FormOmborKirim->LabeledEdit1->Text=DataModule2->ADOQueryMenyu->FieldByName("nomi")->AsString;
 FormOmborKirim->LabeledEdit3->Text=DataModule2->ADOQueryMenyu->FieldByName("narxi")->AsInteger;
 FormOmborKirim->LabeledEdit4->Text=DataModule2->ADOQueryMenyu->FieldByName("birligi")->AsString;
 FormOmborKirim->ShowModal();
}
//---------------------------------------------------------------------------

