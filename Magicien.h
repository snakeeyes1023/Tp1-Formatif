#pragma once
#include "Baton.h"

/// <summary>
/// Cr�er un magicien
/// </summary>
class Magicien
{
public:
	Magicien(Baton& baton);

	Magicien();

	bool EstVivant();

private:
	int m_vie;
	int m_mana;
	unsigned int m_bouclier;
	Baton m_baton;
};

