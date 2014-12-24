#include "StdAfx.h"
#include "Ressource.h"


Ressource::Ressource(void)
{
}


Ressource::~Ressource(void)
{
}

Ressource::Ressource(TCHAR inti , TCHAR road){
    intitule = inti;
    chemin = road;
}

TCHAR Ressource::getChemin() const{
	return chemin;
}

TCHAR Ressource::getIntitule() const{
	return intitule;
}

void Ressource::setChemin(TCHAR road) {
	chemin = road;
}

void Ressource::setIntitule(TCHAR inti){
	intitule = inti;
}

