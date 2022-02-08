// Tp1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Sort.h"
#include <vector>
using namespace std;

int main()
{
	vector<Sort> m_sortDispo = vector<Sort>();
	m_sortDispo.push_back(Sort(20, SortType::Attaque, "Incinérateur "));
	m_sortDispo.push_back(Sort(30, SortType::Attaque, "Foudre "));
	m_sortDispo.push_back(Sort(20, SortType::Defense, "Guérison "));
	m_sortDispo.push_back(Sort(30, SortType::Defense, "Protection "));
	

	while (true)
	{

	}

}