//---------------------------------------------------------------------------

#include <vcl.h>
#include <queue>
#pragma hdrstop

#include "YGQUIZ.h"
#include "Result_YG.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;

//---------------------------------------------------------------------------
class YG{
	public:
	char* soal_YG;
	char* opsiA_YG;
	char* opsiB_YG;
	char* opsiC_YG;
	char* keyanswer_YG;

	YG(){}
	YG(char* soal, char* opA, char* opB, char* opC, char* key){
		soal_YG=soal;
		opsiA_YG=opA;
		opsiB_YG=opB;
		opsiC_YG=opC;
		keyanswer_YG=key;
	}
};

queue<YG> ListSoal_YG(){
	 YG soal1=YG("Blackpink merupakan girlgroup generasi ke- berapa?", "1", "2", "3", "C");
	 YG soal2=YG("Eyes, Nose, Lips merupakan lagu dari?", "Taeyang", "Bobby", "Asahi", "A");
	 YG soal3=YG("Winner memiliki lagu yang populer. Apa itu?", "Loser", "Love Scenario", "Really Really", "C");
	 YG soal4=YG("GirlGroup YG yang baru debut pada tahun 2023?", "Aespa", "BabyMonster", "NMIXX", "B");
	 YG soal5=YG("I Am The Best merupakan salah satu lagu yang sangat populer dari YG. Siapa yang membawakan lagu tersebut?", "Treasure", "IKON", "2NE1", "C");

	 queue<YG> InputSoal_YG;
		InputSoal_YG.push(soal1);
		InputSoal_YG.push(soal2);
		InputSoal_YG.push(soal3);
		InputSoal_YG.push(soal4);
		InputSoal_YG.push(soal5);

	 return InputSoal_YG;
}

queue<YG> InputSoal_YG;
YG Show_Soal;
char* PilihanOpsi;
int points=0;

__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
InputSoal_YG=ListSoal_YG();
Show_Soal=InputSoal_YG.front();

Soal->Caption=Show_Soal.soal_YG;
A_Button->Caption=Show_Soal.opsiA_YG;
B_Button->Caption=Show_Soal.opsiB_YG;
C_Button->Caption=Show_Soal.opsiC_YG;

InputSoal_YG.pop();
Points_Label->Caption=points;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::A_ButtonClick(TObject *Sender)
{
PilihanOpsi = "A";
}
//---------------------------------------------------------------------------
void __fastcall TForm8::B_ButtonClick(TObject *Sender)
{
PilihanOpsi = "B";
}
//---------------------------------------------------------------------------
void __fastcall TForm8::C_ButtonClick(TObject *Sender)
{
PilihanOpsi = "C";
}
//---------------------------------------------------------------------------
void __fastcall TForm8::SubmitClick(TObject *Sender)
{
   if (PilihanOpsi==Show_Soal.keyanswer_YG) {
	  points+=20;
	  Points_Label->Caption=points;
   }
   else {
	  points+=0;
	  Points_Label->Caption=points;
   }

   if (!InputSoal_YG.empty()) {

	  Show_Soal=InputSoal_YG.front();

	  Soal->Caption=Show_Soal.soal_YG;
	  A_Button->Caption=Show_Soal.opsiA_YG;
	  B_Button->Caption=Show_Soal.opsiB_YG;
	  C_Button->Caption=Show_Soal.opsiC_YG;

	  InputSoal_YG.pop();

	  A_Button->Checked=false;
	  B_Button->Checked=false;
	  C_Button->Checked=false;
   }

   else{
	   Submit->Enabled=false;
	   TForm9 *form9= new TForm9(this);
	   form9->SetPoints(points);
	   form9->ShowModal();
	   delete form9;
   }
}
//---------------------------------------------------------------------------
