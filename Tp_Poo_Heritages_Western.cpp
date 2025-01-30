#include <iostream>
#include <string>
#include "Humain.h"
#include "Dame.h"
using namespace std;

int main()
{
	Humain lucky("Lucky Luke", "coca");
	Humain* joe = new Humain("Joe Dalton", "whisky");


	lucky.sePresente();
	joe->sePresente();
	lucky.boire();

	Dame jenny("Jenny", "lait", "blanche");
	jenny.sePresente();
	jenny.boire();
}

