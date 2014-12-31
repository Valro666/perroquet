#include "StdAfx.h"
#include "Compte.h"


Compte::Compte(void)
{
}


Compte::~Compte(void)
{
}



Compte::Compte(TCHAR id , TCHAR pw){
	identifiant = id ;
	password = pw ;
	/* on essaye de faire sans
    switch(type){
         case COMPTE_ETUDIANT : 
              status = COMPTE_ETUDIANT; 
              break;
	     case COMPTE_ENSEIGNANT : 
              status = COMPTE_ENSEIGNANT; 
              break;
	     case COMPTE_ADMIN : 
              status = COMPTE_ADMIN; 
              break;
	     default : 
              status = 42; 
              break;
	}
	*/
};

Compte::Compte(const Compte &c){
	identifiant = c.getIdentifiant() ;
	password = c.getPassword() ;
	
}

TCHAR Compte::getIdentifiant() const{
	return identifiant;
}

TCHAR Compte::getPassword() const{
	return password;
}

TCHAR Compte::getTampon() const{
	return tampon ;
}

void Compte::setTampon(TCHAR s){
	tampon = s;
}

void Compte::setIdentifiant(TCHAR s){
	identifiant = s;
}

void Compte::setPassword(TCHAR s){
	password = s;
}
