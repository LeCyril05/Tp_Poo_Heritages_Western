#pragma once
#include "Humain.h"
#include "Cowboy.h"
#include <iostream>
#include <string>
using namespace std;

class Cowboy;

class Dame :
	public Humain
{
private:
	string couleurRobe;
	string etat;
	void hurle();
	void remercie(Cowboy& cowboy);
public : 
	Dame(const string nom="", const string boissonFavorite="lait", const string coleurRobe="blanche");
	void changerRobe(const string _couleur);
	void sePresente();
	void setEtat(string);

	string getNom() const;
	string getEtat() const;

	void seFaitKidnapper();
	void seFaitLiberer(Cowboy& cowboy);

};

