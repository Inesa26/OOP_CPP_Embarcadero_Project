//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
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
void __fastcall TForm2::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
  ReleaseCapture();
Perform(WM_SYSCOMMAND,0xF012,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image2MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image2->Picture->LoadFromFile("button88.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image2MouseLeave(TObject *Sender)
{
Image2->Picture->LoadFromFile("button8.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
Image2->Picture->LoadFromFile("button88.png");
}
//---------------------------------------------------------------------------

