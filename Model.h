#pragma once
#include "Compte.h"
#include "Cours.h"
#include <vector>
class Model
{
public:
	Model(void);
	~Model(void);
	bool connexion(string identifiant, string mdp);
    bool inscription(Compte c);
	Compte getSession();
             void accepterCours(int indiceCours);
             void refuserCours(int indiceCours);
             void ouvrirInscription(int indiceCours);
             void fermerInscription(int indiceCours);
//             void ajouterRessource(int indiceCours, Ressource elem);
//             void ajouterDevoir(int indiceCours, Devoir elem);
//             void ajouterDepot(int indiceCours, Depot elem);
           void proposerCours(Cours c);
             void accepterCompte(int indiceCompte);
             void refuserCompte(int indiceCompte);
//             void ouvrirDepot(int indiceDepot, int indiceCours);
//             void fermerDepot(int indiceDepot, int indiceCours);
//             void retirerElement(int indiceDepot, int indiceCours);
//             void noterDevoir(std::vector<int> listNotes, int indiceCours, int indiceDevoir);
//             void publierDevoir(int indiceCours, int indiceDevoir);
//             void setTypeAjout(int n);
//             int getTypeAjout();
//             TCHAR getDepotFile(int indiceCours, int indiceDepot);
//             void setDepotFile(int indiceCours, int indiceDepot, TCHAR chemin);
//             TCHAR getRessourceFile(int indiceCours, int indiceRessource);
//             void setRessourceFile(int indiceCours, int indiceRessource, TCHAR chemin);
//             chaine getNotesDevoir(int indiceCours, int indiceDevoir);
             void inscriptionCours(int indiceCours);
             void deinscriptionCours(int indiceCours);
            std::vector<Cours> getCoursASuivre() ;
             std::vector<Cours> getCoursSuivi() ;
//             std::vector<Depot> getListDepot(int indiceCours) ;
             std::vector<int> getListNote(int indiceCours) ;
             std::vector<Compte> geListDemandeCompte();
             std::vector<Cours> getCoursEnseigne() ;
             std::vector<Cours> geListPropositionCours() ;
			 void ajouterCours(Cours c);
			 Cours getCours (int index);
public:
	int typeAjout;
	Compte session;
	vector<Compte> listCompte;
	vector<Cours> listCours;
};

