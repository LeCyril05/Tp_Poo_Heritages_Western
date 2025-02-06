#pragma once
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
class Dame;
class Cowboy;
class Sherif;
class Brigand :
	public Humain
{
private:
	string comportement;
	int nbDamesEnlevees;
	int recompense;
	bool enPrison;

public:
	Brigand(const string nom = "", const string boissonFavorite = "tord-boyaux", const string comportement = "mechant");
	string getComportement();
	int getNbDamesEnlevees();
	int getRecompense();
	void sePresente();
	void kidnappe(Dame& dame);
	void seFaitEmpriossoner(Cowboy& cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	void incrementeNbDamesEnlevees();
	void decrementeNbDamesEnlevees();
	bool estEnPrison();
};

