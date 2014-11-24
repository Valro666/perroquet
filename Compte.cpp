#include "Compte.h"

Compte::Compte(std::string id , std::string pw){
	identifiant = id ;
	password = pw ;
};

std::string Compte::getIdentifiant(){
	return identifiant;
}

std::string Compte::getPassword(){
	return password;
}

std::string Compte::getTampon(){
	return tampon ;
}

void Compte::setTampon(std::string s){
	tampon = s;
}

void Compte::setIdentifiant(std::string s){
	identifiant = s;
}

void Compte::setPassword(std::string s){
	password = s;
}
