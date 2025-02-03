#pragma once
#include "Humain.h"
class Brigand;
class Dame;
class Cowboy :
	public Humain
{
private :
	int popularite = 0;
	string qualite="vaillant"; 
public:
	Cowboy(const string nom = "", const string boissonFavorite = "whsiky", const string qualite = "vaillant", const int popularite = 0);
	void sePresente();

	int getPopularite();
	void setPopularite(const int _popularite);
	string getQualite();
	void setQualite(const string _qualite);
	void incrementePopularite();
	void decrementePopularite();
	void tire(Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void libere(Dame& dame);

};

