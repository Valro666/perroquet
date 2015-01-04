#include "StdAfx.h"
#include "Attente.h"


Attente::Attente(void)
{
}


Attente::~Attente(void)
{
}

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