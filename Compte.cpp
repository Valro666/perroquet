#include "Compte.h"

Compte::Compte(string id , string pw , int status){
	identifiant = id ;
	password = pw ;
};

string Compte::getIdentifiant(){
	return identifiant;
}

string Compte::getPassword(){
	return password;
}

string Compte::getTampon(){
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
