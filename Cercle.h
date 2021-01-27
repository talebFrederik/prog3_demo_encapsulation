#ifndef DEF_CERCLE
#define DEF_CERCLE

#include <iostream>

class CerclePublic
{
public:
	CerclePublic();
	double m_rayon;
	double getCirconference();
	double getAire();
};

class CercleEncapsule
{
public:
	CercleEncapsule();
	void setRayon(double rayon);
	double getRayon() const;
	double getCirconference();
	double getAire();
private:
	double m_rayon;

};

#endif

