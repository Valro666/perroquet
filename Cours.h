#pragma once
#include <string>
#include <list> 
#include "Enseignant.h"
#include "Ressource.h"
using namespace std;
class Cours
{
	public:
		Cours(void);
		~Cours(void);
		Cours(Enseignant compte , int limite);
		
		int getLimite() const;
		Enseignant getEnseignant() const;
		Ressource getRessource (int index);

		void setLimite(int lim);
		void setEnseignant(Enseignant ens);
		void ajouterRessource(Ressource ress);
	protected :
		Enseignant compte ;
		int limite;
		list<Ressource> lRess;
};