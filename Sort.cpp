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
