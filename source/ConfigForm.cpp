//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ConfigForm.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TConfigsForm *ConfigsForm;
extern TOptions *Options;

//---------------------------------------------------------------------------
__fastcall TConfigsForm::TConfigsForm(TComponent* Owner)
	: TForm(Owner)
{
	Options = new TOptions(this);
	EdtNumber->Text = Options->ObjectNum;
	ShowMessage(EdtNumber->Text);
}
//---------------------------------------------------------------------------
void __fastcall TConfigsForm::BtnExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TConfigsForm::FormCreate(TObject *Sender)
{
/*
	//цикл по конфигам для вывода на экран и выделить текущий по индексу
	ListConfigWrite();
*/
}
//---------------------------------------------------------------------------
void __fastcall TConfigsForm::ListConfigWrite()
{
/*
	TGridRect r;
	r.Left = 0;
	r.Right = 0;
	ListConfig->RowCount = Options->ConfigNamesCount;
	for (int i=0; i < Options->ConfigNamesCount; i++)
	{
		 ListConfig->Cells[0][i] = Options->AttrNames[i];
	}
	r.Top = Options->CurrentConfNum;
	r.Bottom = r.Top;
	ListConfig->Selection=r;

	for (int i=0; i < Options->ConfigTypesCount; i++)
	{
		 ListTypes->Cells[0][i] = Options->AttrTypes[i];
	}
	ListTypes->RowCount=Options->ConfigTypesCount;
	r.Top = Options->CurrentTypNum;
	r.Bottom = r.Top;
	ListTypes->Selection=r;

	EdtNumber->Text=Options->ObjectNum;
	*/
}
//---------------------------------------------------------------------------
__fastcall TConfigsForm::~TConfigsForm()
{
	delete Options;
}

void __fastcall TConfigsForm::ListConfigSelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
/*
	for (int i=0; i < Options->ConfigNamesCount; i++)
	{
		if(Options->AttrNames[i]==ListConfig->Cells[ACol][ARow])
		{
			Options->CurrentConfNum = i;
			Options->XMLConfigSaver();
			Options->XMLReading(Options->ConfigNames[i]);
			OptionsForm->OptionsWrite();
			break;
		}
	}
*/
}
//---------------------------------------------------------------------------




void __fastcall TConfigsForm::EdtNumberExit(TObject *Sender)
{
/*
	Options->ObjectNum=EdtNumber->Text;
	Options->XMLConfigSaver();
*/
}
//---------------------------------------------------------------------------


void __fastcall TConfigsForm::ListTypesSelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
/*
	for (int i=0; i < Options->ConfigTypesCount; i++)
	{
		if(Options->AttrTypes[i]==ListTypes->Cells[ACol][ARow])
		{
			Options->CurrentTypNum = i;
			Options->XMLConfigSaver();
			//Options->XMLReading(Options->ConfigNames[i]);
			//OptionsForm->OptionsWrite();
			break;
		}
	}
	*/
}
//---------------------------------------------------------------------------




