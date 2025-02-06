#include <iostream>
#include <string>
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
#include "Brigand.h"
#include "Barman.h"
#include "Sherif.h"
using namespace std;

int main()
{
	Cowboy lucky("Lucky Luke", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	Barman robert("Robert", "biere", "Saloon Robert");
	Sherif clint("Clint");

	robert.sePresente();

	//1. La rencontre ...
	lucky.sePresente();
	jenny.sePresente();

	//2. Mais un brigand arrive ...
	joe.sePresente();
	clint.sePresente();
	robert.sert(lucky);
	robert.sert(jenny);
	robert.sert(joe);
	robert.sert(clint);


	joe.kidnappe(jenny);

	clint.recherche(joe);
	clint.emprisonne(joe);

	//clint.sePresente();
	
}
