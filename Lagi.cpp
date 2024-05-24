//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Lagi.h"
#include "Agensi.h"
#include "Akhir.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;


//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::YAClick(TObject *Sender)
{
Form3->Show();
Form10->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm10::TIDAKClick(TObject *Sender)
{
Form11->Show();
Form10->Hide();
}
//---------------------------------------------------------------------------
