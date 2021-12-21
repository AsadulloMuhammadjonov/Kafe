//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitXodimQoshish.h"
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
#include "UnitXodimOzgartirish.h"
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
TFormXodimQoshish *FormXodimQoshish;
//---------------------------------------------------------------------------
__fastcall TFormXodimQoshish::TFormXodimQoshish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormXodimQoshish::Button2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormXodimQoshish::Button1Click(TObject *Sender)
{
if((LabeledEdit1->Text=="") || (LabeledEdit2->Text=="") || (LabeledEdit3->Text=="") || (ComboBox1->Text=="")  )
{
 ShowMessage("Nimanidur Unuttingiz");
}
else
{
DataModule2->ADOQueryXodimlar->Close();
DataModule2->ADOQueryXodimlar->SQL->Text="insert into xodimlar (fish,parol,huquq,tel,ish_xaqqi,xaqqi) values('"+LabeledEdit1->Text.Trim()+"','"+LabeledEdit3->Text.Trim()+"','"+ComboBox1->Text.Trim()+"','"+MaskEdit1->Text.Trim()+"','"+LabeledEdit2->Text.Trim()+"','"+LabeledEdit4->Text.Trim()+"')";
DataModule2->ADOQueryXodimlar->ExecSQL();
DataModule2->ADOQueryXodimlar->SQL->Text="select * from xodimlar";
DataModule2->ADOQueryXodimlar->Open();

Close();
}
}
//---------------------------------------------------------------------------
void __fastcall TFormXodimQoshish::FormClose(TObject *Sender, TCloseAction &Action)

{
LabeledEdit1->Text="";
LabeledEdit2->Text="";
LabeledEdit3->Text="";
LabeledEdit4->Text="";
ComboBox1->Text="";
MaskEdit1->Text="";
}
//---------------------------------------------------------------------------
