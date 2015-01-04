#include "StdAfx.h"
#include "Devoir.h"


Devoir::Devoir(void)
{
}


Devoir::~Devoir(void)
{
}

Devoir::Devoir(string inti){
	intitule =inti ;
};

string Devoir::getIntitule() const{
	return intitule; 
}

Note Devoir::getNote(int index) {
	std::list<Note>::iterator it = lNotes.begin();
	std::advance(it, index);	
	return *it ;
}

void Devoir::setIntitule(string inti){
	intitule = inti;
}

void Devoir::ajouterNote(Note n){
	lNotes.push_back(n);
}


