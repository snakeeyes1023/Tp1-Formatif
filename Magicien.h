#pragma once
#include "Baton.h"

/// <summary>
/// Créer un magicien
/// </summary>
class Magicien
{
public:

	int m_vie;

	int m_bouclier;

	int m_mana;

	Magicien(Baton& baton, bool robotiser = false);

	Magicien();

	bool EstVivant();

	void Jouer(Magicien& magicien);

	void ChangerBaton();

	void LancerSort(SortType type, Magicien& adversaire);

	void LancerSortDefense();

	void LancerSortAttaque(Magicien& adversaire);

	SortType AfficherChoixSort();
	
	void AfficherStats();

private:
	int m_maxVie = 100;
	int m_maxBouclier = 50;
	Baton m_baton;
	bool m_estRobot;
};

