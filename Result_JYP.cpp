//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Result_JYP.h"
#include "Lagi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;

//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TForm7::SetPoints(int points){
 JYP_Panel->Caption = points;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::NEXTClick(TObject *Sender)
{
Form10->Show();
Form7->Hide();
}
//---------------------------------------------------------------------------
