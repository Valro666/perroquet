#include "StdAfx.h"
#include "Compte.h"
#include <vector>
#include "Model.h"
#include <iostream>
#include <typeinfo>
using namespace std;




Model::Model(void)
{
   // typeAjout = TYPE_RESSOURCE;
	listCompte.push_back(Compte("admin","admin",COMPTE_ADMIN));
	listCompte.push_back(Compte("etud","etud",COMPTE_ETUDIANT));
	listCompte.push_back(Compte("prof","prof",COMPTE_ENSEIGNANT));
	listCompte.push_back(Compte("att","att",COMPTE_ATTENTE));
	//session = listCompte[0];
	//cout << listCompte.size() << endl;
	//accepterCompte(0);
	//refuserCompte(0);

	for(unsigned int i = 0 ; i <listCompte.size();i++ ){
		cout << listCompte[i].getIdentifiant() << endl;
	}


}


Model::~Model(void)
{
}

Compte Model::getSession(){
			 return session;
		 }



bool Model::connexion(string identifiant, string mdp){
    int unsigned i = 0;
    bool trouv = false;
    while(i<listCompte.size() && !trouv){
        Compte c = listCompte[i];
        if(c.getIdentifiant() == identifiant && c.getPassword() == mdp){
            session = c;
            trouv = true;
        }else{
            i++;
        }
    }
    return trouv;
}

bool Model::inscription(Compte c){
	bool rep = true;
    listCompte.push_back(c);
	//TODO modifier pour mettre rep a false si l'id existe deja
	return rep;
}

void Model::accepterCours(int indiceCours){
	Model::listCours[indiceCours].setAccepte();
}
void Model::refuserCours(int indiceCours){
	listCours.erase(listCours.begin()+indiceCours);
}

void Model::ouvrirInscription(int indiceCours){
	if(Model::listCours[indiceCours].getOuvert())Model::listCours[indiceCours].setOuvert();
}

void Model::fermerInscription(int indiceCours){
	if(!Model::listCours[indiceCours].getOuvert())Model::listCours[indiceCours].setOuvert();
}
//Model::void ajouterRessource(int indiceCours, Ressource elem);
//Model::void ajouterDevoir(int indiceCours, Devoir elem);
//Model::void ajouterDepot(int indiceCours, Depot elem);

Cours Model::getCours(int index){
	return listCours[index];
}

void Model::ajouterCours(Cours c){
	listCours.push_back(c);
}

void Model::proposerCours(Cours c){
	Model::ajouterCours(c);
}

void Model::accepterCompte(int indiceCompte){
   listCompte[indiceCompte].setType();
}

void Model::refuserCompte(int indiceCompte){
	listCompte.erase(listCompte.begin()+indiceCompte);
}
//Model::void ouvrirDepot(int indiceDepot, int indiceCours);
//Model::void fermerDepot(int indiceDepot, int indiceCours);
//Model::void retirerElement(int indiceDepot, int indiceCours);
//Model::void noterDevoir(std::vector<int> listNotes, int indiceCours, int indiceDevoir);
//Model::void publierDevoir(int indiceCours, int indiceDevoir);
//Model::void setTypeAjout(int n);
//Model::int getTypeAjout();
//Model::std::TCHAR getDepotFile(int indiceCours, int indiceDepot);
//Model::void setDepotFile(int indiceCours, int indiceDepot, std::TCHAR chemin);
//Model::std::TCHAR getRessourceFile(int indiceCours, int indiceRessource);
//Model::void setRessourceFile(int indiceCours, int indiceRessource, std::TCHAR chemin);
//Model::chaine getNotesDevoir(int indiceCours, int indiceDevoir);
void Model::inscriptionCours(int indiceCours){
	Model::listCours[indiceCours].ajouterEtudiant(getSession());
}
void Model::deinscriptionCours(int indiceCours){
	Model::listCours[indiceCours].supprimerEtudiant(getSession());
}

std::vector<Cours>  Model::getCoursASuivre() {
	std::vector<Cours> lCAsuivre;
	for(unsigned int i = 0; i<listCours.size(); i++){
		if(listCours[i].Cours::getAccepte()){
			bool boolean = false;
			for(int j = 0; j<listCours[i].getSizelEtu();j++){
			
				if(Model::listCours[i].Cours::getEtudiant(j).getIdentifiant()==getSession().getIdentifiant()){
					boolean=true;
				}
			}
			if(!boolean){
				lCAsuivre.push_back(listCours[i]);
			}
		}
		
	}
	return lCAsuivre;
}

std::vector<Cours> Model::getCoursSuivi() {
	std::vector<Cours> lCSuivi;
	for(unsigned int i = 0; i<listCours.size(); i++){
		if(listCours[i].getAccepte()){
			bool boolean = false;
			for(int j = 0; j<listCours[i].getSizelEtu();j++){
			
				if(listCours[i].getEtudiant(j).getIdentifiant()==getSession().getIdentifiant()){
					boolean=true;
				}
			}
			if(boolean){
				lCSuivi.push_back(listCours[i]);
			}
		}
		
	}
	return lCSuivi;
}

//Model::std::vector<Depot> getListDepot(int indiceCours) ;
//Model::std::vector<int> getListNote(int indiceCours) 
std::vector<Compte> Model::geListDemandeCompte(){
	std::vector<Compte> lDCompte;
	for(unsigned int i = 0; i<listCompte.size(); i++){
		if(listCompte[i].getType()==COMPTE_ATTENTE){
			lDCompte.push_back(listCompte[i]);
		}	
	}
	return lDCompte;
}
std::vector<Cours> Model::getCoursEnseigne() {
	std::vector<Cours> lCEns;
	for(unsigned int i = 0; i<listCours.size(); i++){
		if(listCours[i].getAccepte()){
			bool boolean = false;
			if(listCours[i].getEnseignant().getIdentifiant()==getSession().getIdentifiant()){
				boolean=true;
			}
			if(boolean){
				lCEns.push_back(listCours[i]);
			}
		}
		
	}
	return lCEns;
}
std::vector<Cours> Model::geListPropositionCours() {
	std::vector<Cours> lPCours;
	for(unsigned int i = 0; i<listCours.size(); i++){
		if(!listCours[i].getAccepte()){
			lPCours.push_back(listCours[i]);
		}	
	}
	return lPCours;
}
