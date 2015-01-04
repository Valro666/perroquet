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

Devoir Cours::getDevoir(int index) {
	std::list<Devoir>::iterator it = lDev.begin();
	std::advance(it, index);	
	return *it ;
}

Etudiant Cours::getEtudiant(int index) {
	std::list<Etudiant>::iterator it = lEtu.begin();
	std::advance(it, index);	
	return *it ;
}

int Cours::getSizelRess() {
	int compt = 0;
	for (std::list<Ressource>::iterator it = lRess.begin(); it != lRess.end(); ++it){
		compt++;
	}
	return compt;
}

int Cours::getSizelDev() {
	int compt = 0;
	for (std::list<Devoir>::iterator it = lDev.begin(); it != lDev.end(); ++it){
		compt++;
	}
	return compt;
}

int Cours::getSizelEtu() {
	int compt = 0;
	for (std::list<Etudiant>::iterator it = lEtu.begin(); it != lEtu.end(); ++it){
		compt++;
	}
	return compt;
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

void Cours::ajouterDevoir(Devoir dev){
	lDev.push_back(dev);
}

void Cours::ajouterEtudiant(Etudiant etu){
	lEtu.push_back(etu);
}


