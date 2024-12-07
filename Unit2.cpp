#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;

__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner)
{
    LabelName->Caption = "Полховський Іван Павлович";
    LabelYear->Caption  = "17 років";
    Image1->Visible = false;
    Image2->Visible = false;
}

void __fastcall TForm2::Button1Click(TObject *Sender)
{
    Image1->Visible = true;
    Image2->Visible = false;
}

void __fastcall TForm2::Button2Click(TObject *Sender)
{
    Image1->Visible = false;
    Image2->Visible = true;
}
