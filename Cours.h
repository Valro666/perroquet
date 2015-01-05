#pragma once
#include <string>
#include <vector> 
#include "Compte.h"
#include "Ressource.h"
#include "Devoir.h"
using namespace std;
class Cours
{
	public:
		Cours(void);
		
		Cours(Compte compte , int limite, bool acc, string inti);
		
		int getLimite() const;
		Compte getEnseignant() const;
		string getIntitule() const;
		bool getAccepte() ;
		Ressource getRessource (int index);
		Devoir getDevoir (int index);
		Compte getEtudiant (int index);
		int getSizelRess();
		int getSizelDev();
		int getSizelEtu();

		void setLimite(int lim);
		void setEnseignant(Compte ens);
		void ajouterRessource(Ressource ress);
		void ajouterDevoir(Devoir dev);
		void ajouterEtudiant(Compte etu);
		void setAccepte();
		void setIntitule(string inti);

	protected :
		Compte compte ;
		int limite;
		bool accepte;
		string intitule;
		vector<Ressource> lRess;
		vector<Devoir> lDev;
		vector<Compte> lEtu;
};