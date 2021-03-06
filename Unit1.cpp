//---------------------------------------------------------------------------

#include <vcl.h>
#include <DateUtils.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
static int Second=0;
static int Minute=0;
static int Hour=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
ReleaseCapture();
Perform(WM_SYSCOMMAND,0xF012,0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
   Image2->Picture->LoadFromFile("button44.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	 Image2->Picture->LoadFromFile("button44.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2MouseLeave(TObject *Sender)
{
	  Image2->Picture->LoadFromFile("button4.png");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image3MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
  Image3->Picture->LoadFromFile("button11.png");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image3MouseLeave(TObject *Sender)
{
	   Image3->Picture->LoadFromFile("button1.png");
}
//---------------------------------------------------------------------------
   void __fastcall TForm1::Image3MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Image3->Picture->LoadFromFile("button11.png");
}


void __fastcall TForm1::Image4MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	 Image4->Picture->LoadFromFile("button22.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4MouseLeave(TObject *Sender)
{
		Image4->Picture->LoadFromFile("button2.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	Image4->Picture->LoadFromFile("button22.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	Image5->Picture->LoadFromFile("button33.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5MouseLeave(TObject *Sender)
{
	 Image5->Picture->LoadFromFile("button3.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	Image5->Picture->LoadFromFile("button33.png");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Timer1Timer(TObject *Sender)
{


	   String Sec;
	   String Min;
	   String Hr;



	 Second++;
	 if(Second==60 ){  Second=0;
	 Minute++;
	 if(Minute==60){Minute=0; Hour++;}
	 }


	 Sec=IntToStr(Second);
	 Min=IntToStr(Minute);
	 Hr=IntToStr(Hour);
		if  (Sec.Length()==1) { Sec="0"+Sec;}
		if  (Min.Length()==1) { Min="0"+Min;}
		if  (Hr.Length()==1) { Hr="0"+Hr;}

	 Label1->Caption=Hr+":"+Min+":"+Sec;
  }


void __fastcall TForm1::Image3Click(TObject *Sender)
{   Image6->Picture->LoadFromFile("image5.png");
Label1->Font->Color = clWhite;
Timer1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{   Image6->Picture->LoadFromFile("image55.png");
   Timer1->Enabled=false;
   Label1->Font->Color = clBlack;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image5Click(TObject *Sender)
{  Image6->Picture->LoadFromFile("image5.png");
Label1->Font->Color = clWhite;
Label1->Caption="00:00:00";
Second=0;
Minute=0;
Hour=0;
Timer1->Enabled=false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Image7Click(TObject *Sender)
{
Form2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	   Image7->Picture->LoadFromFile("button77.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7MouseLeave(TObject *Sender)
{
		  Image7->Picture->LoadFromFile("button7.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
   Image7->Picture->LoadFromFile("button77.png");
}
//---------------------------------------------------------------------------

