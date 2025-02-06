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
	
	//1. La rencontre ...
	robert.sePresente();
	lucky.sePresente();
	jenny.sePresente();
	clint.sePresente();
	

	//2. Mais un brigand arrive ...
	joe.sePresente();
	robert.sert(lucky);
	robert.sert(jenny);
	robert.sert(joe);
	robert.sert(clint);

	//3. Le brigand kidnappe une dame et se fait arreter par le sherif ... 
	joe.kidnappe(jenny);
	clint.recherche(joe);
	clint.emprisonne(joe);

}
