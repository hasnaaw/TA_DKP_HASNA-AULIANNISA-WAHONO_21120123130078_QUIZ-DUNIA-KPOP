//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Awal.h"
#include "Nama.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NEXTClick(TObject *Sender)
{
Form2->Show();
Form1->Hide();
}
//---------------------------------------------------------------------------