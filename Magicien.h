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

	/// <summary>
	/// Créer un magicien 
	/// </summary>
	/// <param name="baton">Le baton du magicien</param>
	/// <param name="robotiser">Dit s'il sagit d'un bot ou non</param>
	Magicien(Baton& baton, bool robotiser = false);

	Magicien();

	/// <summary>
	/// Si le joueur est vivant
	/// </summary>
	/// <returns></returns>
	bool EstVivant();

	/// <summary>
	/// Jouer affichage de graphique selon s'il est robotise
	/// </summary>
	/// <param name="magicien"></param>
	void Jouer(Magicien& magicien);

	/// <summary>
	/// Changer le baton
	/// </summary>
	void ChangerBaton();

	/// <summary>
	/// Lancer un sort
	/// </summary>
	/// <param name="type">Type de sort</param>
	/// <param name="adversaire">Adversaire</param>
	void LancerSort(SortType type, Magicien& adversaire);

	/// <summary>
	/// Lancer le sort de defense du baton
	/// </summary>
	void LancerSortDefense();

	/// <summary>
	/// Lancer le sort d'attaque du baton
	/// </summary>
	/// <param name="adversaire"></param>
	void LancerSortAttaque(Magicien& adversaire);
	
	/// <summary>
	/// Affichage console des sort disponnible
	/// </summary>
	/// <returns>Le sort sélectionn.</returns>
	SortType AfficherChoixSort();
	
	/// <summary>
	/// Affiche d'information du joueur (Console)
	/// </summary>
	void AfficherStats();

private:
	int m_maxVie = 100;
	int m_maxBouclier = 50;
	Baton m_baton;
	bool m_estRobot;
};

