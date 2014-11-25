#include "Attente.h"
using namespace std;

Attente::Attente(string nom, string pw, int i) : Compte(nom, pw)
{
    status = i;
}

int Attente::getStatus(){
	return status;
}
	
void Attente::setStatus(int i){
	status = i;
}
