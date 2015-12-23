//---------------------------------------------------------------------------

#pragma hdrstop

#include "Options.h"

#pragma package(smart_init)

TOptions *Options;
//---------------------------------------------------------------------------
__fastcall TOptions::TOptions(TComponent* Owner)
{
	XMLOptions=new TXMLDocument(Owner);
	XMLOptions->LoadFromFile(".\\options.xml");
	XMLOptions->Active = true;
	Device1=new DeviceCont;
	Device2=new DeviceCont;
	_di_IXMLNode NoDe;
	NoDe=XMLOptions->Node->GetChildNodes()->FindNode("Config")->GetChildNodes()->FindNode("CurrentConfig");
	ConfigNamesCount = 0;
	ConfigTypesCount = 0;
	ObjectNum=NoDe->GetChildNodes()->FindNode("ObjectNum")->GetNodeValue();
	XMLConfigReader();
	XMLReading(NoDe->GetChildNodes()->FindNode("ConfigName")->GetNodeValue());
}
void __fastcall TOptions::XMLReading(AnsiString Config)
{
	_di_IXMLNode NoDe;
	NoDe=XMLOptions->Node->GetChildNodes()->FindNode("Config")->GetChildNodes()->FindNode("Configs")->GetChildNodes()->FindNode(Config);
	//ShowMessage(NoDe->GetAttribute("name"));
	Device1->Name=NoDe->GetChildNodes()->FindNode("Device01")->GetNodeName();
	Device2->Name=NoDe->GetChildNodes()->FindNode("Device02")->GetNodeName();
	Device1->Count=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()->Count;
	Device2->Count=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()->Count;
	for (int i = 0; i < Device1->Count; i++)
	{

			Device1->Names[i]=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetNodeName();
			Device1->Channels[i].Name=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetChildNodes()[0][0]->GetNodeValue();
			Device1->Channels[i].ai=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetChildNodes()[0][1]->GetNodeValue();
			Device1->Channels[i].Type=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetChildNodes()[0][2]->GetNodeValue();
			Device1->Channels[i].f[0]=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetChildNodes()[0][3]->GetNodeValue();
			Device1->Channels[i].f[1]=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetChildNodes()[0][4]->GetNodeValue();
			Device1->Channels[i].f[2]=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetChildNodes()[0][5]->GetNodeValue();
			Device1->Channels[i].f[3]=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetChildNodes()[0][6]->GetNodeValue();
			Device1->Channels[i].f[4]=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetChildNodes()[0][7]->GetNodeValue();
			Device1->Channels[i].f[5]=NoDe->GetChildNodes()->FindNode("Device01")->GetChildNodes()[0][i]->GetChildNodes()[0][8]->GetNodeValue();

	}
	for (int i = 0; i < Device2->Count; i++)
	{

			Device2->Names[i]=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetNodeName();
			Device2->Channels[i].Name=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetChildNodes()[0][0]->GetNodeValue();
			Device2->Channels[i].ai=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetChildNodes()[0][1]->GetNodeValue();
			Device2->Channels[i].Type=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetChildNodes()[0][2]->GetNodeValue();
			Device2->Channels[i].f[0]=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetChildNodes()[0][3]->GetNodeValue();
			Device2->Channels[i].f[1]=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetChildNodes()[0][4]->GetNodeValue();
			Device2->Channels[i].f[2]=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetChildNodes()[0][5]->GetNodeValue();
			Device2->Channels[i].f[3]=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetChildNodes()[0][6]->GetNodeValue();
			Device2->Channels[i].f[4]=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetChildNodes()[0][7]->GetNodeValue();
			Device2->Channels[i].f[5]=NoDe->GetChildNodes()->FindNode("Device02")->GetChildNodes()[0][i]->GetChildNodes()[0][8]->GetNodeValue();

	}


}
void __fastcall TOptions::XMLConfigReader()
{
	_di_IXMLNode NoDe;
	NoDe=XMLOptions->Node->GetChildNodes()->FindNode("Config")->GetChildNodes()->FindNode("Configs");
	ConfigNames=new AnsiString[NoDe->GetChildNodes()->Count];
	AttrNames=new AnsiString[NoDe->GetChildNodes()->Count];
	for (int i=0; i <NoDe->GetChildNodes()->Count; i++)
	{
		AttrNames[i]=NoDe->GetChildNodes()[0][i]->GetAttribute("name");
		ConfigNames[i]=NoDe->GetChildNodes()[0][i]->GetNodeName();
		ConfigNamesCount++;
	}
	for (int i=0; i <NoDe->GetChildNodes()->Count; i++)
	{
		if(ConfigNames[i]==XMLOptions->Node->GetChildNodes()->FindNode("Config")->GetChildNodes()->FindNode("CurrentConfig")->GetChildNodes()->FindNode("ConfigName")->GetNodeValue())
		{CurrentConfNum=i;break;}
	}
	NoDe=XMLOptions->Node->GetChildNodes()->FindNode("Config")->GetChildNodes()->FindNode("ConfigTypes");
	ConfigTypes=new AnsiString[NoDe->GetChildNodes()->Count];
	AttrTypes=new AnsiString[NoDe->GetChildNodes()->Count];
	for (int i = 0; i < NoDe->GetChildNodes()->Count; i++)
	{
		ConfigTypes[i]= NoDe->GetChildNodes()[0][i]->GetNodeName();
		AttrTypes[i]= NoDe->GetChildNodes()[0][i]->GetNodeValue();
		ConfigTypesCount++;
	}
	for (int i=0; i <NoDe->GetChildNodes()->Count; i++)
	{
		if(ConfigTypes[i]==XMLOptions->Node->GetChildNodes()->FindNode("Config")->GetChildNodes()->FindNode("CurrentConfig")->GetChildNodes()->FindNode("type")->GetNodeValue())
		{CurrentTypNum=i;break;}
	}
}
void __fastcall TOptions::XMLConfigSaver()
{
	XMLOptions->Node->GetChildNodes()->FindNode("Config")->GetChildNodes()->FindNode("CurrentConfig")->GetChildNodes()->FindNode("ConfigName")->SetNodeValue(ConfigNames[CurrentConfNum]);
	XMLOptions->Node->GetChildNodes()->FindNode("Config")->GetChildNodes()->FindNode("CurrentConfig")->GetChildNodes()->FindNode("type")->SetNodeValue(ConfigTypes[CurrentTypNum]);
	XMLOptions->Node->GetChildNodes()->FindNode("Config")->GetChildNodes()->FindNode("CurrentConfig")->GetChildNodes()->FindNode("ObjectNum")->SetNodeValue(ObjectNum);
	XMLOptions->SaveToFile(".\\options.xml");
}
__fastcall TOptions::~TOptions()
{

	delete XMLOptions;

	delete Device1;
	delete Device2;

}


