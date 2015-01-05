#include "StdAfx.h"
#include "Compte.h"


Compte::Compte(void)
{
}


Compte::~Compte(void)
{
}



Compte::Compte(string id , string pw,int a){
	identifiant = id ;
	password = pw ;
	type = COMPTE_ATTENTE ;
	futur = a;
	
};

Compte::Compte(const Compte &c){
	identifiant = c.getIdentifiant() ;
	password = c.getPassword() ;
	
}
int Compte::getFuture(){
	return futur;
}
string Compte::getIdentifiant() const{
	return identifiant;
}
void Compte::setType(){
	type=futur;
}
string Compte::getPassword() const{
	return password;
}

string Compte::getTampon() const{
	return tampon ;
}

void Compte::setTampon(string s){
	tampon = s;
}

void Compte::setIdentifiant(string s){
	identifiant = s;
}

void Compte::setPassword(string s){
	password = s;
}
