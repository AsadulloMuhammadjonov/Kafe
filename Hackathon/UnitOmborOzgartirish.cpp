//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitOmborOzgartirish.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitKategoriya.h"
#include "UnitMenyu.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitOmborQoshish.h"
#include "UnitSotilganlar.h"
#include "UnitXodimlar.h"
#include "UnitKarkulOzgartirish.h"
#include "UnitKarkulQoshish.h"
#include "UnitKarkulyatsiya.h"
#include "UnitKirish.h"
#include "UnitOmborKirim.h"
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
TFormOmborOzgartirish *FormOmborOzgartirish;
//---------------------------------------------------------------------------
__fastcall TFormOmborOzgartirish::TFormOmborOzgartirish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormOmborOzgartirish::Button1Click(TObject *Sender)
{
int id=DataModule2->ADOQueryMenyu->FieldByName("id")->AsInteger;
DataModule2->ADOQueryMenyu->Close();
DataModule2->ADOQueryMenyu->SQL->Text="update menyu set nomi='"+LabeledEdit1->Text.Trim()+"',miqdor='"+LabeledEdit2->Text.Trim()+"',narxi='"+LabeledEdit3->Text.Trim()+"',birligi='"+LabeledEdit4->Text.Trim()+"' where id="+IntToStr(id)+"";
DataModule2->ADOQueryMenyu->ExecSQL();
DataModule2->ADOQueryMenyu->SQL->Text="SELECT * FROM menyu";
DataModule2->ADOQueryMenyu->Open();

Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormOmborOzgartirish::FormClose(TObject *Sender, TCloseAction &Action)

{
  LabeledEdit1->Text="";
LabeledEdit2->Text="";
LabeledEdit3->Text="";
LabeledEdit4->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TFormOmborOzgartirish::Button2Click(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------
