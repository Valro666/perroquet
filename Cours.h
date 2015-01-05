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
		
		Cours(Compte compte , int limite, bool acc, string inti, bool ouvert);
		
		int getLimite() const;
		Compte getEnseignant() const;
		string getIntitule() const;
		bool getAccepte() ;
		bool getOuvert();
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
		void setOuvert();
		void setIntitule(string inti);

	protected :
		Compte compte ;
		int limite;
		bool accepte;
		bool ouvert;
		string intitule;
		vector<Ressource> lRess;
		vector<Devoir> lDev;
		vector<Compte> lEtu;
};