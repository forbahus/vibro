//---------------------------------------------------------------------------

#ifndef ChannelConfigH
#define ChannelConfigH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>

//---------------------------------------------------------------------------
class TOptionsForm : public TForm
{
__published:	// IDE-managed Components
	TTreeView *ChannelsTree;
	TButton *SaveBtn;
	TButton *CancelBtn;
	TGroupBox *GroupOptions;
	TButton *HandConfig;
	TButton *Colibration;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TOptionsForm(TComponent* Owner);
	void __fastcall OptionsWrite();
};
//---------------------------------------------------------------------------
extern PACKAGE TOptionsForm *OptionsForm;
//---------------------------------------------------------------------------
#endif
