#include "Depot.h"
using namespace std;

Depot::Depot(){};
Ressource::Ressource(string inti , string road, bool ouv){
    intitule = inti;
    chemin = road;
    ouvert =ouv;
}

string Depot::getChemin() const{
	return chemin;
}

string Depot::getIntitule() const{
	return intitule;
}

string Depot::getOuvert() const{
	return ouvert;
}

void Depot::setChemin(string road){
	chemin = road ;
}

void Depot::setIntitule(string inti){
	intitule = inti ;
}

void Depot::setOuvert(){
	ouvert = !ouvert ;
}
