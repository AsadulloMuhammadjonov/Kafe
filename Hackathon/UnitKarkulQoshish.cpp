//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitKarkulQoshish.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitKarkulOzgartirish.h"
#include "UnitKarkulyatsiya.h"
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
TFormKarkulQoshish *FormKarkulQoshish;
//---------------------------------------------------------------------------
__fastcall TFormKarkulQoshish::TFormKarkulQoshish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulQoshish::FormShow(TObject *Sender)
{
 DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu";
DataModule2->ADOQueryMenyu->Open();

DataModule2->ADOQueryMenyu->First();
ComboBox1->Items->Clear();
for(int i=0;i<DataModule2->ADOQueryMenyu->RecordCount;i++)
{
	String nomi=DataModule2->ADOQueryMenyu->FieldByName("nomi")->AsString;
	ComboBox1->Items->Add(nomi);
	DataModule2->ADOQueryMenyu->Next();
}

DataModule2->ADOQueryTovarlar->Close();
DataModule2->ADOQueryTovarlar->SQL->Text="select * from tovarlar";
DataModule2->ADOQueryTovarlar->Open();

DataModule2->ADOQueryTovarlar->First();
ComboBox2->Items->Clear();
for(int i=0;i<DataModule2->ADOQueryTovarlar->RecordCount;i++)
{
	String nomi=DataModule2->ADOQueryTovarlar->FieldByName("nomi")->AsString;
	ComboBox2->Items->Add(nomi);
	DataModule2->ADOQueryTovarlar->Next();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulQoshish::Button1Click(TObject *Sender)
{
if((ComboBox1->Text=="") || (LabeledEdit1->Text=="") || (ComboBox2->Text=="") || (LabeledEdit2->Text=="") || (LabeledEdit3->Text=="") || (LabeledEdit4->Text=="")  )
{

}
else
{
DataModule2->ADOQueryKarkulyatsiya->Close();
DataModule2->ADOQueryKarkulyatsiya->SQL->Text="insert into karkul (nomi,narxi,miqdor,summa,birligi,turi) values('"+ComboBox1->Text.Trim()+"','"+LabeledEdit3->Text.Trim()+"','"+LabeledEdit1->Text.Trim()+"','"+LabeledEdit4->Text.Trim()+"','"+LabeledEdit2->Text.Trim()+"','"+ComboBox2->Text.Trim()+"')";
DataModule2->ADOQueryKarkulyatsiya->ExecSQL();
DataModule2->ADOQueryKarkulyatsiya->SQL->Text="select * from karkul";
DataModule2->ADOQueryKarkulyatsiya->Open();

Close();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulQoshish::FormClose(TObject *Sender, TCloseAction &Action)

{
ComboBox1->Text="";
ComboBox2->Text="";
LabeledEdit1->Text="";
LabeledEdit2->Text="";
LabeledEdit3->Text="";
LabeledEdit4->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulQoshish::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulQoshish::ComboBox1Select(TObject *Sender)
{
	DataModule2->ADOQueryMenyu->Close();
 DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu";
 DataModule2->ADOQueryMenyu->Open();

 DataModule2->ADOQueryMenyu->First();
 for(int i=0;i<DataModule2->ADOQueryMenyu->RecordCount;i++)
 {
	 String a=DataModule2->ADOQueryMenyu->FieldByName("nomi")->AsString;
	 String kg=DataModule2->ADOQueryMenyu->FieldByName("birligi")->AsString;
	 int narx=DataModule2->ADOQueryMenyu->FieldByName("narxi")->AsInteger;
	 if(a==ComboBox1->Text)
	 {
	   LabeledEdit2->Text=kg;
	   LabeledEdit3->Text=narx;
	 }


		 DataModule2->ADOQueryMenyu->Next();
 }
}
//---------------------------------------------------------------------------
void __fastcall TFormKarkulQoshish::LabeledEdit1Change(TObject *Sender)
{
if(LabeledEdit1->Text=="")
{

}
else
{
float narx,miqdor;
narx=StrToFloat(LabeledEdit3->Text);
miqdor=StrToFloat(LabeledEdit1->Text);
LabeledEdit4->Text=narx*miqdor;
}
}
//---------------------------------------------------------------------------
