#include "StdAfx.h"
#include "Note.h"


Note::Note(void)
{
}


Note::~Note(void)
{
}

Note::Note(Etudiant etu, int n){
	etudiant = etu ;
	note = n;
};

int Note::getNote() const{
	return note; 
}

Etudiant Note::getEtudiant() const{
	return etudiant ;
}

void Note::setNote(int n){
	note = n;
}

void Note::setEtudiant(Etudiant etu){
	etudiant = etu;
}