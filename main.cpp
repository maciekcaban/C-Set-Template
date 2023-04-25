#include <iostream>
#include "set.h"
#include <typeinfo>
#include <fstream>
using namespace std;
/*
main.cpp file conatins example of using my set 
*/
int main()
{
	Set <int> Secik;
	Secik.push(12);
	Secik.push(2);
	Secik.push(32);
	Secik.push(15);
	Secik.push(5);
	Secik.push(25);
	Secik.push(17);
	Secik.push(17);
	Secik.push(17);
	Secik.push(35);
	Secik.push(51);
	Secik.push(7);


	cout << "Zbior 1 zawiera nastepujace elementy:" << endl;
	Secik.display();

	cout << "zbior 1 zawiera " << Secik.size() << " elementow" << endl;
	cout << "najwiekszym elemntem zbioru 1 jest:" << "\t" << Secik.findMax()->data << endl;
	cout << "najmniejszym elemntem zbioru 1 jest:" << "\t" << Secik.findMin()->data << endl;

	cout << "czy zbior 1 zawiera nastepujacy element:  " << 15 << endl;
	if (Secik.ifSetConstainsElement(15))
	{	cout << "TAK" << endl;	}
	else
	{	cout << "NIE" << endl;	 }


	cout << "czy zbior 1 zawiera nastepujacy element:  " << 19 << endl;
	if (Secik.ifSetConstainsElement(19))
	{	cout << "TAK" << endl;	}
	else
	{	cout << "NIE" << endl;	}

	Set <int> Sett2;
	Sett2.push(22);
	Sett2.push(2);
	Sett2.push(12);
	Sett2.push(15);
	Secik.push(13);
	Secik.push(7);

	cout << "Zbior 2 zawiera nastepujace elementy:" << endl;
	Sett2.display();

	Set<int>Sett3;
	Sett3.push(55);
	
	cout << "czesc wspolna zbioru 1 i zbioru 2:" << endl;
	Sett3.commonPartOfSets(Secik, Sett2);
	Sett3.display();

	
	cout << "roznica zbior 1 - zbior 2:" << endl;
	Sett3.differenceOfSets(Secik, Sett2);
	Sett3.display();

	cout << "suma zbioru 1 i zbioru 2: " << endl;
	Sett3.connectingSets(Secik,Sett2);
	Sett3.display();

}