#include "Compte.h"
using namespace std;

Compte::Compte(){};

Compte::Compte(string id , string pw){
	identifiant = id ;
	password = pw ;
};

string Compte::getIdentifiant() const{
	return identifiant;
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
