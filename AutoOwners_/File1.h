class TOwner
{
	protected:
		AnsiString fio;
		AnsiString adress;
		AnsiString number;
		AnsiString brand;
		AnsiString color;
		AnsiString mileage;
		AnsiString price;
		AnsiString data;
		/*
		int probeg;
		int cena;
		int data;
		*/
	public:
		/*TOwner(){};							// конструктор
		~TOwner(){};						// деструктор     */

		AnsiString getFio()
		{
			return fio;
		}

		AnsiString getAdress()
		{
			return adress;
		}

		AnsiString getNumber()
		{
			return number;
		}

		AnsiString getBrand()
		{
			return brand;
		}

		AnsiString getColor()
		{
			return color;
		}

		AnsiString getMileage()
		{
			return mileage;
		}

		AnsiString getPrice()
		{
			return price;
		}

		AnsiString getData()
		{
			return data;
		}

		/*
		int getProbeg()
		{
			return probeg;
		}
		*/

		void setFio (AnsiString ownerFio)
		{
			fio = ownerFio;
		}

		void setAdress (AnsiString ownerAdress)
		{
			adress = ownerAdress;
		}

		void setNumber (AnsiString ownerNumber)
		{
			number = ownerNumber;
		}

		void setBrand (AnsiString ownerBrand)
		{
			brand = ownerBrand;
		}

		void setColor (AnsiString ownerColor)
		{
			color = ownerColor;
		}

		void setMileage (AnsiString ownerMileage)
		{
			mileage = ownerMileage;
		}

		void setPrice (AnsiString ownerPrice)
		{
			price = ownerPrice;
		}

		void setData (AnsiString ownerData)
		{
			data = ownerData;
		}
};


