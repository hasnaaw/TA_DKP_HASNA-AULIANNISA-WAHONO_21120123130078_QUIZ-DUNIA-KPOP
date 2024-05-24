//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Agensi.h"
#include "SMQUIZ.h"
#include "JYPQUIZ.h"
#include "YGQUIZ.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;



//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SMClick(TObject *Sender)
{
Form4->Show();
Form3->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::JYPClick(TObject *Sender)
{
Form6->Show();
Form3->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::YGClick(TObject *Sender)
{
Form8->Show();
Form3->Hide();
}
//---------------------------------------------------------------------------
