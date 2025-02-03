#include "Dame.h"
#include "Cowboy.h"
#include <iostream>
#include <string>
using namespace std;

void Dame::hurle()
{
	cout << "** " << getNom() << " hurle\n";
	cout << "(" << nom << ") -- Au secours je me fais kidnapper !\n";
}

void Dame::remercie(Cowboy& cowboy)
{
	cout << "(" << nom << ") -- Merci " << cowboy.getNom() << " je suis enfin libre !\n";
}

Dame::Dame(const string nom/*=""*/, const string boissonFavorite/*="lait"*/, const string couleurRobe/*="blanche"*/)
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

void Dame::seFaitKidnapper()
{
	etat = "kidnapee";
	hurle();
}

void Dame::seFaitLiberer(Cowboy& cowboy)
{
	etat = "libre";
	remercie(cowboy);
}
