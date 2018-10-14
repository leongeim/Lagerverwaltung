#include<iostream>
#include <string>
#include<stdlib.h>
using namespace std;

class Artikel
{
public:
	Artikel(long a, const string& ab, double v);
	~Artikel();
	void print();
	inline void SetArtikelnummer(long a) { artikelnummer = a; }
	inline void SetArtikelBezeichnung(string ab) { artikelbezeichnung = ab; }
	inline void SetVerkaufspreis(double v) 
	{
		if (v < 0)
		{
			verkaufspreis = 0.0;
		}
		else
		{
			verkaufspreis = v;
		}
	}

	inline long GetArtikelnummer()
	{
		return artikelnummer;
	}
	inline string GetArtikelBezeichnung()
	{
		return artikelbezeichnung;
	}
	inline double GetVerkaufspreis()
	{
		return verkaufspreis;
	}
private:
	long artikelnummer;
	string artikelbezeichnung;
	double verkaufspreis;

};

