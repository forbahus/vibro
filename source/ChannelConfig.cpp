//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "ChannelConfig.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TOptionsForm *OptionsForm;
//---------------------------------------------------------------------------
__fastcall TOptionsForm::TOptionsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TOptionsForm::FormCreate(TObject *Sender)
{

	OptionsWrite();
}
//---------------------------------------------------------------------------
void __fastcall TOptionsForm::OptionsWrite()
{
	ChannelsTree->Items->Clear();
	ChannelsTree->Items->Add(0,"Device01");
	/*
	for (int i=0;i<Options->Device1->Count;i++)
	{
		ChannelsTree->Items->AddChild(ChannelsTree->Items[0][0],Options->Device1->Channels[i].Name);
	}
	ChannelsTree->Items->Add(0,"Device02");
	for (int i=0;i<Options->Device2->Count;i++)
	{
		ChannelsTree->Items->AddChild(ChannelsTree->Items[0][Options->Device2->Count+1],Options->Device2->Channels[i].Name);
	}
	*/
}

