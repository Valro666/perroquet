#pragma once
#include <string>
#include <vector> 
#include"Note.h"
using namespace std;
class Devoir
{
	public:
		Devoir(void);
		~Devoir(void);
		Devoir(string inti );
		

		string getIntitule() const;
		Note getNote(int index) ;
		int getSizelNotes();
		void setIntitule(string inti);
		void ajouterNote(Note n);
	protected :
		string intitule ;
		vector<Note> lNotes;
};
