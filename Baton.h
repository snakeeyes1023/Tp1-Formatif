#pragma once

#include "Sort.h"
#include <vector>

using namespace std;


class Baton
{
public:

	/// <summary>
	/// Cr�er un baton
	/// </summary>
	Baton();

	/// <summary>
	/// Cr�er un baton avec les sorts
	/// </summary>
	Baton(vector<Sort>& sortAttaque, vector<Sort>& sortDefense);

	/// <summary>
	/// Reg�nrer le sort du baton
	/// </summary>
	void RegenererType();

	/// <summary>
	/// Obtenir le sort de d�fense
	/// </summary>
	/// <returns></returns>
	Sort ObtenirSortDefense();

	/// <summary>
	/// Obtenir le sort d'attaque
	/// </summary>
	/// <returns></returns>
	Sort ObtenirSortAttaque();


private:

	/// <summary>
	///
	/// </summary>
	vector<Sort> m_sortAttaqueDispo;
	/// <summary>
	/// 
	/// </summary>
	vector<Sort> m_sortDefenseDispo;

	/// <summary>
	/// 
	/// </summary>
	Sort m_sort_attaque;
	/// <summary>
	/// 
	/// </summary>
	Sort m_sort_defense;
};

