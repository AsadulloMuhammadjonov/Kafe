//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitKarkulyatsiya.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitKategoriya.h"
#include "UnitMenyu.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitOmborOzgartirish.h"
#include "UnitOmborQoshish.h"
#include "UnitSotilganlar.h"
#include "UnitXodimlar.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitKarkulOzgartirish.h"
#include "UnitKarkulQoshish.h"
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
TFormKarkulyatsiya *FormKarkulyatsiya;
//---------------------------------------------------------------------------
__fastcall TFormKarkulyatsiya::TFormKarkulyatsiya(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulyatsiya::Button1Click(TObject *Sender)
{
FormKarkulQoshish->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulyatsiya::Button2Click(TObject *Sender)
{
FormKarkulOzgartirish->ComboBox1->Text=DataModule2->ADOQueryKarkulyatsiya->FieldByName("nomi")->AsString;
FormKarkulOzgartirish->LabeledEdit1->Text=DataModule2->ADOQueryKarkulyatsiya->FieldByName("miqdor")->AsFloat;
FormKarkulOzgartirish->LabeledEdit3->Text=DataModule2->ADOQueryKarkulyatsiya->FieldByName("narxi")->AsFloat;
FormKarkulOzgartirish->LabeledEdit4->Text=DataModule2->ADOQueryKarkulyatsiya->FieldByName("summa")->AsFloat;
FormKarkulOzgartirish->LabeledEdit2->Text=DataModule2->ADOQueryKarkulyatsiya->FieldByName("birligi")->AsString;
FormKarkulOzgartirish->ComboBox2->Text=DataModule2->ADOQueryKarkulyatsiya->FieldByName("turi")->AsString;
FormKarkulOzgartirish->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulyatsiya::Button3Click(TObject *Sender)
{
if(DataModule2->ADOQueryKarkulyatsiya->RecordCount==0)
{

}
else
{
String nomi=DataModule2->ADOQueryKarkulyatsiya->FieldByName("nomi")->AsString;
String habbbb=nomi+"ni"+" "+"O'chirasizmi";
switch(MessageDlg(habbbb,mtConfirmation,mbYesNo, 1))
{
	case mrYes:

  int id=DataModule2->ADOQueryKarkulyatsiya->FieldByName("id")->AsInteger;
  DataModule2->ADOQueryKarkulyatsiya->Close();
  DataModule2->ADOQueryKarkulyatsiya->SQL->Text="delete  from karkul where id="+IntToStr(id)+"";
  DataModule2->ADOQueryKarkulyatsiya->ExecSQL();
  DataModule2->ADOQueryKarkulyatsiya->SQL->Text="select * from karkul ";
  DataModule2->ADOQueryKarkulyatsiya->Open();
}
Button5->Click();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulyatsiya::Button4Click(TObject *Sender)
{
if(DataModule2->ADOQueryKarkulyatsiya->RecordCount==0)
{

}
else
{
switch(MessageDlg("Tozalaysizmi",mtConfirmation,mbYesNo, 1))
{
case mrYes:
  DataModule2->ADOQueryKarkulyatsiya->Close();
  DataModule2->ADOQueryKarkulyatsiya->SQL->Text="delete  from karkul ";
  DataModule2->ADOQueryKarkulyatsiya->ExecSQL();
  DataModule2->ADOQueryKarkulyatsiya->SQL->Text="select * from karkul ";
  DataModule2->ADOQueryKarkulyatsiya->Open();
  Button5->Click();
}
}
}
//---------------------------------------------------------------------------

void __fastcall TFormKarkulyatsiya::DBGrid2CellClick(TColumn *Column)
{

FlowPanel1->DestroyComponents();
FlowPanel1->Visible=true;
String nomi=DataModule2->ADOQueryTovarlar->FieldByName("nomi")->AsString;
int id=DataModule2->ADOQueryTovarlar->FieldByName("id")->AsInteger;

  DataModule2->ADOQueryKarkulyatsiya->Close();
  DataModule2->ADOQueryKarkulyatsiya->SQL->Text="select * from karkul where turi='"+nomi+"'";
  DataModule2->ADOQueryKarkulyatsiya->Open();

   float jami=0;
   //float jam=0;
   DataModule2->ADOQueryKarkulyatsiya->First();
   for(int i=0;i<DataModule2->ADOQueryKarkulyatsiya->RecordCount;i++)
   {

	   TEdit *la=new TEdit(FlowPanel1);
	   la->Parent=FlowPanel1;
	   la->Font=Edit1->Font;
	   la->Width=Edit1->Width;
	   la->Height=Edit1->Height;
	   la->Alignment=taCenter;
	   la->ReadOnly=true;
	   String nom=DataModule2->ADOQueryKarkulyatsiya->FieldByName("nomi")->AsString;
	   la->Text=nom;

	   jami=jami+DataModule2->ADOQueryKarkulyatsiya->FieldByName("summa")->AsFloat;
	   DataModule2->ADOQueryKarkulyatsiya->Next();
   }
   Label2->Caption=jami;
   Label3->Caption=nomi;

}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulyatsiya::Button5Click(TObject *Sender)
{
FlowPanel1->Visible=false;
 DataModule2->ADOQueryKarkulyatsiya->Close();
  DataModule2->ADOQueryKarkulyatsiya->SQL->Text="select * from karkul ";
  DataModule2->ADOQueryKarkulyatsiya->Open();

	 float jami=0;
  // float jam=0;
   DataModule2->ADOQueryKarkulyatsiya->First();
   for(int i=0;i<DataModule2->ADOQueryKarkulyatsiya->RecordCount;i++)
   {
	   jami=jami+DataModule2->ADOQueryKarkulyatsiya->FieldByName("summa")->AsFloat;

	   DataModule2->ADOQueryKarkulyatsiya->Next();
   }
   Label2->Caption=jami;
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulyatsiya::FormShow(TObject *Sender)
{
  Button5->Click();
}
//---------------------------------------------------------------------------
