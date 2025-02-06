#pragma once
#include "Cowboy.h"
class Brigand;
class Sherif :
	public Cowboy
{
private:
	int nbBrigandsCoffres=0;
public:
	Sherif(const string nom = "", const string boissonFavorite = "eau");
	void emprisonne(Brigand& brigand);
	void recherche(Brigand& brigand);
	string getNom() const;
	void sePresente();


};

