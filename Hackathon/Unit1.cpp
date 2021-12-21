//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "UnitMenyu.h"
#include "UnitKategoriya.h"
#include "UnitXodimlar.h"
#include "UnitSotilganlar.h"
#include "UnitKarkulyatsiya.h"
#include "UnitMenyuOzgartirish.h"
#include "UnitMenyuqoshish.h"
#include "UnitOmborOzgartirish.h"
#include "UnitOmborQoshish.h"
#include "UnitXodimOzgartirish.h"
#include "UnitXodimQoshish.h"
#include "UnitKarkulOzgartirish.h"
#include "UnitKarkulQoshish.h"
#include "UnitTolov.h"
#include "UnitStol.h"
#include "UnitStollar.h"
#include "UnitStolAlmashtirish.h"
#include "UnitTolovv.h"
#include "UnitXisobot.h"
#include "UnitOmborKirim.h"
#include "UnitKirish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormBosh *FormBosh;
//---------------------------------------------------------------------------
__fastcall TFormBosh::TFormBosh(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFormBosh::Button3Click(TObject *Sender)
{
FormKategoriya->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormBosh::Button2Click(TObject *Sender)
{
FormMenyu->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormBosh::Button4Click(TObject *Sender)
{
FormOmbor->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormBosh::Button6Click(TObject *Sender)
{
FormXodimlar->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormBosh::Button7Click(TObject *Sender)
{
FormSotilganlar->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TFormBosh::Button8Click(TObject *Sender)
{
 FormKarkulyatsiya->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormBosh::Button1Click(TObject *Sender)
{
FormStollar->ShowModal();
FormStollar->Label2->Caption=Label1->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TFormBosh::Button5Click(TObject *Sender)
{
FormXisobot->ShowModal();
}
//---------------------------------------------------------------------------

