//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitXodimlar.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitKategoriya.h"
#include "UnitMenyu.h"
#include "UnitSotilganlar.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitOmborOzgartirish.h"
#include "UnitOmborQoshish.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
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
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormXodimlar *FormXodimlar;
//---------------------------------------------------------------------------
__fastcall TFormXodimlar::TFormXodimlar(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormXodimlar::Button1Click(TObject *Sender)
{
FormXodimQoshish->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormXodimlar::Button3Click(TObject *Sender)
{
FormXodimOzgartirish->LabeledEdit1->Text=DataModule2->ADOQueryXodimlar->FieldByName("fish")->AsString;
FormXodimOzgartirish->MaskEdit1->Text=DataModule2->ADOQueryXodimlar->FieldByName("tel")->AsString;
FormXodimOzgartirish->LabeledEdit2->Text=DataModule2->ADOQueryXodimlar->FieldByName("ish_xaqqi")->AsString;
FormXodimOzgartirish->LabeledEdit3->Text=DataModule2->ADOQueryXodimlar->FieldByName("parol")->AsInteger;
FormXodimOzgartirish->LabeledEdit4->Text=DataModule2->ADOQueryXodimlar->FieldByName("xaqqi")->AsInteger;
FormXodimOzgartirish->ComboBox1->Text=DataModule2->ADOQueryXodimlar->FieldByName("huquq")->AsString;
FormXodimOzgartirish->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormXodimlar::Button2Click(TObject *Sender)
{
 if(DataModule2->ADOQueryXodimlar->RecordCount==0)
{

}
else
{
String nomi=DataModule2->ADOQueryXodimlar->FieldByName("fish")->AsString;
String habbbb=nomi+" "+"O'chirilsinmi";
switch(MessageDlg(habbbb,mtConfirmation,mbYesNo, 1))
{
	case mrYes:

int id=DataModule2->ADOQueryXodimlar->FieldByName("id")->AsInteger;
DataModule2->ADOQueryXodimlar->Close();
DataModule2->ADOQueryXodimlar->SQL->Text="delete from xodimlar where id="+IntToStr(id)+"";
DataModule2->ADOQueryXodimlar->ExecSQL();
DataModule2->ADOQueryXodimlar->SQL->Text="select * from xodimlar";
DataModule2->ADOQueryXodimlar->Open();
}
}
}
//---------------------------------------------------------------------------

void __fastcall TFormXodimlar::Button4Click(TObject *Sender)
{
DataModule2->ADOQueryXodimlar->Close();
 DataModule2->ADOQueryXodimlar->SQL->Text="select * from xodimlar";
DataModule2->ADOQueryXodimlar->Open();
}
//---------------------------------------------------------------------------

