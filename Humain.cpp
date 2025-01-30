#include "Humain.h"
#include <string>
#include <iostream>
using namespace std;

Humain::Humain(const string nom, const string boissonFavorite/*="eau"*/)
	:nom(nom), boissonFavorite(boissonFavorite)
{
}

void Humain::parle(string _texte)
{
	cout << "(" << nom << ") -- " << _texte << endl ;
}

void Humain::sePresente()
{
	cout << "(" << nom << ") -- Bonjour, je m'appelle "  <<  nom <<  " et j'aime le " << boissonFavorite << endl;
}

void Humain::setBoissonFav(string _boisson)
{
	if (!_boisson.empty())
		boissonFavorite = _boisson;
}

string Humain::getBoissonFav()
{
	return boissonFavorite;
}

void Humain::boire()
{
	cout << "(" << nom << ") -- Ah ! Un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}
