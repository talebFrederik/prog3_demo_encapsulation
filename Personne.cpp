#include "Personne.h"


Date::Date(int annee, int mois, int jour) : m_annee{ annee }, m_mois{ mois }, m_jour{ jour } {}

int Date::getAnnee() const { return m_annee; }

int Date::getMois() const { return m_mois; }

int Date::getJour() const { return m_jour; }

int Date::getNbAnnees(Date date) const
{
	int nbAnnees(date.getAnnee() - m_annee);
	
	if (date.getMois() < m_mois)
	{
		nbAnnees--;
	}
	else if ( date.getJour() < m_jour)
	{
		nbAnnees--;
	}

	return nbAnnees;
}

Personne::Personne(std::string nom, Date dateNaissance) : m_nom{ nom }, m_dateNaissance { dateNaissance } {}

int Personne::getAge(Date dateDuJour) const
{
	return m_dateNaissance.getNbAnnees(dateDuJour);
}