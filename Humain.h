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
	void sePresente();
	void setBoissonFav(string);
	string getBoissonFav();
	void boire();
};

