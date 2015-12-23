//---------------------------------------------------------------------------

#ifndef ConfigFormH
#define ConfigFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Mask.hpp>
#include "Options.h"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TConfigsForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *EdtNumber;
	TButton *BtnExit;
	TButton *BtnStart;
	TButton *BtnChOptions;
	TButton *BtnStartOptions;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TStringGrid *ListConfig;
	TStringGrid *ListTypes;
	void __fastcall BtnExitClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ListConfigSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall EdtNumberExit(TObject *Sender);
	void __fastcall ListTypesSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);


private:	// User declarations
public:
	__fastcall TConfigsForm(TComponent* Owner);
	void __fastcall ListConfigWrite();
	__fastcall ~TConfigsForm();
};
//---------------------------------------------------------------------------
extern PACKAGE TConfigsForm *ConfigsForm;
//---------------------------------------------------------------------------
#endif
