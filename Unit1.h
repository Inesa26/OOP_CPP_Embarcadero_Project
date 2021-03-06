//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{



__published:	// IDE-managed Components
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TLabel *Label1;
	TTimer *Timer1;
	TImage *Image6;
	TImage *Image7;
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall Image2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image2MouseLeave(TObject *Sender);
	void __fastcall Image3MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall Image3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image3MouseLeave(TObject *Sender);
	void __fastcall Image4MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Image4MouseLeave(TObject *Sender);
	void __fastcall Image4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image5MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Image5MouseLeave(TObject *Sender);
	void __fastcall Image5MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Image7Click(TObject *Sender);
	void __fastcall Image7MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Image7MouseLeave(TObject *Sender);
	void __fastcall Image7MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);



	




private:



	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
