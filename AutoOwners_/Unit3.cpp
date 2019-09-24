//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
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
TForm3 *Form3;
extern num;
extern std::vector<TOwner> owner;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
	Label1->Caption = "Добавление сведений о новом автовладельце: " + Form2->regFio;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
	if(Edit2->Text != "" && Edit3->Text != "" && Edit4->Text != "" && Edit5->Text != "" && Edit6->Text != "" && Edit7->Text != "" && Edit8->Text != "")
	{
        owner.resize(num+1);
		owner[num].setFio(Form2->regFio);
		owner[num].setAdress(Edit2->Text);
		owner[num].setNumber(Edit3->Text);
		owner[num].setBrand(Edit4->Text);
		owner[num].setColor(Edit5->Text);
		owner[num].setMileage(Edit6->Text);
		owner[num].setPrice(Edit7->Text);
		owner[num].setData(Edit8->Text);
		ShowMessage("Данные приняты!");

        num++;
		Form2->StringGrid1->RowCount = num + 1;
		Form2->StringGrid1->Cells[1][num] = owner[num-1].getFio();
		Form2->StringGrid1->Cells[2][num] = owner[num-1].getAdress();
		Form2->StringGrid1->Cells[3][num] = owner[num-1].getNumber();
		Form2->StringGrid1->Cells[4][num] = owner[num-1].getBrand();
		Form2->StringGrid1->Cells[5][num] = owner[num-1].getColor();
		Form2->StringGrid1->Cells[6][num] = owner[num-1].getMileage();
		Form2->StringGrid1->Cells[7][num] = owner[num-1].getPrice();
		Form2->StringGrid1->Cells[8][num] = owner[num-1].getData();


		Form3->Close();
	}
	else
	{
		ShowMessage("Повторите ввод!");
	}
}
//---------------------------------------------------------------------------


