#include "Cercle.h";

CerclePublic::CerclePublic() : m_rayon{ 1 } {}

double CerclePublic::getCirconference() { return m_rayon * 2.0 * 3.1416; }

double CerclePublic::getAire() { return m_rayon * m_rayon * 3.1416; }


CercleEncapsule::CercleEncapsule() : m_rayon{ 1 } {}

void CercleEncapsule::setRayon(double rayon)
{
	if (rayon <= 0.0) { std::cout << "Le rayon doit etre plus grand que 0 \n\n"; }
	else { m_rayon = rayon; }
}

double CercleEncapsule::getRayon() const { return m_rayon; }

double CercleEncapsule::getCirconference() { return m_rayon * 2.0 * 3.1416; }

double CercleEncapsule::getAire() { return m_rayon * m_rayon * 3.1416; }

