#pragma once
#include <string>
#include <vector> 
#include "Enseignant.h"
#include "Ressource.h"
#include "Devoir.h"
using namespace std;
class Cours
{
	public:
		Cours(void);
		~Cours(void);
		Cours(Enseignant compte , int limite, bool acc, string inti);
		
		int getLimite() const;
		Enseignant getEnseignant() const;
		string getIntitule() const;
		bool getAccepte() const;
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
		void setAccepte();
		void setIntitule(string inti);

	protected :
		Enseignant compte ;
		int limite;
		bool accepte;
		string intitule;
		vector<Ressource> lRess;
		vector<Devoir> lDev;
		vector<Etudiant> lEtu;
};