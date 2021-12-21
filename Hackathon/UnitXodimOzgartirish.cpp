//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitXodimOzgartirish.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitKategoriya.h"
#include "UnitMenyu.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitOmborOzgartirish.h"
#include "UnitOmborQoshish.h"
#include "UnitSotilganlar.h"
#include "UnitXodimlar.h"
#include "UnitXodimQoshish.h"
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
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormXodimOzgartirish *FormXodimOzgartirish;
//---------------------------------------------------------------------------
__fastcall TFormXodimOzgartirish::TFormXodimOzgartirish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormXodimOzgartirish::Button1Click(TObject *Sender)
{
int id=DataModule2->ADOQueryXodimlar->FieldByName("id")->AsInteger;
DataModule2->ADOQueryXodimlar->Close();
DataModule2->ADOQueryXodimlar->SQL->Text="update xodimlar set fish='"+LabeledEdit1->Text.Trim()+"',parol='"+LabeledEdit3->Text.Trim()+"',huquq='"+ComboBox1->Text.Trim()+"',tel='"+MaskEdit1->Text.Trim()+"',ish_xaqqi='"+LabeledEdit2->Text.Trim()+"',xaqqi='"+LabeledEdit4->Text.Trim()+"' where Id="+IntToStr(id)+"";
DataModule2->ADOQueryXodimlar->ExecSQL();
DataModule2->ADOQueryXodimlar->SQL->Text="select * from xodimlar";
DataModule2->ADOQueryXodimlar->Open();

Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormXodimOzgartirish::FormClose(TObject *Sender, TCloseAction &Action)

{
LabeledEdit1->Text="";
LabeledEdit2->Text="";
LabeledEdit3->Text="";
LabeledEdit4->Text="";
ComboBox1->Text="";
MaskEdit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TFormXodimOzgartirish::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
