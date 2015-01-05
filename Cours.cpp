#include "StdAfx.h"
#include "Cours.h"


Cours::Cours(void)
{
}

Cours::Cours(Compte cpt , int lim, bool acc, string inti){
	limite = lim ;
	compte = cpt ;
	accepte = acc;
	intitule = inti ;
	
};

Compte Cours::getEnseignant() const{
	return compte; 
}

int Cours::getLimite() const{
	return limite;
}

bool Cours::getAccepte() {
	return accepte;
}

string Cours::getIntitule() const{
	return intitule;
}

Ressource Cours::getRessource(int index) {	
	return lRess[index] ;
}

Devoir Cours::getDevoir(int index) {	
	return lDev[index] ;
}

Compte Cours::getEtudiant(int index) {	
	return lEtu[index] ;
}

int Cours::getSizelRess() {
	return lRess.size();
}

int Cours::getSizelDev() {
	return lDev.size();
}

int Cours::getSizelEtu() {
	return lEtu.size();
}

void Cours::setLimite(int lim){
	limite = lim;
}

void Cours::setIntitule(string inti){
	intitule = inti;
}

void Cours::setAccepte(){
	accepte = !accepte;
}

void Cours::setEnseignant(Compte ens){
	compte = ens;
}

void Cours::ajouterRessource(Ressource ress){
	lRess.push_back(ress);
}

void Cours::ajouterDevoir(Devoir dev){
	lDev.push_back(dev);
}

void Cours::ajouterEtudiant(Compte etu){
	lEtu.push_back(etu);
}


