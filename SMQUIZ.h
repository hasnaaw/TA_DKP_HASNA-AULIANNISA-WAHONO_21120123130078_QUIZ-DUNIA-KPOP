//---------------------------------------------------------------------------

#ifndef SMQUIZH
#define SMQUIZH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Soal;
	TRadioButton *A_Button;
	TRadioButton *B_Button;
	TRadioButton *C_Button;
	TButton *Submit;
	TLabel *Label2;
	TLabel *Points_Label;
	TImage *Image1;
	void __fastcall A_ButtonClick(TObject *Sender);
	void __fastcall B_ButtonClick(TObject *Sender);
	void __fastcall C_ButtonClick(TObject *Sender);
	void __fastcall SubmitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
