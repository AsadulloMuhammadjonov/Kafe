//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMenyu.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitKategoriya.h"
#include "UnitXodimlar.h"
#include "UnitSotilganlar.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitKarkulOzgartirish.h"
#include "UnitKarkulQoshish.h"
#include "UnitKarkulyatsiya.h"
#include "UnitKirish.h"
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
TFormMenyu *FormMenyu;
//---------------------------------------------------------------------------
__fastcall TFormMenyu::TFormMenyu(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormMenyu::Button3Click(TObject *Sender)
{
	   if(DataModule2->ADOQueryTovarlar->RecordCount==0)
{

}
else
{
   switch(MessageDlg("O'chirishga ishonchingiz komilmi ? ", mtConfirmation, mbYesNo, 1) )
   {
	 case mrYes:
   int id=DataModule2->ADOQueryTovarlar->FieldByName("id")->AsInteger;
   DataModule2->ADOQueryTovarlar->Close();
   DataModule2->ADOQueryTovarlar->SQL->Text=" delete from Tovarlar where id="+IntToStr(id)+" ";
   DataModule2->ADOQueryTovarlar->ExecSQL();
   DataModule2->ADOQueryTovarlar->SQL->Text=" select * from tovarlar ";
   DataModule2->ADOQueryTovarlar->Open();
   }
   }
}
//---------------------------------------------------------------------------

void __fastcall TFormMenyu::Button1Click(TObject *Sender)
{
FormMenyuQoshish->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormMenyu::Button2Click(TObject *Sender)
{
FormMenyuOzgartirish->LabeledEdit1->Text=DataModule2->ADOQueryTovarlar->FieldByName("Nomi")->AsString;
FormMenyuOzgartirish->LabeledEdit2->Text=DataModule2->ADOQueryTovarlar->FieldByName("Narxi")->AsInteger;
FormMenyuOzgartirish->ComboBox1->Text=DataModule2->ADOQueryTovarlar->FieldByName("Kategoriya")->AsString;
FormMenyuOzgartirish->ShowModal();
}
//---------------------------------------------------------------------------

