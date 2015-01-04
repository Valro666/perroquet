#include "StdAfx.h"
#include "Ressource.h"


Ressource::Ressource(void)
{
}


Ressource::~Ressource(void)
{
}

Ressource::Ressource(string inti , string road){
    intitule = inti;
    chemin = road;
}

string Ressource::getChemin() const{
	return chemin;
}

string Ressource::getIntitule() const{
	return intitule;
}

void Ressource::setChemin(string road) {
	chemin = road;
}

void Ressource::setIntitule(string inti){
	intitule = inti;
}

