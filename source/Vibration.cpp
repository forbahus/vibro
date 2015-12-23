//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>

#include "ConfigForm.h"

//---------------------------------------------------------------------------
USEFORM("ChannelConfig.cpp", OptionsForm);
USEFORM("ConfigForm.cpp", ConfigsForm);
USEFORM("UMainForm.cpp", MainForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;

		ConfigsForm = new TConfigsForm(NULL);
		ConfigsForm->ShowModal();

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
