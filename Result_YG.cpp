//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Result_YG.h"
#include "Lagi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;

//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TForm9::SetPoints(int points){
 YG_Panel->Caption = points;
}//---------------------------------------------------------------------------
void __fastcall TForm9::NEXTClick(TObject *Sender)
{
Form10->Show();
Form9->Hide();
}
//---------------------------------------------------------------------------
