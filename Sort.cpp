#include "Sort.h"

Sort::Sort()
{
	m_dommage = 0;
	m_nom = "Inconnue";
	m_type = SortType::Attaque;
}

Sort::Sort(int dommage, SortType type, std::string nom)
{
	m_dommage = dommage;
	m_nom = nom;
	m_type = type;
}

int Sort::ObtenirDommage()
{
	return m_dommage;
}

std::string Sort::ObtenirNom()
{
	std::string nomType = m_type == SortType::Attaque ? "Attaque" : "Protection";
	return m_nom + " de " + nomType;
}
