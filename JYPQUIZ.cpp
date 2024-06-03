//---------------------------------------------------------------------------

#include <vcl.h>
#include <queue>
#pragma hdrstop

#include "JYPQUIZ.h"
#include "Result_JYP.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;

//---------------------------------------------------------------------------
class JYP{
	public:
	char* soal_JYP;
	char* opsiA_JYP;
	char* opsiB_JYP;
	char* opsiC_JYP;
	char* keyanswer_JYP;

	JYP(){}
	JYP(char* soal, char* opA, char* opB, char* opC, char* key){
		soal_JYP=soal;
		opsiA_JYP=opA;
		opsiB_JYP=opB;
		opsiC_JYP=opC;
		keyanswer_JYP=key;
	}
};

queue<JYP> ListSoal_JYP(){
	 JYP soal1=JYP("Siapa pendiri JYP", "Park Jin Young", "Lee Soo Man", "Yang Hyun Suk", "A");
	 JYP soal2=JYP("Ada berapa anggota girlgroup Twice?", "7", "10", "9", "C");
	 JYP soal3=JYP("JYP memiliki 2 band, siapakah salah satunya?", "LUCY", "DAY6", "Seventeen", "B");
	 JYP soal4=JYP("Not Shy merupakan lagu dari?", "ITZY", "Miss A", "NMIXX", "A");
	 JYP soal5=JYP("Hands Up merupakan lagu yang sangat terkenal kelauaran JYP. Lagu siapakah itu?", "2PM", "NMIXX", "XdinaryHeroes", "A");

	 queue<JYP> InputSoal_JYP;
		InputSoal_JYP.push(soal1);
		InputSoal_JYP.push(soal2);
		InputSoal_JYP.push(soal3);
		InputSoal_JYP.push(soal4);
		InputSoal_JYP.push(soal5);

	 return InputSoal_JYP;
}

queue<JYP> InputSoal_JYP;
JYP Show_Soal;
char* PilihanOpsi;
int points=0;


__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
InputSoal_JYP=ListSoal_JYP();
Show_Soal=InputSoal_JYP.front();

Soal->Caption=Show_Soal.soal_JYP;
A_Button->Caption=Show_Soal.opsiA_JYP;
B_Button->Caption=Show_Soal.opsiB_JYP;
C_Button->Caption=Show_Soal.opsiC_JYP;

InputSoal_JYP.pop();
Points_Label->Caption=points;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::A_ButtonClick(TObject *Sender)
{
PilihanOpsi = "A";
}
//---------------------------------------------------------------------------

void __fastcall TForm6::B_ButtonClick(TObject *Sender)
{
PilihanOpsi = "B";
}
//---------------------------------------------------------------------------

void __fastcall TForm6::C_ButtonClick(TObject *Sender)
{
PilihanOpsi = "C";
}
//---------------------------------------------------------------------------

void __fastcall TForm6::SubmitClick(TObject *Sender)
{
   if (PilihanOpsi==Show_Soal.keyanswer_JYP) {
	  points+=20;
	  Points_Label->Caption=points;
   }
   else {
	  points+=0;
	  Points_Label->Caption=points;
   }

   if (!InputSoal_JYP.empty()) {

	  Show_Soal=InputSoal_JYP.front();

	  Soal->Caption=Show_Soal.soal_JYP;
	  A_Button->Caption=Show_Soal.opsiA_JYP;
	  B_Button->Caption=Show_Soal.opsiB_JYP;
	  C_Button->Caption=Show_Soal.opsiC_JYP;

	  InputSoal_JYP.pop();

	  A_Button->Checked=false;
	  B_Button->Checked=false;
	  C_Button->Checked=false;
   }

   else{
	   Submit->Enabled=false;
	   Form7->SetPoints(points);
	   Form7->Show();
   }

}
//---------------------------------------------------------------------------

