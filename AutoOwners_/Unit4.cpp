//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "File1.h"
#include "Unit2.h"
#include <fstream.h>
#include <string.h>
#include <stdlib.h>
#include <io.h>
#include <vector>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;

extern num;
extern vector<TOwner> owner;

//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormShow(TObject *Sender)
{
	Memo1->Clear();
	for (int i = 0; i < num; i++) {
		Memo1->Lines->Add(owner[i].getFio());
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm4::Button1Click(TObject *Sender)
{
	if (SaveDialog1->Execute()) {
		Memo1->Lines->SaveToFile(SaveDialog1->FileName);
	}
}
//---------------------------------------------------------------------------

