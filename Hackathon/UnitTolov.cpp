//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitTolov.h"
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
#include "UnitXodimlar.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitStol.h"
#include "UnitStollar.h"
#include "UnitStolAlmashtirish.h"
#include "UnitTolovv.h"
#include "UnitKirish.h"
#include "UnitOmborKirim.h"
#include "UnitXisobot.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TFormTolov *FormTolov;

int p=1;
String ssss;
String ssssaa;
//---------------------------------------------------------------------------
__fastcall TFormTolov::TFormTolov(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::Button7Click(TObject *Sender)
{
	ssssaa=((TButton *) Sender)->Caption;
	DataModule2->ADOQueryTovarlar->SQL->Text="select * from Tovarlar where nomi='"+ssssaa+"' ";
	DataModule2->ADOQueryTovarlar->Open();
	int id=DataModule2->ADOQueryTovarlar->FieldByName("id")->AsInteger;
String nomi=DataModule2->ADOQueryTovarlar->FieldByName("Nomi")->AsString;
int narxi=DataModule2->ADOQueryTovarlar->FieldByName("Narxi")->AsInteger;
String kate=DataModule2->ADOQueryTovarlar->FieldByName("kategoriya")->AsString;
int miqdor=1;
int summa=narxi*miqdor;

DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from Vaqtinchasavdo where Tov_id="+IntToStr(id)+"";
DataModule2->ADOQueryVaqtinchasavdo->Open();
int iid=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Tov_id")->AsInteger;
int sum=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Summa")->AsInteger;
int miq=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Miqdor")->AsInteger;
if(id==iid)
{
int sdf=miq+miqdor;
DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="update Vaqtinchasavdo set Miqdor='"+IntToStr(sdf)+"',Summa='"+(sum+summa)+"' where Tov_id="+IntToStr(id)+"";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from vaqtinchasavdo";
DataModule2->ADOQueryVaqtinchasavdo->Open();


}
else
{
DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="insert into Vaqtinchasavdo (Tov_id,Tov_nomi,Narxi,Miqdor,Summa,kategoriya) values("+IntToStr(id)+",'"+nomi+"','"+narxi+"','"+miqdor+"','"+summa+"','"+kate+"')";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from Vaqtinchasavdo";
DataModule2->ADOQueryVaqtinchasavdo->Open();
}



DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz where T_id="+IntToStr(id)+" and stol='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->Open();
int iiddd=DataModule2->ADOQueryOshpaz->FieldByName("T_id")->AsInteger;
int miq2=DataModule2->ADOQueryOshpaz->FieldByName("Miqdor")->AsInteger;
if(id==iiddd)
{
int sdf=miq2+miqdor;
DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="update oshpaz set Miqdor='"+IntToStr(sdf)+"' where T_id="+IntToStr(id)+" and stol='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->ExecSQL();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz";
DataModule2->ADOQueryOshpaz->Open();


}
else
{
DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="insert into oshpaz (T_id,Nomi,Miqdor,stol) values("+IntToStr(id)+",'"+nomi+"','"+miqdor+"','"+Label7->Caption+"')";
DataModule2->ADOQueryOshpaz->ExecSQL();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz";
DataModule2->ADOQueryOshpaz->Open();
}


//String nomi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Tov_nomi")->AsString;
int miqqqqq=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("miqdor")->AsInteger;
DataModule2->ADOQueryKarkulyatsiya->Close();
DataModule2->ADOQueryKarkulyatsiya->SQL->Text="select * from karkul where turi='"+ssssaa+"'";
DataModule2->ADOQueryKarkulyatsiya->Open();
DataModule2->ADOQueryKarkulyatsiya->First();
for(int i=0;i<DataModule2->ADOQueryKarkulyatsiya->RecordCount;i++)
{
 String mon=DataModule2->ADOQueryKarkulyatsiya->FieldByName("nomi")->AsString;
 float miqq=DataModule2->ADOQueryKarkulyatsiya->FieldByName("miqdor")->AsFloat;
 DataModule2->ADOQueryKarkulyatsiya->Next();

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu where nomi='"+mon+"'";
DataModule2->ADOQueryMenyu->Open();

DataModule2->ADOQueryMenyu->First();
for(int i=0;i<DataModule2->ADOQueryMenyu->RecordCount;i++)
{
 int iddf=DataModule2->ADOQueryMenyu->FieldByName("id")->AsInteger;
 float miqqq=DataModule2->ADOQueryMenyu->FieldByName("miqdor")->AsFloat;
 DataModule2->ADOQueryMenyu->Next();

Label10->Caption=miqqq-miqq;
Label11->Caption=Label10->Caption.SubString(1,4);

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="update menyu set miqdor='"+Label11->Caption.Trim()+"' where id="+IntToStr(iddf)+"";
DataModule2->ADOQueryMenyu->ExecSQL();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu";
DataModule2->ADOQueryMenyu->Open();
}
}


float iii=StrToFloat(Label4->Caption);
float iiii=iii+summa;
Label4->Caption=iiii;


if(Label7->Caption=="Ozi Bilan")
{
float narxxx=StrToFloat(Label4->Caption);
 Label6->Caption=narxxx;
}
else
{
if(DataModule2->ADOQueryVaqtinchasavdo->FieldByName("band")->AsString!="")
{
 float narxxx=StrToFloat(Label4->Caption);
 Label6->Caption=narxxx;
}
else
{
float narxxx=StrToFloat(Label4->Caption);
float xaq=StrToFloat(Label5->Caption);
float narrr=narxxx/100;
float fo=narrr*xaq;
float nara=narxxx+fo;
Label6->Caption=nara;
Label13->Caption=fo;
}

}


}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::Button6Click(TObject *Sender)
{
	ssss=((TButton *) Sender)->Caption;
	DataModule2->ADOQueryTovarlar->SQL->Text="select * from Tovarlar where Kategoriya like'%"+ssss+"%' order by Kategoriya asc";
	DataModule2->ADOQueryTovarlar->Open();

	FlowPanel1->DestroyComponents();

DataModule2->ADOQueryTovarlar->First();
for(int i=0;i<DataModule2->ADOQueryTovarlar->RecordCount;i++)
{
	TButton *ddd=new TButton(FlowPanel1);
	ddd->Parent=FlowPanel1;
	ddd->Font=Button7->Font;
	ddd->Width=Button7->Width;
	ddd->Height=Button7->Height;
	String asdfg=DataModule2->ADOQueryTovarlar->FieldByName("Nomi")->AsString;
	ddd->Caption=asdfg;
	ddd->OnClick=Button7->OnClick;
	DataModule2->ADOQueryTovarlar->Next();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::FormShow(TObject *Sender)
{
 FlowPanel1->DestroyComponents();
DataModule2->ADOQueryKategoriya->Close();
DataModule2->ADOQueryKategoriya->SQL->Text=" select * from Kategoriya ";
DataModule2->ADOQueryKategoriya->Open();

DataModule2->ADOQueryKategoriya->First();
for(int i=0;i<DataModule2->ADOQueryKategoriya->RecordCount;i++)
{
	TButton *ddd=new TButton(FlowPanel1);
	ddd->Parent=FlowPanel1;
	ddd->Font=Button6->Font;
	ddd->Width=Button6->Width;
	ddd->Height=Button6->Height;
	String asdfg=DataModule2->ADOQueryKategoriya->FieldByName("Nomi")->AsString;
	ddd->Caption=asdfg;
	ddd->OnClick=Button6->OnClick;
	DataModule2->ADOQueryKategoriya->Next();
}

DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="delete from Vaqtinchasavdo";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from Vaqtinchasavdo";
DataModule2->ADOQueryVaqtinchasavdo->Open();

DataModule2->ADOQueryKutish->Close();
DataModule2->ADOQueryKutish->SQL->Text="select * from kutish where turi='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryKutish->Open();

	 DataModule2->ADOQueryKutish->First();
	 //int ww=DataModule2->ADOQueryKutish->RecordCount;
	 for(int i=0;i<DataModule2->ADOQueryKutish->RecordCount;i++)
	 {
		 int id=DataModule2->ADOQueryKutish->FieldByName("Tov_id")->AsInteger;
		 String nomi=DataModule2->ADOQueryKutish->FieldByName("Tov_nomi")->AsString;
		 int narxi=DataModule2->ADOQueryKutish->FieldByName("narxi")->AsInteger;
		 int miqdor=DataModule2->ADOQueryKutish->FieldByName("miqdor")->AsInteger;
		 int summa=DataModule2->ADOQueryKutish->FieldByName("summa")->AsInteger;
		 String kate=DataModule2->ADOQueryKutish->FieldByName("kate")->AsString;
		 DataModule2->ADOQueryKutish->Next();

DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="insert into Vaqtinchasavdo (tov_id,tov_nomi,narxi,miqdor,summa,kategoriya) values("+IntToStr(id)+",'"+nomi+"','"+narxi+"','"+miqdor+"','"+summa+"','"+kate+"')";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from Vaqtinchasavdo";
DataModule2->ADOQueryVaqtinchasavdo->Open();


	 }

DataModule2->ADOQueryKutish->Close();
DataModule2->ADOQueryKutish->SQL->Text="select * from kutish where turi='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryKutish->Open();


DataModule2->ADOQueryKutish->Close();
DataModule2->ADOQueryKutish->SQL->Text="delete from kutish where turi='"+Label7->Caption+"' ";
DataModule2->ADOQueryKutish->ExecSQL();
DataModule2->ADOQueryKutish->SQL->Text="select * from kutish";
DataModule2->ADOQueryKutish->Open();

int jami=0;
DataModule2->ADOQueryVaqtinchasavdo->First();
for(int j=0;j<DataModule2->ADOQueryVaqtinchasavdo->RecordCount;j++)
{
  jami=jami+DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Summa")->AsInteger;
  DataModule2->ADOQueryVaqtinchasavdo->Next();
}
Label4->Caption=jami;
Label5->Caption=0;
Label6->Caption=0;

 String nomi=DataModule2->ADOQueryXodimlar->FieldByName("fish")->AsString;
 int xaqqqi=DataModule2->ADOQueryXodimlar->FieldByName("xaqqi")->AsInteger;
 int iddddd=DataModule2->ADOQueryXodimlar->FieldByName("id")->AsInteger;
 Label16->Caption=xaqqqi;
 Label17->Caption=iddddd;
 Label12->Caption=nomi;

DataModule2->ADOQueryXodimlar->Close();
DataModule2->ADOQueryXodimlar->SQL->Text="SELECT * FROM xodimlar where fish='"+Label12->Caption+"'";
DataModule2->ADOQueryXodimlar->Open();



int xaq=DataModule2->ADOQueryXodimlar->FieldByName("ish_xaqqi")->AsInteger;
Label5->Caption=xaq;

float narxxx=StrToFloat(Label4->Caption);
float xaqq=StrToFloat(Label5->Caption);
//int nanxaq=narxxx/xaqq;
//Label6->Caption=narxxx+nanxaq;

float narrr=narxxx/100;
float fo=narrr*xaq;
float nara=narxxx+fo;
Label6->Caption=nara;
Label13->Caption=fo;

}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::Button8Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::Button5Click(TObject *Sender)
{
FlowPanel1->DestroyComponents();
DataModule2->ADOQueryKategoriya->Close();
DataModule2->ADOQueryKategoriya->SQL->Text=" select * from Kategoriya ";
DataModule2->ADOQueryKategoriya->Open();

DataModule2->ADOQueryKategoriya->First();
for(int i=0;i<DataModule2->ADOQueryKategoriya->RecordCount;i++)
{
	TButton *ddd=new TButton(FlowPanel1);
	ddd->Parent=FlowPanel1;
	ddd->Font=Button6->Font;
	ddd->Width=Button6->Width;
	ddd->Height=Button6->Height;
	String asdfg=DataModule2->ADOQueryKategoriya->FieldByName("Nomi")->AsString;
	ddd->Caption=asdfg;
	ddd->OnClick=Button6->OnClick;
	DataModule2->ADOQueryKategoriya->Next();
}

}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::FormClose(TObject *Sender, TCloseAction &Action)
{
  if(DataModule2->ADOQueryVaqtinchasavdo->RecordCount==0)
 {

 }
 else
 {
	 DataModule2->ADOQueryVaqtinchasavdo->First();
	 //int ww=DataModule2->ADOQueryVaqtinchasavdo->RecordCount;
	 for(int i=0;i<DataModule2->ADOQueryVaqtinchasavdo->RecordCount;i++)
	 {
		 int id=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Tov_id")->AsInteger;
		 String nomi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Tov_nomi")->AsString;
		 int narxi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("narxi")->AsInteger;
		 int miqdor=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("miqdor")->AsInteger;
		 int summa=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("summa")->AsInteger;
		 String kate=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("kategoriya")->AsString;

DataModule2->ADOQueryKutish->Close();
DataModule2->ADOQueryKutish->SQL->Text="insert into kutish (tov_id,tov_nomi,narxi,miqdor,summa,turi,kate) values("+IntToStr(id)+",'"+nomi+"','"+narxi+"','"+miqdor+"','"+summa+"','"+Label7->Caption.Trim()+"','"+kate+"')";
DataModule2->ADOQueryKutish->ExecSQL();
DataModule2->ADOQueryKutish->SQL->Text="select * from kutish";
DataModule2->ADOQueryKutish->Open();

DataModule2->ADOQueryVaqtinchasavdo->Next();

	 }
 }

 FormStollar->Button3->Click();
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::SpeedButton1Click(TObject *Sender)
{
float miqdor=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("miqdor")->AsFloat;
float narxi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("narxi")->AsFloat;
float summa=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("summa")->AsFloat;
float yangi=miqdor+1;
float yan=summa+narxi;

int id=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("tov_id")->AsInteger;
int idde=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("id")->AsInteger;
DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="update Vaqtinchasavdo set miqdor='"+FloatToStr(yangi)+"',summa='"+FloatToStr(yan)+"' where tov_id="+IntToStr(id)+"";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from Vaqtinchasavdo ";
DataModule2->ADOQueryVaqtinchasavdo->Open();

int umsum=StrToInt(Label4->Caption.Trim());
Label4->Caption=umsum+narxi;

DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz where T_id="+IntToStr(id)+" and stol='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->Open();
int iiddd=DataModule2->ADOQueryOshpaz->FieldByName("T_id")->AsInteger;
int miq2=DataModule2->ADOQueryOshpaz->FieldByName("Miqdor")->AsInteger;

int sdf=miq2+1;
DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="update oshpaz set Miqdor='"+IntToStr(sdf)+"' where T_id="+IntToStr(id)+" and stol='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->ExecSQL();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz";
DataModule2->ADOQueryOshpaz->Open();

String nomi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Tov_nomi")->AsString;
int miqqqqq=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("miqdor")->AsInteger;
DataModule2->ADOQueryKarkulyatsiya->Close();
DataModule2->ADOQueryKarkulyatsiya->SQL->Text="select * from karkul where turi='"+nomi+"'";
DataModule2->ADOQueryKarkulyatsiya->Open();
DataModule2->ADOQueryKarkulyatsiya->First();
for(int i=0;i<DataModule2->ADOQueryKarkulyatsiya->RecordCount;i++)
{
 String mon=DataModule2->ADOQueryKarkulyatsiya->FieldByName("nomi")->AsString;
 float miqq=DataModule2->ADOQueryKarkulyatsiya->FieldByName("miqdor")->AsFloat;
 DataModule2->ADOQueryKarkulyatsiya->Next();

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu where nomi='"+mon+"'";
DataModule2->ADOQueryMenyu->Open();

DataModule2->ADOQueryMenyu->First();
for(int i=0;i<DataModule2->ADOQueryMenyu->RecordCount;i++)
{
 int iddf=DataModule2->ADOQueryMenyu->FieldByName("id")->AsInteger;
 float miqqq=DataModule2->ADOQueryMenyu->FieldByName("miqdor")->AsFloat;
 DataModule2->ADOQueryMenyu->Next();

 Label10->Caption=miqqq-miqq;
Label11->Caption=Label10->Caption.SubString(1,4);

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="update menyu set miqdor='"+Label11->Caption.Trim()+"' where id="+IntToStr(iddf)+"";
DataModule2->ADOQueryMenyu->ExecSQL();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu";
DataModule2->ADOQueryMenyu->Open();
}
}



TLocateOptions top;
top<<loPartialKey<<loCaseInsensitive;
if(!DataModule2->ADOQueryVaqtinchasavdo->Locate("id",idde,top));

if(Label7->Caption=="Ozi Bilan")
{
float narxxx=StrToFloat(Label4->Caption);
 Label6->Caption=narxxx;
}
else
{
if(DataModule2->ADOQueryVaqtinchasavdo->FieldByName("band")->AsString!="")
{
 float narxxx=StrToFloat(Label4->Caption);
 Label6->Caption=narxxx;
}
else
{
float narxxx=StrToFloat(Label4->Caption);;
float xaq=StrToFloat(Label5->Caption);

//int nanxaq=narxxx/xaq;
//Label6->Caption=narxxx+nanxaq;
float narrr=narxxx/100;
float fo=narrr*xaq;
float nara=narxxx+fo;
Label6->Caption=nara;
Label13->Caption=fo;

}
}

}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::SpeedButton2Click(TObject *Sender)
{
float miqdor=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("miqdor")->AsFloat;
if(miqdor==1)
{

}
else
{
float narxi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("narxi")->AsFloat;
float summa=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("summa")->AsFloat;
float yangi=miqdor-1;
float yan=summa-narxi;

int id=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("tov_id")->AsInteger;
int idde=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("id")->AsInteger;
DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="update Vaqtinchasavdo set miqdor='"+FloatToStr(yangi)+"',summa='"+FloatToStr(yan)+"' where tov_id="+IntToStr(id)+"";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from Vaqtinchasavdo ";
DataModule2->ADOQueryVaqtinchasavdo->Open();

int umsum=StrToInt(Label4->Caption.Trim());
Label4->Caption=umsum-narxi;

DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz where T_id="+IntToStr(id)+" and stol='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->Open();
int iiddd=DataModule2->ADOQueryOshpaz->FieldByName("T_id")->AsInteger;
int miq2=DataModule2->ADOQueryOshpaz->FieldByName("Miqdor")->AsInteger;

int sdf=miq2-1;
DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="update oshpaz set Miqdor='"+IntToStr(sdf)+"' where T_id="+IntToStr(id)+" and stol='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->ExecSQL();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz";
DataModule2->ADOQueryOshpaz->Open();


String nomi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Tov_nomi")->AsString;int miqqqqq=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("miqdor")->AsInteger;
DataModule2->ADOQueryKarkulyatsiya->Close();
DataModule2->ADOQueryKarkulyatsiya->SQL->Text="select * from karkul where turi='"+nomi+"'";
DataModule2->ADOQueryKarkulyatsiya->Open();
DataModule2->ADOQueryKarkulyatsiya->First();
for(int i=0;i<DataModule2->ADOQueryKarkulyatsiya->RecordCount;i++)
{
 String mon=DataModule2->ADOQueryKarkulyatsiya->FieldByName("nomi")->AsString;
 float miqq=DataModule2->ADOQueryKarkulyatsiya->FieldByName("miqdor")->AsFloat;
 DataModule2->ADOQueryKarkulyatsiya->Next();

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu where nomi='"+mon+"'";
DataModule2->ADOQueryMenyu->Open();

DataModule2->ADOQueryMenyu->First();
for(int i=0;i<DataModule2->ADOQueryMenyu->RecordCount;i++)
{
 int iddf=DataModule2->ADOQueryMenyu->FieldByName("id")->AsInteger;
 float miqqq=DataModule2->ADOQueryMenyu->FieldByName("miqdor")->AsFloat;
 DataModule2->ADOQueryMenyu->Next();

 Label10->Caption=miqqq+miqq;
Label11->Caption=Label10->Caption.SubString(1,4);

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="update menyu set miqdor='"+Label11->Caption.Trim()+"' where id="+IntToStr(iddf)+"";
DataModule2->ADOQueryMenyu->ExecSQL();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu";
DataModule2->ADOQueryMenyu->Open();
}
}
TLocateOptions top;
top<<loPartialKey<<loCaseInsensitive;
if(!DataModule2->ADOQueryVaqtinchasavdo->Locate("id",idde,top));

float narxxx=StrToFloat(Label4->Caption);
float xaq=StrToFloat(Label5->Caption);
int nanxaq=narxxx/xaq;
Label6->Caption=narxxx+nanxaq;

if(Label7->Caption=="Ozi Bilan")
{
//float narxxx=StrToFloat(Label4->Caption);
 Label6->Caption=narxxx;
}
else
{
 if(DataModule2->ADOQueryVaqtinchasavdo->FieldByName("band")->AsString!="")
{
 //float narxxx=StrToFloat(Label4->Caption);
 Label6->Caption=narxxx;
}
else
{
float narrr=narxxx/100;
float fo=narrr*xaq;
float nara=narxxx+fo;
Label6->Caption=nara;
Label13->Caption=fo;
}
}


}
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::SpeedButton3Click(TObject *Sender)
{
if(DataModule2->ADOQueryVaqtinchasavdo->RecordCount==0)
{

}
else
{
switch(MessageDlg("O'chirasizmi",mtConfirmation,mbYesNo, 1))
{
case mrYes:
int summa=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("summa")->AsInteger;
int umsum=StrToInt(Label4->Caption.Trim());
Label4->Caption=umsum-summa;

float narxxx=StrToFloat(Label4->Caption);
float xaq=StrToFloat(Label5->Caption);
//int nanxaq=narxxx/xaq;
//Label6->Caption=narxxx+nanxaq;
if(Label7->Caption=="Ozi Bilan")
{
//float narxxx=StrToFloat(Label4->Caption);
 Label6->Caption=narxxx;
}
else
{

float narrr=narxxx/100;
float fo=narrr*xaq;
float nara=narxxx+fo;
Label6->Caption=nara;
Label13->Caption=fo;
}



String nomi=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("Tov_nomi")->AsString;
int miqqqqq=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("miqdor")->AsInteger;
DataModule2->ADOQueryKarkulyatsiya->Close();
DataModule2->ADOQueryKarkulyatsiya->SQL->Text="select * from karkul where turi='"+nomi+"'";
DataModule2->ADOQueryKarkulyatsiya->Open();
DataModule2->ADOQueryKarkulyatsiya->First();
for(int i=0;i<DataModule2->ADOQueryKarkulyatsiya->RecordCount;i++)
{
 String mon=DataModule2->ADOQueryKarkulyatsiya->FieldByName("nomi")->AsString;
 float miqq=DataModule2->ADOQueryKarkulyatsiya->FieldByName("miqdor")->AsFloat;
 DataModule2->ADOQueryKarkulyatsiya->Next();

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu where nomi='"+mon+"'";
DataModule2->ADOQueryMenyu->Open();

DataModule2->ADOQueryMenyu->First();
for(int i=0;i<DataModule2->ADOQueryMenyu->RecordCount;i++)
{
 int iddf=DataModule2->ADOQueryMenyu->FieldByName("id")->AsInteger;
 float miqqq=DataModule2->ADOQueryMenyu->FieldByName("miqdor")->AsFloat;
 DataModule2->ADOQueryMenyu->Next();

 Label10->Caption=miqqq+(miqq*miqqqqq);
Label11->Caption=Label10->Caption.SubString(1,4);

DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="update menyu set miqdor='"+Label11->Caption.Trim()+"' where id="+IntToStr(iddf)+"";
DataModule2->ADOQueryMenyu->ExecSQL();
DataModule2->ADOQueryMenyu->SQL->Text="select * from menyu";
DataModule2->ADOQueryMenyu->Open();
}
}



int id=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("id")->AsInteger;
int idddd=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("tov_id")->AsInteger;
DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="delete from Vaqtinchasavdo where id="+IntToStr(id)+"";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from Vaqtinchasavdo";
DataModule2->ADOQueryVaqtinchasavdo->Open();

DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="delete from oshpaz where T_id="+IntToStr(idddd)+" and stol='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->ExecSQL();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz";
DataModule2->ADOQueryOshpaz->Open();
}
}
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::SpeedButton4Click(TObject *Sender)
{
if(DataModule2->ADOQueryVaqtinchasavdo->FieldByName("band")->AsString!="")
{

}
else
{
int id=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("tov_id")->AsInteger;
int summa=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("summa")->AsInteger;

if(Label7->Caption=="Ozi Bilan")
{

}
else
{

float narxxx=summa;
float xaq=StrToFloat(Label5->Caption);
float xaqaaaa=StrToFloat(Label6->Caption);
float xaqaaaaa=StrToFloat(Label13->Caption);
float narrr=narxxx/100;
float fo=narrr*xaq;
float nara=xaqaaaa-fo;
Label6->Caption=nara;
Label13->Caption=xaqaaaaa-fo;

}
DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="update vaqtinchasavdo set band='Ozi Bilan'  where tov_id='"+IntToStr(id)+"'";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from vaqtinchasavdo";
DataModule2->ADOQueryVaqtinchasavdo->Open();



}
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
   if(DataModule2->ADOQueryVaqtinchasavdo->FieldByName("band")->AsString!="")
   {
	   DBGrid1->Canvas->Brush->Color=clAqua;
   }
   if(DataModule2->ADOQueryVaqtinchasavdo->FieldByName("band")->AsString=="")
   {
	  DBGrid1->Canvas->Brush->Color=clWhite;
   }
   DBGrid1->DefaultDrawColumnCell(Rect,DataCol,Column,State);
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::Button1Click(TObject *Sender)
{
FormStolAlmashtirish->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::Button2Click(TObject *Sender)
{

// DataModule2->ADOQueryVaqtinchasavdo->First();
// for(int d=0;d<DataModule2->ADOQueryVaqtinchasavdo->RecordCount)
int idddd=DataModule2->ADOQueryVaqtinchasavdo->FieldByName("tov_id")->AsInteger;
DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz where  stol='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->Open();
if(DataModule2->ADOQueryOshpaz->RecordCount==0)
{

}
else
{
//  frxReport1->PrepareReport();
//  frxReport1->PrintOptions->ShowDialog=false;
//  frxReport1->Print();
frxReport1->ShowReport();

DataModule2->ADOQueryOshpaz->Close();
DataModule2->ADOQueryOshpaz->SQL->Text="delete from oshpaz where stol='"+Label7->Caption.Trim()+"'";
DataModule2->ADOQueryOshpaz->ExecSQL();
DataModule2->ADOQueryOshpaz->SQL->Text="select * from oshpaz";
DataModule2->ADOQueryOshpaz->Open();
//T_id="+IntToStr(idddd)+" and T_id="+IntToStr(idddd)+" and
}
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::Button3Click(TObject *Sender)
{
DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text=" update vaqtinchasavdo set jamisumma='"+Label6->Caption.Trim()+"', umsumma='"+Label4->Caption.Trim()+"', q_x_narxi='"+Label13->Caption.Trim()+"' ";
DataModule2->ADOQueryVaqtinchasavdo->ExecSQL();
DataModule2->ADOQueryVaqtinchasavdo->Close();
DataModule2->ADOQueryVaqtinchasavdo->SQL->Text="select * from vaqtinchasavdo ";
DataModule2->ADOQueryVaqtinchasavdo->Open();

//  frxReport2->PrepareReport();
//  frxReport2->PrintOptions->ShowDialog=false;
//  frxReport2->Print();
frxReport2->ShowReport();
}
//---------------------------------------------------------------------------
void __fastcall TFormTolov::Button4Click(TObject *Sender)
{
 FormTolovv->Label1->Caption=Label7->Caption;
 FormTolovv->Label5->Caption=Label4->Caption;
 FormTolovv->Label6->Caption=Label13->Caption;
 FormTolovv->Label7->Caption=Label6->Caption;
 FormTolovv->Label8->Caption=Label16->Caption;
 FormTolovv->Label9->Caption=Label17->Caption;
 FormTolovv->Label10->Caption=Label12->Caption;
 FormTolovv->ShowModal();
}
//---------------------------------------------------------------------------


