#include "Compte.h"
using namespace std;
Compte::Compte(){};

Compte::Compte(string id , string pw,int type){
	identifiant = id ;
	password = pw ;
	
	
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



};

int Compte::getStatus() const{
	return status;

}


string Compte::getIdentifiant() const{
	return identifiant;
}

string Compte::getPassword() const{
	return password;
}

string Compte::getTampon() const{
	return tampon ;
}

void Compte::setStatus(int i){
	status = i ;

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
