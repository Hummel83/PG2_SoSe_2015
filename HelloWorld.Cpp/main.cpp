#include <iostream>
#include "Person.h"
#include "Rechteck.h"

using std::cout;
using std::endl;
using std::cin;

void VerdoppeleRechteckgr��e(Rechteck& rechteck)
{
	rechteck._h�he *= 2;
	rechteck._breite *= 2;
}

void main()
{
	Rechteck* rechteck = new Rechteck(5);
	VerdoppeleRechteckgr��e(*rechteck);

	delete rechteck;
}