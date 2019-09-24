//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "File1.h"
#include <fstream.h>
#include <string.h>
#include <stdlib.h>
#include <io.h>
#include <vector>
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

vector<TOwner> owner;
int num = 0;
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[0][0] = "№";
	StringGrid1->Cells[1][0] = "ФИО";
	StringGrid1->Cells[2][0] = "Адрес";
	StringGrid1->Cells[3][0] = "Номер";
	StringGrid1->Cells[4][0] = "Марка";
	StringGrid1->Cells[5][0] = "Цвет";
	StringGrid1->Cells[6][0] = "Пробег";
	StringGrid1->Cells[7][0] = "Цена";
	StringGrid1->Cells[8][0] = "Год выпуска";
	owner.resize(num+1);
	Image1->Picture->LoadFromFile(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + "no-image.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
	int ind = StringGrid1->Selection.Top - 1;
	if (FileExists(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + owner[ind].getBrand() + ".bmp"))
		Image1->Picture->LoadFromFile(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + owner[ind].getBrand() + ".bmp");
	else
		Image1->Picture->LoadFromFile(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + "no-image.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N2Click(TObject *Sender)
{
	if (OpenDialog1->Execute())
	{
		UnicodeString F = OpenDialog1->FileName;

		Memo1->Lines->LoadFromFile(F);
		int irow = 1;
		num = StrToInt(Memo1->Lines->Strings[0]);

		owner.resize(num+1);
		StringGrid1->RowCount = num+1;

		for (int i = 0; i < num; i++)
		{
			owner[i].setFio(Memo1->Lines->Strings[irow++]);
			owner[i].setAdress(Memo1->Lines->Strings[irow++]);
			owner[i].setNumber(Memo1->Lines->Strings[irow++]);
			owner[i].setBrand(Memo1->Lines->Strings[irow++]);
			owner[i].setColor(Memo1->Lines->Strings[irow++]);
			owner[i].setMileage(Memo1->Lines->Strings[irow++]);
			owner[i].setPrice(Memo1->Lines->Strings[irow++]);
			owner[i].setData(Memo1->Lines->Strings[irow++]);
		}
		Memo1->Clear();

		for (int i = 0; i < num; i++)
		{
			StringGrid1->Cells[0][i+1] = i+1;
			StringGrid1->Cells[1][i+1] = owner[i].getFio();
			StringGrid1->Cells[2][i+1] = owner[i].getAdress();
			StringGrid1->Cells[3][i+1] = owner[i].getNumber();
			StringGrid1->Cells[4][i+1] = owner[i].getBrand();
			StringGrid1->Cells[5][i+1] = owner[i].getColor();
			StringGrid1->Cells[6][i+1] = owner[i].getMileage();
			StringGrid1->Cells[7][i+1] = owner[i].getPrice();
			StringGrid1->Cells[8][i+1] = owner[i].getData();
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N3Click(TObject *Sender)
{
	if (SaveDialog1->Execute()) {
        Memo1->Lines->Add(IntToStr(num));

		for (int i = 0; i < num; i++)
			{
				Memo1->Lines->Add(owner[i].getFio());
				Memo1->Lines->Add(owner[i].getAdress());
				Memo1->Lines->Add(owner[i].getNumber());
				Memo1->Lines->Add(owner[i].getBrand());
				Memo1->Lines->Add(owner[i].getColor());
				Memo1->Lines->Add(owner[i].getMileage());
				Memo1->Lines->Add(owner[i].getPrice());
				Memo1->Lines->Add(owner[i].getData());
			}
		Memo1->Lines->SaveToFile(SaveDialog1->FileName);
	}
	Memo1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N5Click(TObject *Sender)
{
	if(InputQuery( "Ввод данных", "Введите ФИО владельца", regFio))
	{
		ShowMessage("Данные приняты!");
		Form3->Show();
	}
	else
	{
		ShowMessage("Повторите ввод!");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N6Click(TObject *Sender)
{
	int ind = StringGrid1->Selection.Top;
	if(ind != 0)
	  {
		/*
		for(int i=ind; i<StringGrid1->RowCount-1; i++)
			StringGrid1->Rows[i] = StringGrid1->Rows[i+1];

		StringGrid1->RowCount--;
		*/

		owner.erase(owner.begin() + ind - 1);
		vector<TOwner>(owner).swap(owner);
		num--;
		StringGrid1->Rows[ind]->Clear();
		for (int i = ind; i < StringGrid1->RowCount; i++) {
			StringGrid1->Rows[i] = StringGrid1->Rows[i+1];
			StringGrid1->Cells[0][i] = i;
		}
		StringGrid1->RowCount--;

	  }
}
//---------------------------------------------------------------------------


void __fastcall TForm2::N8Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N9Click(TObject *Sender)
{
	int ind = StringGrid1->Selection.Top - 1;
	if (FileExists(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + owner[ind].getBrand() + ".bmp"))
		Image1->Picture->LoadFromFile(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + owner[ind].getBrand() + ".bmp");
	else
		Image1->Picture->LoadFromFile(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + "no-image.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N11Click(TObject *Sender)
{
	Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N12Click(TObject *Sender)
{
	Form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N13Click(TObject *Sender)
{
	Form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N14Click(TObject *Sender)
{
	int ind = StringGrid1->Selection.Top;
	if(ind != 0)
	  {
		/*
		for(int i=ind; i<StringGrid1->RowCount-1; i++)
			StringGrid1->Rows[i] = StringGrid1->Rows[i+1];

		StringGrid1->RowCount--;
		*/

		owner.erase(owner.begin() + ind - 1);
		vector<TOwner>(owner).swap(owner);
		num--;
		StringGrid1->Rows[ind]->Clear();
		for (int i = ind; i < StringGrid1->RowCount; i++) {
			StringGrid1->Rows[i] = StringGrid1->Rows[i+1];
			StringGrid1->Cells[0][i] = i;
		}
		StringGrid1->RowCount--;

	  }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::StringGrid1SelectCell(TObject *Sender, int ACol, int ARow,
		  bool &CanSelect)
{
/*
	int ind = StringGrid1->Selection.Top - 1;
	if (FileExists(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + owner[ind].getBrand() + ".bmp"))
		Image1->Picture->LoadFromFile(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + owner[ind].getBrand() + ".bmp");
	else
		Image1->Picture->LoadFromFile(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + "no-image.bmp");
*/
}
//---------------------------------------------------------------------------

void __fastcall TForm2::StringGrid1Click(TObject *Sender)
{
	int ind = StringGrid1->Selection.Top - 1;
	if (FileExists(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + owner[ind].getBrand() + ".bmp"))
		Image1->Picture->LoadFromFile(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + owner[ind].getBrand() + ".bmp");
	else
		Image1->Picture->LoadFromFile(ExtractFileDir(Application->ExeName) + "\\cars_img\\" + "no-image.bmp");

}
//---------------------------------------------------------------------------

