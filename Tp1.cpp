#include <iostream>
#include "Sort.h"
#include <vector>
#include "Magicien.h"
#include "Utilitaires.h"

using namespace std;

int main()
{
	//Intialise les sorts
	vector<Sort> sortDefDispo = vector<Sort>();
	sortDefDispo.push_back(Sort(20, SortType::Defense, "Incinérateur "));
	sortDefDispo.push_back(Sort(-30, SortType::Defense, "Foudre "));

	vector<Sort> sortAttDispo = vector<Sort>();
	sortAttDispo.push_back(Sort(20, SortType::Attaque, "Guérison "));
	sortAttDispo.push_back(Sort(30, SortType::Attaque, "Protection "));
	
	//Initialise les batons
	Baton batonJoueur = Baton(sortAttDispo, sortDefDispo);
	Baton batonOrdi = Baton(sortAttDispo, sortDefDispo);

	//Initialise les magiciens
	Magicien joueur = Magicien(batonJoueur);
	Magicien ordi = Magicien(batonOrdi, true);


	while (joueur.EstVivant() && ordi.EstVivant())
	{
		std::system("CLS");

		joueur.AfficherStats();
		ordi.AfficherStats();

		//Random détermine qui commence
		if (Utilitaires::OtbenirBoolHazard())
		{
			joueur.Jouer(ordi);
			ordi.Jouer(joueur);
		}
		else 
		{
			ordi.Jouer(joueur);
			joueur.Jouer(ordi);
		}
	}

	if (joueur.EstVivant())
	{
		std::cout << "Vous avez gagné";
	}
	else 
	{
		std::cout << "Vous avez perdu";

	}
}