//---------------------------------------------------------------------------

#include <vcl.h>
#include <DateUtils.hpp>
#pragma hdrstop

#include "UnitTolovv.h"
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
#include "UnitXodimlar.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitKirish.h"
#include "UnitOmborKirim.h"
#include "UnitXisobot.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TFormTolovv *FormTolovv;

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
__fastcall TFormTolovv::TFormTolovv(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormTolovv::Button4Click(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormTolovv::Button3Click(TObject *Sender)
{
double ch,n,p,u,b;
n=StrToInt(Edit1->Text);
p=StrToInt(Edit2->Text);
u=StrToInt(Label7->Caption);
b=u-(n+p);

if(Edit1->Text==0)
{
	Edit1->Text=b;
}
if(Edit2->Text==0)
{
	Edit2->Text=b;
}

DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text=" update vaqtinchasavdo set jamisumma='"+Label7->Caption.Trim()+"',tolandi='"+FloatToStr(n+p)+"',umsumma='"+Label5->Caption.Trim()+"', q_x_narxi='"+Label6->Caption.Trim()+"'";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from vaqtinchasavdo ";
DataModule2->ADOQueryVaqtinchasavdo->Open();

//  frxReport1->PrepareReport();
//  frxReport1->PrintOptions->ShowDialog=false;
//  frxReport1->Print();



String xodim=FormTolov->Label12->Caption;
int ish_xaq=StrToInt(Label6->Caption);
int x_id=StrToInt(Label9->Caption.Trim());
int xaq=StrToInt(Label8->Caption.Trim());
int ummmmm=StrToInt(Label5->Caption.Trim());

DataModule2->ADOQueryVaqtinchasavdo->First();
int x=DataModule2->ADOQueryVaqtinchasavdo->RecordCount;
for(int i=0;i<DataModule2->ADOQueryVaqtinchasavdo->RecordCount+x;i++)
{
int id=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Tov_id")->AsInteger;
String nomi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Tov_nomi")->AsString;
int narxi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Narxi")->AsInteger;
int Miqdor=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Miqdor")->AsInteger;
int summa=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("summa")->AsInteger;
String kate=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("kategoriya")->AsString;
DataModule2->ADOQueryVaqtinchasavdo->Next();



DataModule2->ADOQuerySotilganlar->Close();
DataModule2->ADOQuerySotilganlar->SQL->Text="insert into Sotilganlar(Tov_id,Tov_Nomi,SotishNarx,Miqdor,Summa,x_fish,foiz,Stol,Vaqt) values('"+IntToStr(id)+"','"+nomi+"','"+narxi+"','"+Miqdor+"','"+summa+"','"+xodim+"','"+ish_xaq+"','"+Label1->Caption.Trim()+"',NOW())";
DataModule2->ADOQuerySotilganlar->ExecSQL();
DataModule2->ADOQuerySotilganlar->SQL->Text="select * from sotilganlar";
DataModule2->ADOQuerySotilganlar->Open();

DataModule2->ADOQueryKassakirim->Close();
DataModule2->ADOQueryKassakirim->SQL->Text="insert into kassakirim(fish,xizmat_xaqqi,jami,naqt,plastik,vaqt) values('"+FormTolov->Label12->Caption+"','"+(Label7->Caption.ToInt()-Label5->Caption.ToInt())+"','"+Label7->Caption.Trim()+"','"+Edit1->Text.Trim()+"','"+Edit2->Text.Trim()+"',NOW())";
DataModule2->ADOQueryKassakirim->ExecSQL();
DataModule2->ADOQueryKassakirim->SQL->Text="select * from kassakirim";
DataModule2->ADOQueryKassakirim->Open();

DateTimePicker1->Date=Now();
DateTimePicker2->Date=Now();

TDateTime sanaTest1=DateTimePicker1->DateTime;
TDateTime sanaTest2=DateTimePicker2->DateTime;

String sana1=mySQLDateTime(sanaTest1);
String sana2=mySQLDateTime(sanaTest2);

DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text="select * from statik_t where  vaqt>='"+sana1+"'   and  vaqt<='"+sana2+"' and t_id='"+IntToStr(id)+"' ";
DataModule2->ADOQueryStatik_T->Open();



int idd=DataModule2->ADOQueryStatik_T->FieldByName("t_id")->AsInteger;
int miq=DataModule2->ADOQueryStatik_T->FieldByName("miqdor")->AsInteger;
int sum=DataModule2->ADOQueryStatik_T->FieldByName("summa")->AsInteger;


if(id==idd)
{DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text="update statik_t set Miqdor='"+IntToStr(miq+Miqdor)+"',Summa='"+(sum+summa)+"' where t_id='"+IntToStr(idd)+"' and vaqt>='"+sana1+"'   and  vaqt<='"+sana2+"' ";
DataModule2->ADOQueryStatik_T->ExecSQL();
DataModule2->ADOQueryStatik_T->SQL->Text="select * from statik_t";
DataModule2->ADOQueryStatik_T->Open();
}
 else
 {
 DataModule2->ADOQueryStatik_T->Close();
DataModule2->ADOQueryStatik_T->SQL->Text="insert into statik_t(t_id,nomi,narxi,miqdor,summa,kategoriya,vaqt) values('"+IntToStr(id)+"','"+nomi+"','"+narxi+"','"+Miqdor+"','"+summa+"','"+kate+"',NOW())";
DataModule2->ADOQueryStatik_T->ExecSQL();
DataModule2->ADOQueryStatik_T->SQL->Text="select * from statik_t";
DataModule2->ADOQueryStatik_T->Open();
 }

DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="delete from Vaqtinchasavdo where Tov_id="+IntToStr(id)+"";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from vaqtinchasavdo";
DataModule2->ADOQueryVaqtinchasavdo->Open();
}

DateTimePicker1->Date=Now();
DateTimePicker2->Date=Now();

TDateTime sanaTest1=DateTimePicker1->Time;
TDateTime sanaTest2=DateTimePicker2->Time;

String sana1=mySQLDateTime(sanaTest1);
String sana2=mySQLDateTime(sanaTest2);

float narrr=ummmmm/100;
//float ish_xaqqi2=narrr*ish_xaq;
float xaqqi2=narrr*xaq;
float foiiiiz=ish_xaq-xaqqi2;

DataModule2->ADOQueryXaqqi->Close();
DataModule2->ADOQueryXaqqi->SQL->Text="select * from xaqqi where  vaqt>='"+sana1+"'   and  vaqt<='"+sana2+"' and x_id='"+IntToStr(x_id)+"' ";
DataModule2->ADOQueryXaqqi->Open();


int x_id2=DataModule2->ADOQueryXaqqi->FieldByName("x_id")->AsInteger;
int ish_xaq2=DataModule2->ADOQueryXaqqi->FieldByName("ish_xaqqi")->AsInteger;
int xaq22=DataModule2->ADOQueryXaqqi->FieldByName("xaqqi")->AsInteger;
int foiiiiiiizzz=DataModule2->ADOQueryXaqqi->FieldByName("foiz")->AsInteger;

if(x_id==x_id2)
{
DataModule2->ADOQueryXaqqi->Close();
DataModule2->ADOQueryXaqqi->SQL->Text="update xaqqi set ish_xaqqi='"+IntToStr(ish_xaq+ish_xaq2)+"',xaqqi='"+(xaqqi2+xaq22)+"',foiz='"+(foiiiiz+foiiiiiiizzz)+"' where x_id='"+IntToStr(x_id2)+"' and vaqt>='"+sana1+"'   and  vaqt<='"+sana2+"' ";
DataModule2->ADOQueryXaqqi->ExecSQL();
DataModule2->ADOQueryXaqqi->SQL->Text="select * from xaqqi";
DataModule2->ADOQueryXaqqi->Open();
}
else
{
DataModule2->ADOQueryXaqqi->Close();
DataModule2->ADOQueryXaqqi->SQL->Text="insert into xaqqi(x_id,fish,ish_xaqqi,xaqqi,foiz,vaqt) values('"+IntToStr(x_id)+"','"+xodim+"','"+ish_xaq+"','"+xaqqi2+"','"+foiiiiz+"',NOW())";
DataModule2->ADOQueryXaqqi->ExecSQL();
DataModule2->ADOQueryXaqqi->SQL->Text="select * from xaqqi";
DataModule2->ADOQueryXaqqi->Open();

}


DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="delete from oshpaz where stol='"+FormTolov->Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->ExecSQL();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz";
DataModule2->ADOQueryOshpaz->Open();

Label5->Caption="0";
Label6->Caption="0";
Label7->Caption="0";
Edit1->Text=0;
Edit2->Text=0;
FormTolov->Label4->Caption=0;
FormTolov->Label6->Caption=0;
FormTolov->Label13->Caption=0;


}
//---------------------------------------------------------------------------
void __fastcall TFormTolovv::Button1Click(TObject *Sender)
{
Edit1->Text=Label7->Caption;
Edit2->Text=0;
}
//---------------------------------------------------------------------------
void __fastcall TFormTolovv::Button2Click(TObject *Sender)
{
Edit2->Text=Label7->Caption;
Edit1->Text=0;
}
//---------------------------------------------------------------------------
