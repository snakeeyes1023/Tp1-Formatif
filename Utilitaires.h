#pragma once

#include "SortType.h"

class Utilitaires
{
public:
	/// <summary>
	/// CODE EMPRUNTER source : StackOverFLow
	/// Obtenir un bool au hazard
	/// </summary>
	/// <returns>Bool</returns>
	bool static OtbenirBoolHazard();

	/// <summary>
	/// Obtenir un int au hazard
	/// </summary>
	/// <param name="min">Minium non inclus</param>
	/// <param name="max">Maximum non inclus</param>
	/// <returns></returns>
	int static ObtenirIntHazard(int min, int max);

	/// <summary>
	/// Obtenir un sort au hazard
	/// </summary>
	/// <returns>Le sort</returns>
	SortType static ObtenirSortHazard();
};

