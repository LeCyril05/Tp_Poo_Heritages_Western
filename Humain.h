#pragma once
#include <string>
using namespace std;
class Humain
{
private:

protected:
	string nom;
	string boissonFavorite;

public:
	Humain(const string nom, const string boissonFavorite="eau");
	void parle(string);
	virtual void sePresente() const;
	void presentezVous(Humain& humain);
	void setBoissonFav(string);
	string getNom();
	string getBoissonFav();
	void boire();
};

