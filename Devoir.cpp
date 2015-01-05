#include "StdAfx.h"
#include "Devoir.h"


Devoir::Devoir(void)
{
}


Devoir::Devoir(string inti){
	intitule =inti ;
};

string Devoir::getIntitule() const{
	return intitule; 
}

Note Devoir::getNote(int index) {	
	return lNotes[index] ;
}

int Devoir::getSizelNotes() {
	return lNotes.size();
}

void Devoir::setIntitule(string inti){
	intitule = inti;
}

void Devoir::ajouterNote(Note n){
	lNotes.push_back(n);
}


