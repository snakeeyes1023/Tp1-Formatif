#include "Magicien.h"

Magicien::Magicien(Baton& baton)
{
	m_vie = 50;
	m_bouclier = 0;
	m_mana = 50;
	m_baton = baton;
}

Magicien::Magicien()
{
	m_vie = 50;
	m_bouclier = 0;
	m_mana = 50;
}


bool Magicien::EstVivant()
{
	return m_vie > 0;
}
