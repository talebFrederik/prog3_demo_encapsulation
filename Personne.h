#ifndef DEF_PERSONNE
#define DEF_PERSONNE

#include <string>

class Date
{
public:
	Date(int annee, int mois, int jour);
	int getAnnee() const;
	int getMois() const;
	int getJour() const;
	int getNbAnnees (Date date) const;

private:
	int m_annee;
	int m_mois;
	int m_jour;
};

class Personne
{
public:
	Personne(std::string nom, Date dateNaissance);
	int getAge(Date dateDuJour) const;

private:
	std::string m_nom;
	Date m_dateNaissance;
};
#endif

