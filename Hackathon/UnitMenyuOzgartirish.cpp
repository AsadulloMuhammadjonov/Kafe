//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMenyuOzgartirish.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitKategoriya.h"
#include "UnitMenyu.h"
#include "UnitMenyuqoshish.h"
#include "UnitSotilganlar.h"
#include "UnitXodimlar.h"
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
TFormMenyuOzgartirish *FormMenyuOzgartirish;
//---------------------------------------------------------------------------
__fastcall TFormMenyuOzgartirish::TFormMenyuOzgartirish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormMenyuOzgartirish::Button1Click(TObject *Sender)
{
if((LabeledEdit1->Text=="") || (LabeledEdit2->Text=="") || (ComboBox1->Text=="") )
{

}
else
{
      int id=DataModule2->ADOQueryTovarlar->FieldByName("id")->AsInteger;
  DataModule2->ADOQueryTovarlar->Close();
  DataModule2->ADOQueryTovarlar->SQL->Text=" update Tovarlar set Nomi='"+LabeledEdit1->Text.Trim()+"', Narxi='"+LabeledEdit2->Text.Trim()+"', Kategoriya='"+ComboBox1->Text.Trim()+"' where id='"+IntToStr(id)+"' ";
  DataModule2->ADOQueryTovarlar->ExecSQL();
  DataModule2->ADOQueryTovarlar->Close();
  DataModule2->ADOQueryTovarlar->SQL->Text=" select * from tovarlar order by id desc ";
  DataModule2->ADOQueryTovarlar->Open();
  Close();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormMenyuOzgartirish::FormShow(TObject *Sender)
{
    DataModule2->ADOQueryKategoriya->Close();
 DataModule2->ADOQueryKategoriya->SQL->Text="select * from Kategoriya";
 DataModule2->ADOQueryKategoriya->Open();
 ComboBox1->Items->Clear();
 DataModule2->ADOQueryKategoriya->First();
 for(int i=0;i<DataModule2->ADOQueryKategoriya->RecordCount;i++)
 {

	 String a=DataModule2->ADOQueryKategoriya->FieldByName("Nomi")->AsString;
	 int id=DataModule2->ADOQueryKategoriya->FieldByName("id")->AsInteger;
	 ComboBox1->Items->Add(a);


		 DataModule2->ADOQueryKategoriya->Next();
 }
}
//---------------------------------------------------------------------------
void __fastcall TFormMenyuOzgartirish::FormClose(TObject *Sender, TCloseAction &Action)

{
   LabeledEdit1->Text="";
  LabeledEdit2->Text="";
  ComboBox1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TFormMenyuOzgartirish::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
