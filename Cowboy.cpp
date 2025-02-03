#include "Cowboy.h"
#include "Brigand.h"
#include <iostream>
using namespace std;

Cowboy::Cowboy(const string nom/*=""*/, const string boissonFavorite/*="whisky"*/, const string qualite/*="vaillant"*/, const int popularite)
	:Humain(nom, boissonFavorite), qualite(qualite), popularite(popularite)
{
}

void Cowboy::sePresente()
{
	{
		cout << "(" << nom << ") -- Bonjour, je suis le  " << qualite << " " << nom << " et j'aime le " << boissonFavorite << endl;
	}
}

int Cowboy::getPopularite()
{
	return popularite;
}

void Cowboy::setPopularite(const int _popularite)
{
	popularite = _popularite;
}

string Cowboy::getQualite()
{
	return qualite;
}

void Cowboy::setQualite(const string _qualite)
{
	qualite = _qualite;
}

void Cowboy::incrementePopularite()
{
	popularite++;
}

void Cowboy::decrementePopularite()
{
	if (popularite >0)
	{
		popularite--;
	}
}

void Cowboy::tire(Brigand& brigand)
{
	cout << "** Le " << getQualite() << " " << getNom() << " tire sur " << brigand.getNom() << endl;
	cout << "(" << getNom() << ") -- Prends ca, rascal !\n";
}

void Cowboy::emprisonne(Brigand& brigand)
{
	brigand.seFaitEmpriossoner(*this);
}

void Cowboy::libere(Dame& dame)
{
	cout << "** Le " << getQualite() << " " << getNom() << " libere " << dame.getNom() << endl;
	dame.seFaitLiberer(*this);
}
