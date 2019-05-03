#include<iostream>
#include "Graph.h"
#include"Simple_window.h"
#include"Person.h"

using namespace std;
using namespace Graph_lib;
void print(Person& x);
void print(const string& palabra);
int main()
{
	cout << "\tPrueba realizada con el objeto p de tipo Person\n\n";
	int j = 12923;
	string x = "Alissa", f = "Dominguez", g = "Tapia";
	int h[3] = { 12, 12, 2025 };
	Person p (j,x,f,g,h);
	print(p);
	print("\n\tahora probamos cambiando variables con los sets a que los gets funcionan bien\n");
	h[0] = 13; h[2] = 1999; x = "Patricia"; g = "White"; j = 12654;
	p.setBorn(h); p.setID(j); p.setID(j); p.setLastName2(g); p.setName(x);
	print(p);

	return 0;
}

void print(Person& x)
{
	cout<< "Cedula:\t\t" << x.getID() << endl << "Nombre:\t\t" << x.getName() << endl
		<< "Apellido 1:\t" << x.getLastName1() << endl << "Apellido 2:\t" << x.getLastName2() << endl
		<< "Nacimeinto:\t" << x.getBorn() << endl;
}
void print(const string& palabra) { cout << palabra << endl; }