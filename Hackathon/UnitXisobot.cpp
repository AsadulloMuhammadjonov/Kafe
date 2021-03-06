//---------------------------------------------------------------------------

#include <vcl.h>
#include <DateUtils.hpp>
#pragma hdrstop

#include "UnitXisobot.h"
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
#include "UnitStolAlmashtirish.h"
#include "UnitStollar.h"
#include "UnitTolov.h"
#include "UnitTolovv.h"
#include "UnitXodimlar.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitKirish.h"
#include "UnitOmborKirim.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TFormXisobot *FormXisobot;

AnsiString mySQLDateTime(TDateTime sanaTest)
	{
		  Word year, month, date, hour, minute, sekund, msekund;
  AnsiString month1, date1, year1, hour1, minute1, sekund1, Natija;
  DecodeDateTime(sanaTest, year, month, date, hour, minute, sekund, msekund);
  if(month<10)
  {
	month1="0"+IntToStr(month);
  }
  else
	{
	  month1=IntToStr(month);
	}
	if(date<10)
	{
	  date1="0"+IntToStr(date);
	}
	else
	{
	  date1=IntToStr(date);
	}
	  if(hour<10)
	{
	  hour1="0"+IntToStr(hour);
	}
	else
	{
	  hour1=IntToStr(hour);
	}
	if(minute<10)
    {
      minute1="0"+IntToStr(minute);
	}
	else
    {
	  minute1=IntToStr(minute);
	}
	if(sekund<10)
	{
      sekund1="0"+IntToStr(sekund);
	}
	else
    {
	  sekund1=IntToStr(sekund);
	}
	year1=IntToStr(year);
    Natija=year1+"-"+month1+"-"+date1+" "+hour1+":"+minute1+":"+sekund1;
	return Natija;
  }
