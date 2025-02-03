#include <iostream>
#include <string>
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
using namespace std;

int main()
{
	Cowboy lucky("Lucky Luke");
	Humain* joe = new Humain("Joe Dalton", "whisky");


	lucky.sePresente();
	joe->sePresente();
	lucky.boire();

	Dame jenny("Jenny");
	jenny.sePresente();
	jenny.boire();
}
