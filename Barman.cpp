#include "Barman.h"
#include <iostream>

string Barman::terminePhrase()
{
	return " mon gars.\n" ;
}

Barman::Barman(const string nom/*=""*/, const string boissonFavorite/*="biere"*/, const string nomBar/*=""*/)
	:Humain(nom, boissonFavorite), nomBar(nomBar)
{
}

string Barman::getNomBar()
{
	return nomBar;
}

void Barman::parle(const string texte)
{
	{
		cout << "(" << nom << ") -- " << texte << terminePhrase();
	}
}

void Barman::sePresente()
{
	cout << "(" << getNom() << ") -- Bonjour, je suis " << getNom() << " le barman du " << getNomBar() << " et j'aime le " << getBoissonFav() << terminePhrase();
}

void Barman::sert(Humain& client)
{
	cout << "(" << getNom() << ") -- Tiens " << client.getNom() << ", un verre de " << client.getBoissonFav() << terminePhrase();
}
