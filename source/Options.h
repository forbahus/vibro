//---------------------------------------------------------------------------

#ifndef OptionsH
#define OptionsH
//---------------------------------------------------------------------------
#include <Xml.Win.msxmldom.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.adomxmldom.hpp>
//---------------------------------------------------------------------------
struct ChannelCont
{
	AnsiString Name;
	AnsiString Type;
	double f[6];
	int ai;
};
struct DeviceCont
{
	AnsiString Name;
	AnsiString Names[8];
	ChannelCont Channels[8];
	int Count;
};
class TOptions
{
private:
	TXMLDocument *XMLOptions;
	// User declarations
public:		// User declarations
	DeviceCont *Device1;
	DeviceCont *Device2;
	AnsiString *ConfigNames;
	AnsiString *AttrNames;
	AnsiString *ConfigTypes;
	AnsiString *AttrTypes;
	AnsiString ObjectNum;
	int CurrentConfNum;
	int CurrentTypNum;
	int ConfigNamesCount;
	int ConfigTypesCount;

	__fastcall TOptions(TComponent* Owner);
	__fastcall ~TOptions();
	void __fastcall XMLReading(AnsiString Config);
	void __fastcall XMLConfigReader();
	void __fastcall XMLConfigSaver();
};

#endif
