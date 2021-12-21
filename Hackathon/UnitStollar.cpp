//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitStollar.h"
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
#include "UnitTolov.h"
#include "UnitXodimlar.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitKirish.h"
#include "UnitOmborKirim.h"
#include "UnitStolAlmashtirish.h"
#include "UnitTolovv.h"
#include "UnitXisobot.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormStollar *FormStollar;
String sss;
//---------------------------------------------------------------------------
__fastcall TFormStollar::TFormStollar(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormStollar::Button1Click(TObject *Sender)
{
FormStol->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFormStollar::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormStollar::Button3Click(TObject *Sender)
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


	DataModule2->ADOQueryKutish->Close();
	DataModule2->ADOQueryKutish->SQL->Text="select * from kutish where turi='"+asdfg+"'";
	DataModule2->ADOQueryKutish->Open();

	if(DataModule2->ADOQueryKutish->RecordCount==0)
	{

	}
	else
	{
		ss->Font->Color=clRed;
	}

}
}
//---------------------------------------------------------------------------
void __fastcall TFormStollar::FormShow(TObject *Sender)
{
  Button3->Click();
}
//---------------------------------------------------------------------------
void __fastcall TFormStollar::BitBtn1Click(TObject *Sender)
{
 sss=((TPanel *) Sender)->Caption;
FormTolov->Label7->Caption=sss;
FormTolov->ShowModal();
}
//---------------------------------------------------------------------------
