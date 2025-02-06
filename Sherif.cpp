#include "Sherif.h"
#include "Brigand.h"
#include <iostream>
using namespace std;

Sherif::Sherif(const string nom/*=""*/, const string boissonFavorite/*="eau"*/)
	:Cowboy(nom, boissonFavorite)
{
}

void Sherif::emprisonne(Brigand& brigand)
{
	cout << "(" << nom << ") -- Au nom de la loi, je vous arrete " << brigand.getNom() << " !" << endl;
	brigand.seFaitEmpriossoner(*this);
	nbBrigandsCoffres++;
	
}

void Sherif::recherche(Brigand& brigand)
{
	cout << "** OYEZ OYEZ BRAVE GENS ! ! " << brigand.getRecompense() << " $ a qui arretera " << brigand.getNom() << " mort ou vif ! !\n";
}

string Sherif::getNom() const
{
	return "Sherif " + nom;
}

void Sherif::sePresente()
{
	if (nbBrigandsCoffres>=1)
	{
		cout << "(" << nom << ") -- Bonjour, je suis le " << getNom() << " et j'aime le " << boissonFavorite << ". J'ai coffre " << nbBrigandsCoffres << " brigand(s)." <<  endl;
	}
	else
	{
		cout << "(" << nom << ") -- Bonjour, je suis le " << getNom() << " et j'aime le " << boissonFavorite << endl;
	}
}
