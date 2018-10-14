#include"Artikel.h"

Artikel _artikelGlobal = Artikel(1, "test12323!", 157.5);
void test();

void main()
{
	Artikel artikelLokal = Artikel(2, "test12323!", 157.5);
	test();
	test();

	getchar();
	getchar();
}

void test()
{
	static Artikel artikelTest1 = Artikel(3, "test12323!", 157.5);
	Artikel artikelTest2 = Artikel(4, "test12323!", -500);

	artikelTest1.print();
	artikelTest2.print();

	cout << endl << "Ende Test() Methode" << endl;
}