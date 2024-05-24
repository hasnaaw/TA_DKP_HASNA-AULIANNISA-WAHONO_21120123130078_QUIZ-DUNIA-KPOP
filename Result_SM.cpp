//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Result_SM.h"
#include "Lagi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;

//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
 void TForm5::SetPoints(int points){
 SM_Panel->Caption = points;
 }
void __fastcall TForm5::NEXTClick(TObject *Sender)
{
Form10->Show();
Form5->Hide();
}
//---------------------------------------------------------------------------

