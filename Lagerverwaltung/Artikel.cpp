#include "Artikel.h"
int _anzahlArtikel = 0;

Artikel::Artikel(long a, const string & ab, double v)
{
	SetArtikelnummer(a);
	SetArtikelBezeichnung(ab);
	SetVerkaufspreis(v);
	_anzahlArtikel++;

	cout << endl << "Es wird ein Objekt fuer den Artikel " << a << " angelegt." << endl;
	cout << "Dies ist der " << _anzahlArtikel << "-te Artikel." << endl;

}

Artikel::~Artikel()
{
	_anzahlArtikel--;

	cout << endl << "Das Objekt fuer den Artikel " << artikelnummer << " wird zerstört." << endl;
	cout << "Es gibt noch " << _anzahlArtikel << " Artikel." << endl;
}

void Artikel::print()
{
	cout << endl << "Artikelnummer: " << artikelnummer << endl;
	cout << "Artikelbezeichnung: " << artikelbezeichnung << endl;
	cout << "Verkaufspreis: " << verkaufspreis << endl;

	getchar();
}
