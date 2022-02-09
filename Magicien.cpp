#include "Magicien.h"
#include "Utilitaires.h"
#include <iostream>

Magicien::Magicien(Baton& baton, bool robotiser)
{
	m_vie = 50;
	m_bouclier = 0;
	m_mana = 50;
	m_baton = baton;
	m_estRobot = robotiser;
}

Magicien::Magicien()
{
	m_vie = 50;
	m_bouclier = 0;
	m_mana = 50;
	m_estRobot = true;
}


bool Magicien::EstVivant()
{
	return m_vie > 0;
}

void Magicien::Jouer(Magicien& adversaire)
{
	if (m_mana < 10)
	{
		m_baton.RegenererType();
		return;
	}

	if (m_estRobot)
	{
		LancerSort(Utilitaires::ObtenirSortHazard(), adversaire);
	}
	else 
	{
		SortType type{ AfficherChoixSort() };

		if (type == SortType::Null)
		{
			ChangerBaton();
		}

		LancerSort(type, adversaire);
	}
}

void Magicien::ChangerBaton()
{
	m_baton.RegenererType();
	m_mana += 50;
}

void Magicien::LancerSort(SortType type, Magicien& adversaire)
{
	if (type == SortType::Attaque)
	{
		LancerSortAttaque(adversaire);
	}
	if (type == SortType::Defense)
	{
		LancerSortDefense();
	}
}

void Magicien::LancerSortDefense()
{
	Sort sortDefense{ m_baton.ObtenirSortDefense() };

	int dommage = sortDefense.ObtenirDommage();

	if (dommage < 0)
	{
		m_bouclier += dommage;
		if (m_bouclier > m_maxBouclier)
		{
			m_bouclier -= (m_bouclier - m_maxBouclier);
		}
	}
	else
	{
		m_vie += dommage;
		if (m_vie > m_maxVie)
		{
			m_vie -= (m_vie - m_maxVie);
		}
	}
}

void Magicien::LancerSortAttaque(Magicien& adversaire)
{
	Sort sortAttaque{ m_baton.ObtenirSortAttaque() };

	int dommage = sortAttaque.ObtenirDommage();

	if (dommage < 0)
	{
		dommage = abs(dommage);
		adversaire.m_vie -= dommage;
	}
	else
	{
		adversaire.m_bouclier -= dommage;
		if (adversaire.m_bouclier < 0)
		{
			adversaire.m_vie -= abs(adversaire.m_bouclier);
		}
	}
}

SortType Magicien::AfficherChoixSort()
{
	std::string resultat{ "" };
	bool resultatInvalide = true;
	while (resultatInvalide)
	{
		std::cout << "Choisissez votre sort ! \n";
		std::cout << "[0] " << "Changer de baton" << "\n";
		std::cout << "[1] " << m_baton.ObtenirSortAttaque().ObtenirNom() << "\n";
		std::cout << "[2] " << m_baton.ObtenirSortDefense().ObtenirNom() << "\n";

		cin >> resultat;

		if (resultat == "0" || resultat == "1" || resultat == "2")
		{
			resultatInvalide = false;
		}
	}

	if (resultat == "0")
	{
		return SortType::Null;
	}
	
	return resultat == "1" ? SortType::Attaque : SortType::Defense;
}
