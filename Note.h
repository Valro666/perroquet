#pragma once
#include <string>
#include"Compte.h"
using namespace std;
class Note
{
	public:
		Note(void);
		
		Note(Compte etu, int n );
		Compte getEtudiant() const;
		int getNote() const;
		void setEtudiant(Compte etu);
		void setNote(int n);
	protected :
		Compte etudiant ;
		int note;
};