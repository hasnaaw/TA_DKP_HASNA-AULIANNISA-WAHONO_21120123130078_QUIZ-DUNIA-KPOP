//---------------------------------------------------------------------------

#include <vcl.h>
#include <queue>
#pragma hdrstop

#include "SMQUIZ.h"
#include "Result_SM.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;


//---------------------------------------------------------------------------
class SM{
	public:
	char* soal_SM;
	char* opsiA_SM;
	char* opsiB_SM;
	char* opsiC_SM;
	char* keyanswer_SM;

	SM(){}
	SM(char* soal, char* opA, char* opB, char* opC, char* key){
		soal_SM=soal;
		opsiA_SM=opA;
		opsiB_SM=opB;
		opsiC_SM=opC;
		keyanswer_SM=key;
	}
};

queue<SM> ListSoal_SM(){
	 SM soal1=SM("Kapan EXO debut?", "2010", "2012", "2015", "B");
	 SM soal2=SM("Irene merupakan member?", "SNSD", "Aespa", "RedVelvet", "C");
	 SM soal3=SM("Boygroup yang memiliki banyak sub unit?", "EXO", "NCT", "TVXQ", "B");
	 SM soal4=SM("Lion heart merupakan lagu dari?", "SNSD", "S.E.S", "EXID", "A");
	 SM soal5=SM("Siapa anggota tertua dari EXO?", "Chen", "Suho", "Xiumin", "C");

	 queue<SM> InputSoal_SM;
		InputSoal_SM.push(soal1);
		InputSoal_SM.push(soal2);
		InputSoal_SM.push(soal3);
		InputSoal_SM.push(soal4);
		InputSoal_SM.push(soal5);

	 return InputSoal_SM;
}

queue<SM> InputSoal_SM;
SM Show_Soal;
char* PilihanOpsi;
int points=0;

__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
InputSoal_SM=ListSoal_SM();
Show_Soal=InputSoal_SM.front();

Soal->Caption=Show_Soal.soal_SM;
A_Button->Caption=Show_Soal.opsiA_SM;
B_Button->Caption=Show_Soal.opsiB_SM;
C_Button->Caption=Show_Soal.opsiC_SM;

InputSoal_SM.pop();
Points_Label->Caption=points;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::A_ButtonClick(TObject *Sender)
{
PilihanOpsi = "A";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::B_ButtonClick(TObject *Sender)
{
PilihanOpsi = "B";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::C_ButtonClick(TObject *Sender)
{
PilihanOpsi = "C";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::SubmitClick(TObject *Sender)
{
   if (PilihanOpsi==Show_Soal.keyanswer_SM) {
	  points+=20;
	  Points_Label->Caption=points;
   }
   else {
	  points+=0;
	  Points_Label->Caption=points;
   }

   if (!InputSoal_SM.empty()) {

	  Show_Soal=InputSoal_SM.front();

	  Soal->Caption=Show_Soal.soal_SM;
	  A_Button->Caption=Show_Soal.opsiA_SM;
	  B_Button->Caption=Show_Soal.opsiB_SM;
	  C_Button->Caption=Show_Soal.opsiC_SM;

	  InputSoal_SM.pop();

	  A_Button->Checked=false;
	  B_Button->Checked=false;
	  C_Button->Checked=false;
   }

   else{
	   Submit->Enabled=false;
	   Form5->SetPoints(points);
	   Form5->Show();
   }
}
//---------------------------------------------------------------------------

