//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UnitStol.cpp", FormStol);
USEFORM("UnitStolAlmashtirish.cpp", FormStolAlmashtirish);
USEFORM("UnitStollar.cpp", FormStollar);
USEFORM("UnitOmborOzgartirish.cpp", FormOmborOzgartirish);
USEFORM("UnitOmborQoshish.cpp", FormOmborQoshish);
USEFORM("UnitSotilganlar.cpp", FormSotilganlar);
USEFORM("UnitXodimlar.cpp", FormXodimlar);
USEFORM("UnitXodimOzgartirish.cpp", FormXodimOzgartirish);
USEFORM("UnitXodimQoshish.cpp", FormXodimQoshish);
USEFORM("UnitTolov.cpp", FormTolov);
USEFORM("UnitTolovv.cpp", FormTolovv);
USEFORM("UnitXisobot.cpp", FormXisobot);
USEFORM("UnitOmborKirim.cpp", FormOmborKirim);
USEFORM("Unit2.cpp", DataModule2); /* TDataModule: File Type */
USEFORM("Unit3.cpp", FormOmbor);
USEFORM("UnitKarkulOzgartirish.cpp", FormKarkulOzgartirish);
USEFORM("Unit1.cpp", FormBosh);
USEFORM("UnitMenyu.cpp", FormMenyu);
USEFORM("UnitMenyuOzgartirish.cpp", FormMenyuOzgartirish);
USEFORM("UnitMenyuqoshish.cpp", FormMenyuQoshish);
USEFORM("UnitKarkulQoshish.cpp", FormKarkulQoshish);
USEFORM("UnitKarkulyatsiya.cpp", FormKarkulyatsiya);
USEFORM("UnitKategoriya.cpp", FormKategoriya);
USEFORM("UnitKirish.cpp", FormKirish);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFormKirish), &FormKirish);
		Application->CreateForm(__classid(TFormBosh), &FormBosh);
		Application->CreateForm(__classid(TDataModule2), &DataModule2);
		Application->CreateForm(__classid(TFormOmbor), &FormOmbor);
		Application->CreateForm(__classid(TFormMenyu), &FormMenyu);
		Application->CreateForm(__classid(TFormKategoriya), &FormKategoriya);
		Application->CreateForm(__classid(TFormXodimlar), &FormXodimlar);
		Application->CreateForm(__classid(TFormSotilganlar), &FormSotilganlar);
		Application->CreateForm(__classid(TFormMenyuQoshish), &FormMenyuQoshish);
		Application->CreateForm(__classid(TFormMenyuOzgartirish), &FormMenyuOzgartirish);
		Application->CreateForm(__classid(TFormOmborQoshish), &FormOmborQoshish);
		Application->CreateForm(__classid(TFormOmborOzgartirish), &FormOmborOzgartirish);
		Application->CreateForm(__classid(TFormXodimQoshish), &FormXodimQoshish);
		Application->CreateForm(__classid(TFormXodimOzgartirish), &FormXodimOzgartirish);
		Application->CreateForm(__classid(TFormKarkulyatsiya), &FormKarkulyatsiya);
		Application->CreateForm(__classid(TFormKarkulQoshish), &FormKarkulQoshish);
		Application->CreateForm(__classid(TFormKarkulOzgartirish), &FormKarkulOzgartirish);
		Application->CreateForm(__classid(TFormTolov), &FormTolov);
		Application->CreateForm(__classid(TFormStol), &FormStol);
		Application->CreateForm(__classid(TFormStollar), &FormStollar);
		Application->CreateForm(__classid(TFormStolAlmashtirish), &FormStolAlmashtirish);
		Application->CreateForm(__classid(TFormTolovv), &FormTolovv);
		Application->CreateForm(__classid(TFormXisobot), &FormXisobot);
		Application->CreateForm(__classid(TFormOmborKirim), &FormOmborKirim);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
