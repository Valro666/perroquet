#include "StdAfx.h"
#include "Note.h"


Note::Note(void)
{
}




Note::Note(Compte etu, int n){
	etudiant = etu ;
	note = n;
};

int Note::getNote() const{
	return note; 
}

Compte Note::getEtudiant() const{
	return etudiant ;
}

void Note::setNote(int n){
	note = n;
}

void Note::setEtudiant(Compte etu){
	etudiant = etu;
}