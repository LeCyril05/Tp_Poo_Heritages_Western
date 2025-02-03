#include "Cowboy.h"
#include <iostream>
using namespace std;

Cowboy::Cowboy(const string nom/*=""*/, const string boissonFavorite/*="whisky"*/, const string adjectif/*="vaillant"*/, const int popularite)
	:Humain(nom, boissonFavorite), adjectif(adjectif), popularite(popularite)
{
}

void Cowboy::sePresente()
{
	{
		cout << "(" << nom << ") -- Bonjour, je suis le  " << adjectif << " " << nom << " et j'aime le " << boissonFavorite << endl;
	}
}
