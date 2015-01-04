#pragma once
#include <string>
#include"Etudiant.h"
using namespace std;
class Note
{
	public:
		Note(void);
		~Note(void);
		Note(Etudiant etu, int n );
		Etudiant getEtudiant() const;
		int getNote() const;
		void setEtudiant(Etudiant etu);
		void setNote(int n);
	protected :
		Etudiant etudiant ;
		int note;
};