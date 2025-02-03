#include "Brigand.h"
#include "Dame.h"
#include "Cowboy.h"
#include <iostream>
using namespace std;

Brigand::Brigand(const string nom /*= ""*/, const string boissonFavorite /*= "tord-boyaux"*/, const string comportement/* = "mechant"*/)
	:Humain(nom, boissonFavorite), comportement(comportement), nbDamesEnlevees(0), recompense(0), enPrison(false)
{
}

string Brigand::getComportement()
{
	return comportement;
}

int Brigand::getNbDamesEnlevees()
{
	return nbDamesEnlevees;
}

int Brigand::getRecompense()
{
	return recompense;
}

void Brigand::sePresente()
{
	cout << "(" << nom << ") -- Bonjour je suis " << getNom() << " le " << getComportement() << " et j'aime le " << getBoissonFav() << ".\n";
	if (nbDamesEnlevees>0)
	{
		cout << "(" << nom << ") -- J'ai l'air  " << getComportement() << " et j'ai kidnappe " << getNbDamesEnlevees() << " dames !\n";
		cout << "(" << nom << ") -- Ma tete est mise a prix pour " << getRecompense() << " $ !\n";
	}
}

void Brigand::kidnappe(Dame &dame)
{
	dame.seFaitKidnapper();
	incrementeNbDamesEnlevees();
	augmenteRecompense();
	cout << "(" << nom << ") -- Ah ah ! " << dame.getNom() << ", tu es mienne désormais !\n";
}

void Brigand::seFaitEmpriossoner(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ")-- Damned, je suis fait ! " << cowboy.getNom() << ", tu m'as eu !\n";

	}
}

void Brigand::augmenteRecompense(const int prix/*=100*/)
{
	if (prix>0)
	{
		this->recompense += prix;
	}
}

void Brigand::diminueRecompense(const int prix/*=100*/)
{
	if (prix > 0 && prix <= recompense)
		this->recompense -= prix;
}

void Brigand::incrementeNbDamesEnlevees()
{
	nbDamesEnlevees++;
}

void Brigand::decrementeNbDamesEnlevees()
{
	nbDamesEnlevees--;
}

bool Brigand::estEnPrison()
{
	return enPrison;
}
