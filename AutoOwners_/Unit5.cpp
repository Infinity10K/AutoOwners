//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
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
TForm5 *Form5;
extern num;
extern std::vector<TOwner> owner;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormShow(TObject *Sender)
{
	int ind = Form2->StringGrid1->Selection.Top - 1;
	Edit1->Text = owner[ind].getFio();
	Edit2->Text = owner[ind].getAdress();
	Edit3->Text = owner[ind].getNumber();
	Edit4->Text = owner[ind].getBrand();
	Edit5->Text = owner[ind].getColor();
	Edit6->Text = owner[ind].getMileage();
	Edit7->Text = owner[ind].getPrice();
	Edit8->Text = owner[ind].getData();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
	if(Edit1->Text != "" && Edit2->Text != "" && Edit3->Text != "" && Edit4->Text != "" && Edit5->Text != "" && Edit6->Text != "" && Edit7->Text != "" && Edit8->Text != "")
	{
		int ind = Form2->StringGrid1->Selection.Top - 1;
		owner[ind].setFio(Edit1->Text);
		owner[ind].setAdress(Edit2->Text);
		owner[ind].setNumber(Edit3->Text);
		owner[ind].setBrand(Edit4->Text);
		owner[ind].setColor(Edit5->Text);
		owner[ind].setMileage(Edit6->Text);
		owner[ind].setPrice(Edit7->Text);
		owner[ind].setData(Edit8->Text);
		ShowMessage("Данные приняты!");

		Form2->StringGrid1->Cells[1][ind+1] = owner[ind].getFio();
		Form2->StringGrid1->Cells[2][ind+1] = owner[ind].getAdress();
		Form2->StringGrid1->Cells[3][ind+1] = owner[ind].getNumber();
		Form2->StringGrid1->Cells[4][ind+1] = owner[ind].getBrand();
		Form2->StringGrid1->Cells[5][ind+1] = owner[ind].getColor();
		Form2->StringGrid1->Cells[6][ind+1] = owner[ind].getMileage();
		Form2->StringGrid1->Cells[7][ind+1] = owner[ind].getPrice();
		Form2->StringGrid1->Cells[8][ind+1] = owner[ind].getData();


		Form5->Close();
	}
	else
	{
		ShowMessage("Повторите ввод!");
	}
}
//---------------------------------------------------------------------------