//---------------------------------------------------------------------------
__fastcall TFormXisobot::TFormXisobot(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormXisobot::Button1Click(TObject *Sender)
{
TDateTime sanaTest1=DateTimePicker1->DateTime;
TDateTime sanaTest2=DateTimePicker2->DateTime;

String sana1=mySQLDateTime(sanaTest1);
String sana2=mySQLDateTime(sanaTest2);



DataModule2->ADOQuerySotilganlar->Close();
DataModule2->ADOQuerySotilganlar->SQL->Text="select * from sotilganlar where vaqt>='"+sana1+"' and vaqt<='"+sana2+"' ";
DataModule2->ADOQuerySotilganlar->Open();

int jami=0;
DataModule2->ADOQuerySotilganlar->First();
for(int i=0;i<DataModule2->ADOQuerySotilganlar->RecordCount;i++)
{
	int id=DataModule2->ADOQuerySotilganlar->FieldByName("id")->AsInteger;
	jami=jami+DataModule2->ADOQuerySotilganlar->FieldByName("summa")->AsInteger;
	DataModule2->ADOQuerySotilganlar->Next();



}
DataModule2->ADOQuerySotilganlar->Close();
DataModule2->ADOQuerySotilganlar->SQL->Text=" update sotilganlar set jamisumma='"+IntToStr(jami)+"'";
DataModule2->ADOQuerySotilganlar->ExecSQL();
DataModule2->ADOQuerySotilganlar->Close();
DataModule2->ADOQuerySotilganlar->SQL->Text="select * from sotilganlar where vaqt>='"+sana1+"' and vaqt<='"+sana2+"' ";
DataModule2->ADOQuerySotilganlar->Open();



 frxReport1->ShowReport();
}
//---------------------------------------------------------------------------
void __fastcall TFormXisobot::Button2Click(TObject *Sender)
{
TDateTime sanaTest1=DateTimePicker1->DateTime;
TDateTime sanaTest2=DateTimePicker2->DateTime;

String sana1=mySQLDateTime(sanaTest1);
String sana2=mySQLDateTime(sanaTest2);

DataModule2->ADOQueryKirim->Close();
DataModule2->ADOQueryKirim->SQL->Text="select * from kirim where vaqt>='"+sana1+"' and vaqt<='"+sana2+"' ";
DataModule2->ADOQueryKirim->Open();

frxReport2->ShowReport();
}
//---------------------------------------------------------------------------

void __fastcall TFormXisobot::FormShow(TObject *Sender)
{
 DateTimePicker1->Date=Now();
 DateTimePicker2->Date=Now();
}
//---------------------------------------------------------------------------

void __fastcall TFormXisobot::Button4Click(TObject *Sender)
{
TDateTime sanaTest1=DateTimePicker1->DateTime;
TDateTime sanaTest2=DateTimePicker2->DateTime;

String sana1=mySQLDateTime(sanaTest1);
String sana2=mySQLDateTime(sanaTest2);

DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text="select * from statik_t where vaqt>='"+sana1+"' and vaqt<='"+sana2+"' ";
DataModule2->ADOQueryStatik_T->Open();

int jami=0;
DataModule2->ADOQueryStatik_T->First();
for(int i=0;i<DataModule2->ADOQueryStatik_T->RecordCount;i++)
{
	int id=DataModule2->ADOQueryStatik_T->FieldByName("id")->AsInteger;
	jami=jami+DataModule2->ADOQueryStatik_T->FieldByName("summa")->AsInteger;
	DataModule2->ADOQueryStatik_T->Next();



}
DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text=" update statik_t set jamisumma='"+IntToStr(jami)+"'";
DataModule2->ADOQueryStatik_T->ExecSQL();
DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text="select * from statik_t where vaqt>='"+sana1+"' and vaqt<='"+sana2+"' ";
DataModule2->ADOQueryStatik_T->Open();

frxReport3->ShowReport();
}
//---------------------------------------------------------------------------

void __fastcall TFormXisobot::Button6Click(TObject *Sender)
{
  TDateTime sanaTest1=DateTimePicker1->DateTime;
TDateTime sanaTest2=DateTimePicker2->DateTime;

String sana1=mySQLDateTime(sanaTest1);
String sana2=mySQLDateTime(sanaTest2);

//String kate;



DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text="select * from statik_t where vaqt>='"+sana1+"'  and vaqt<='"+sana2+"' ";
DataModule2->ADOQueryStatik_T->Open();

 int jami=0;
DataModule2->ADOQueryStatik_T->First();
for(int i=0;i<DataModule2->ADOQueryStatik_T->RecordCount;i++)
{
	int id=DataModule2->ADOQueryStatik_T->FieldByName("id")->AsInteger;
	jami=jami+DataModule2->ADOQueryStatik_T->FieldByName("summa")->AsInteger;
	DataModule2->ADOQueryStatik_T->Next();



}
DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text=" update statik_t set jamisumma='"+IntToStr(jami)+"'";
DataModule2->ADOQueryStatik_T->ExecSQL();
DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text="select * from statik_t where vaqt>='"+sana1+"' and vaqt<='"+sana2+"' ";
DataModule2->ADOQueryStatik_T->Open();

frxReport4->ShowReport();
}
//---------------------------------------------------------------------------

void __fastcall TFormXisobot::Button7Click(TObject *Sender)
{
TDateTime sanaTest1=DateTimePicker1->DateTime;
TDateTime sanaTest2=DateTimePicker2->DateTime;

String sana1=mySQLDateTime(sanaTest1);
String sana2=mySQLDateTime(sanaTest2);




DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text="select * from statik_t where vaqt>='"+sana1+"'and kategoriya='????????'  and vaqt<='"+sana2+"' ";
DataModule2->ADOQueryStatik_T->Open();



int jami=0;
DataModule2->ADOQueryStatik_T->First();
for(int i=0;i<DataModule2->ADOQueryStatik_T->RecordCount;i++)
{
	int id=DataModule2->ADOQueryStatik_T->FieldByName("id")->AsInteger;
	jami=jami+DataModule2->ADOQueryStatik_T->FieldByName("summa")->AsInteger;
	DataModule2->ADOQueryStatik_T->Next();



}
DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text=" update statik_t set jamisumma='"+IntToStr(jami)+"'";
DataModule2->ADOQueryStatik_T->ExecSQL();
DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text="select * from statik_t where vaqt>='"+sana1+"' and kategoriya='Kaboblar' and vaqt<='"+sana2+"' ";
DataModule2->ADOQueryStatik_T->Open();

frxReport6->ShowReport();
}
//---------------------------------------------------------------------------

void __fastcall TFormXisobot::Button5Click(TObject *Sender)
{
TDateTime sanaTest1=DateTimePicker1->DateTime;
TDateTime sanaTest2=DateTimePicker2->DateTime;

String sana1=mySQLDateTime(sanaTest1);
String sana2=mySQLDateTime(sanaTest2);

DataModule2->ADOQueryXaqqi->Close();
DataModule2->ADOQueryXaqqi->SQL->Text="select * from xaqqi where  vaqt>='"+sana1+"'   and  vaqt<='"+sana2+"' ";
DataModule2->ADOQueryXaqqi->Open();

int jami=0;
DataModule2->ADOQueryXaqqi->First();
for(int i=0;i<DataModule2->ADOQueryXaqqi->RecordCount;i++)
{
	int id=DataModule2->ADOQueryXaqqi->FieldByName("id")->AsInteger;
	jami=jami+DataModule2->ADOQueryXaqqi->FieldByName("xaqqi")->AsInteger;
	DataModule2->ADOQueryXaqqi->Next();



}
DataModule2->ADOQueryXaqqi->Close();
DataModule2->ADOQueryXaqqi->SQL->Text=" update xaqqi set jamisumma='"+IntToStr(jami)+"'";
DataModule2->ADOQueryXaqqi->ExecSQL();
DataModule2->ADOQueryXaqqi->Close();
DataModule2->ADOQueryXaqqi->SQL->Text="select * from xaqqi where vaqt>='"+sana1+"' and vaqt<='"+sana2+"' ";
DataModule2->ADOQueryXaqqi->Open();

frxReport5->ShowReport();
}
//---------------------------------------------------------------------------

