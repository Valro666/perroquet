#include "StdAfx.h"
#include "Depot.h"


Depot::Depot(void)
{
}


Depot::~Depot(void)
{
}

Depot::Depot(TCHAR inti , TCHAR road, bool ouv){
    intitule = inti;
    chemin = road;
    ouvert =ouv;
}

TCHAR Depot::getChemin() const{
	return chemin;
}

TCHAR Depot::getIntitule() const{
	return intitule;
}

bool Depot::getOuvert() const{
	return ouvert;
}

void Depot::setChemin(TCHAR road) {
	chemin = road ;
}

void Depot::setIntitule(TCHAR inti){
	intitule = inti ;
}

void Depot::setOuvert() {
	ouvert = !ouvert ;
}