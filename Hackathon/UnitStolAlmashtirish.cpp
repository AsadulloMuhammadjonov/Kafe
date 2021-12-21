//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitStolAlmashtirish.h"
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
#include "UnitStollar.h"
#include "UnitTolov.h"
#include "UnitXodimlar.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitKirish.h"
#include "UnitOmborKirim.h"
#include "UnitTolovv.h"
#include "UnitXisobot.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormStolAlmashtirish *FormStolAlmashtirish;
String sss;
//---------------------------------------------------------------------------
__fastcall TFormStolAlmashtirish::TFormStolAlmashtirish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormStolAlmashtirish::FormShow(TObject *Sender)
{
 FlowPanel1->DestroyComponents();
DataModule2->ADOQueryStollar->Close();
DataModule2->ADOQueryStollar->SQL->Text=" select * from Stollar ";
DataModule2->ADOQueryStollar->Open();

DataModule2->ADOQueryStollar->First();
for(int i=0;i<DataModule2->ADOQueryStollar->RecordCount;i++)
{
	TBitBtn *ss=new TBitBtn(FlowPanel1);
	ss->Parent=FlowPanel1;
	ss->Font=BitBtn1->Font;
	ss->Width=BitBtn1->Width;
	ss->Height=BitBtn1->Height;
	String asdfg=DataModule2->ADOQueryStollar->FieldByName("Nomi")->AsString;
	ss->Caption=asdfg;
	ss->OnClick=BitBtn1->OnClick;
	DataModule2->ADOQueryStollar->Next();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormStolAlmashtirish::BitBtn1Click(TObject *Sender)
{
sss=((TBitBtn *) Sender)->Caption;

DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz where  stol='"+FormTolov->Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->Open();
if(DataModule2->ADOQueryOshpaz->RecordCount==0)
{

}
else
{

DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="update oshpaz set stol='"+sss+"'";
DataModule2->ADOQueryOshpaz->ExecSQL();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz";
DataModule2->ADOQueryOshpaz->Open();
//T_id="+IntToStr(idddd)+" and T_id="+IntToStr(idddd)+" and
}

FormTolov->Label7->Caption=sss;
Close();
}
//---------------------------------------------------------------------------
