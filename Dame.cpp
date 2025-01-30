#include "Dame.h"
#include <iostream>
#include <string>
using namespace std;

Dame::Dame(const string nom, const string boissonFavorite="lait", const string couleurRobe="blanche")
	:Humain(nom, boissonFavorite), couleurRobe(couleurRobe), etat("libre")
{
}

void Dame::changerRobe(const string _couleur)
{
	this->couleurRobe = _couleur;
	cout << "(" << nom << ") -- Regardez ma nouvelle robe " << couleurRobe << " !\n";
}

void Dame::sePresente()
{
	cout << "(" << nom << ") -- Bonjour, je suis Miss " << nom << " et j'ai une jolie robe " << couleurRobe << endl;
}

void Dame::setEtat(string _etat)
{
	etat = _etat;
}

string Dame::getNom() const
{
	return "Miss " + nom;
}

string Dame::getEtat() const
{
	return etat;
}
