/**
 * Démo encapsulation : contrôle des attributs
 *
 * @file encapsulation.cpp
 *
 * @brief Contrôle de l'état avec les mutateurs (set)
 *
 * @author Frédérik Taleb
 * Contact: taleb.frederik@carrefour.cegepvicto.ca
 *
 */

#include <iostream>
#include "Cercle.h"
#include "Personne.h"


int main() 
{
	char continuer('n');

	// Encapsulation : contrôle de l'état

	// La classe CerclePublic n'est pas encapsulée, on peut donner des valeurs impossible à son état
	CerclePublic cerclePublic;
	cerclePublic.m_rayon = -1;

	std::cout << "Le cercle publique avec un rayon de : " << cerclePublic.m_rayon << "\n";
	std::cout << "a une aire de : " << cerclePublic.getAire() << "\n";
	std::cout << "et une circonference de : " << cerclePublic.getCirconference() << "\n\n";

	// La classe CercleEncapsule contrôle la modification de son état
	// par conséquent on ne peut pas assigner des valeurs menant à des comportements et résultats qui n'ont pas de sens
	// comme un rayon négatif pour un cercle...
	CercleEncapsule cercle;
	cercle.setRayon(-1.0);

	cercle.setRayon(3.0);

	std::cout << "Le cercle encapsule avec un rayon de : " << cercle.getRayon() << "\n";
	std::cout << "a une aire de : " << cercle.getAire() << "\n";
	std::cout << "et une circonference de : " << cercle.getCirconference() << "\n\n";

	std::cout << "Continuer la demonstration pour l'encapsulation : ";
	std::cin >> continuer;
	std::cout << "\n";

	// Encapsulation : avantage des méthodes
	// En utilisant le calcul de la classe date, on n'a pas besoin de se soucier de calculer et garder l'âge d'une personne dans son état

	int annee;
	int mois;
	int jour;

	std::cout << "En quelle annee es-tu ne? ";
	std::cin >> annee;
	std::cout << "Le mois? ";
	std::cin >> mois;
	std::cout << "Le jour? ";
	std::cin >> jour;

	Date dateNaissance{ annee, mois, jour };

	Personne moi("Fred", dateNaissance);

	std::cout << "Quelle date sommes-nous? \n";
	std::cout << "annee : ";
	std::cin >> annee;
	std::cout << "mois : ";
	std::cin >> mois;
	std::cout << "jour : ";
	std::cin >> jour;

	Date aujourdhui{ annee, mois, jour };

	std::cout << "Tu as " << moi.getAge(aujourdhui) << " ans aujourd'hui!";
}