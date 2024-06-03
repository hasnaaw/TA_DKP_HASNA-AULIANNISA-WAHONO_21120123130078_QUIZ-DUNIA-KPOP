//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Nama.h"
#include "Agensi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::NEXTClick(TObject *Sender)
{
String pemain = Nama_Label->Text;
if (pemain.IsEmpty()) {
	ShowMessage("Wajib Masukkan Nama Terlebih Dahulu");
}
else {
	Form3->Halo_Label->Caption= "Annyeong "+pemain;
	Form3->Show();
}
}
//---------------------------------------------------------------------------
