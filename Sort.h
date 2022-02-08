#pragma once

#include "SortType.h"
#include <string>

/// <summary>
/// Sort devant être utilisé par un bâton
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

