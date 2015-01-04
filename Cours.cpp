#include "StdAfx.h"
#include "Cours.h"


Cours::Cours(void)
{
}


Cours::~Cours(void)
{
}



Cours::Cours(Enseignant cpt , int lim){
	limite = lim ;
	compte = cpt ;
	
};



Enseignant Cours::getEnseignant() const{
	return compte; 
}

int Cours::getLimite() const{
	return limite;
}

Ressource Cours::getRessource(int index) {
	std::list<Ressource>::iterator it = lRess.begin();
	std::advance(it, index);
	
		
	return *it ;
}

void Cours::setLimite(int lim){
	limite = lim;
}

void Cours::setEnseignant(Enseignant ens){
	compte = ens;
}

void Cours::ajouterRessource(Ressource ress){
	lRess.push_back(ress);
}


