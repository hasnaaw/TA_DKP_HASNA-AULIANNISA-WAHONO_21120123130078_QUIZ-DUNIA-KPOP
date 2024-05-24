//---------------------------------------------------------------------------

#ifndef AgensiH
#define AgensiH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Halo_Label;
	TButton *SM;
	TImage *Image1;
	TButton *JYP;
	TButton *YG;
	TLabel *Label1;
	void __fastcall SMClick(TObject *Sender);
	void __fastcall JYPClick(TObject *Sender);
	void __fastcall YGClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
