//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitKirish.h"
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
#include "UnitOmborKirim.h"
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
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormKirish *FormKirish;

bool tozalash;
double a,b,n;
int c;
//---------------------------------------------------------------------------
__fastcall TFormKirish::TFormKirish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton1Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="1";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"1";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton10Click(TObject *Sender)
{
int u=LabeledEdit1->Text.Length();
if(u==1)
{
	LabeledEdit1->Text="";
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text.Delete(u,1);
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton12Click(TObject *Sender)
{
DataModule2->ADOQueryXodimlar->Close();
DataModule2->ADOQueryXodimlar->SQL->Text="select * from xodimlar where parol='"+LabeledEdit1->Text.Trim()+"'";
DataModule2->ADOQueryXodimlar->Open();

if(DataModule2->ADOQueryXodimlar->RecordCount==1)
{
  String nomi=DataModule2->ADOQueryXodimlar->FieldByName("fish")->AsString;
  if(DataModule2->ADOQueryXodimlar->FieldByName("huquq")->AsString=="Admin")
  {
  FormBosh->Label1->Caption=nomi;
  FormStollar->Label2->Caption=nomi;
	  FormBosh->ShowModal();

  }

  if(DataModule2->ADOQueryXodimlar->FieldByName("huquq")->AsString=="Kassir")
  {
	  FormStollar->ShowModal();
	  FormStollar->Label2->Caption=nomi;

  }



  LabeledEdit1->Text="";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton2Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="2";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"2";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton3Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="3";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"3";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton4Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="4";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"4";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton5Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="5";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"5";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton6Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="6";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"6";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton7Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="7";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"7";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton8Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="8";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"8";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton9Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="9";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"9";
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::SpeedButton11Click(TObject *Sender)
{
if((LabeledEdit1->Text=="0") || (tozalash==true))
{
	LabeledEdit1->Text="0";
	tozalash=false;
}
else
{
	LabeledEdit1->Text=LabeledEdit1->Text+"0";
}
}
//---------------------------------------------------------------------------

void __fastcall TFormKirish::LabeledEdit1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
 if(Key==13)
{
	SpeedButton12->Click();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKirish::LabeledEdit1Change(TObject *Sender)
{
LabeledEdit1->PasswordChar='!';
}
//---------------------------------------------------------------------------
