#include "Baton.h"
#include <list>
#include <vector>


Baton::Baton()
{

}


Baton::Baton(vector<Sort>& sortAttaqueDispo, vector<Sort>& sortDefenseDispo)
{
	m_sortAttaqueDispo = sortAttaqueDispo;
	m_sortDefenseDispo = sortDefenseDispo;
	RegenererType();
}

void Baton::RegenererType()
{
	int positionDefRand = rand() % m_sortDefenseDispo.size();
	int positionAttRand =  rand() % m_sortDefenseDispo.size();

	m_sort_defense = m_sortDefenseDispo[positionDefRand];
	m_sort_attaque = m_sortAttaqueDispo[positionAttRand];
}


Sort Baton::ObtenirSortAttaque()
{
	return m_sort_attaque;
}

Sort Baton::ObtenirSortDefense()
{
	return m_sort_defense;
}