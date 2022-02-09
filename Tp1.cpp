// Tp1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

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
	sortDefDispo.push_back(Sort(20, SortType::Attaque, "Incinérateur "));
	sortDefDispo.push_back(Sort(30, SortType::Attaque, "Foudre "));

	vector<Sort> sortAttDispo = vector<Sort>();
	sortAttDispo.push_back(Sort(20, SortType::Defense, "Guérison "));
	sortAttDispo.push_back(Sort(30, SortType::Defense, "Protection "));
	
	//Initialise les batons
	Baton batonJoueur = Baton(sortAttDispo, sortDefDispo);
	Baton batonOrdi = Baton(sortAttDispo, sortDefDispo);

	//Initialise les magiciens
	Magicien joueur = Magicien(batonJoueur);
	Magicien ordi = Magicien(batonOrdi, true);


	while (joueur.EstVivant() && ordi.EstVivant())
	{
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
}