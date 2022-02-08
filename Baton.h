#pragma once

#include "Sort.h"
#include <vector>

using namespace std;


class Baton
{
public:

	Baton();

	Baton(vector<Sort>& sortAttaque, vector<Sort>& sortDefense);

	void RegenererType();

	Sort ObtenirSortDefense();

	Sort ObtenirSortAttaque();


private:

	vector<Sort> m_sortAttaqueDispo;
	vector<Sort> m_sortDefenseDispo;

	Sort m_sort_attaque;
	Sort m_sort_defense;
};

