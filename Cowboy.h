#pragma once
#include "Humain.h"
class Cowboy :
	public Humain
{
private :
	int popularite = 0;
	string adjectif="vaillant"; 
public:
	Cowboy(const string nom = "", const string boissonFavorite = "whsiky", const string adjectif = "vaillant", const int popularite = 0);
	void sePresente();
};

