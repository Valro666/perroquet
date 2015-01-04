#pragma once
#include <string>
#include <list> 
#include "Enseignant.h"
#include "Ressource.h"
#include "Devoir.h"
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
		Devoir getDevoir (int index);
		Etudiant getEtudiant (int index);
		int getSizelRess();
		int getSizelDev();
		int getSizelEtu();

		void setLimite(int lim);
		void setEnseignant(Enseignant ens);
		void ajouterRessource(Ressource ress);
		void ajouterDevoir(Devoir dev);
		void ajouterEtudiant(Etudiant etu);

	protected :
		Enseignant compte ;
		int limite;
		list<Ressource> lRess;
		list<Devoir> lDev;
		list<Etudiant> lEtu;
};