#pragma once

#include "SortType.h"
#include <string>

/// <summary>
/// Sort devant ?tre utilis? par un b?ton
/// </summary>
class Sort
{
public:
	/// <summary>
	/// Initialiser un sort inconnue
	/// </summary>
	Sort();

	/// <summary>
	/// Initialiser un sort
	/// </summary>
	/// <param name="dommage">Dommage</param>
	/// <param name="typeSort">Type de sort</param>
	/// <param name="nom">Nom du sort</param>
	Sort(int, SortType, std::string);

	/// <summary>
	/// Obtenir les dommages du sorts
	/// </summary>
	/// <returns></returns>
	int ObtenirDommage();

	/// <summary>
	/// Obtenir le nom du sort
	/// </summary>
	/// <returns></returns>
	std::string ObtenirNom();

private:

	/// <summary>
	/// Nom du sort
	/// </summary>
	std::string m_nom;

	/// <summary>
	/// Dommage du sort (depend de sont type)
	/// </summary>
	int m_dommage;

	/// <summary>
	/// Type de sort
	/// </summary>
	SortType m_type;
};

