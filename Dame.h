#pragma once
#include "Humain.h"
#include <iostream>
#include <string>
using namespace std;
class Dame :
	public Humain
{
private:
	string couleurRobe;
	string etat;
public : 
	Dame(const string nom, const string boissonFavorite, const string coleurRobe);
	void changerRobe(const string _couleur);
	void sePresente();
	void setEtat(string);

	string getNom() const;
	string getEtat() const;

};

