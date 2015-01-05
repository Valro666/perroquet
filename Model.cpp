#include "StdAfx.h"
#include "Compte.h"
#include "Admin.h"
#include "Etudiant.h"
#include "Attente.h"
#include "Enseignant.h"
#include <vector>
#include "Model.h"
#include <iostream>
using namespace std;




Model::Model(void)
{
    typeAjout = TYPE_RESSOURCE;
	listCompte.push_back(Admin("admin","admin"));
	listCompte.push_back(Etudiant("etud","etud"));
	listCompte.push_back(Enseignant("prof","prof"));
	listCompte.push_back(Attente("att","att",1));
	session = listCompte[0];
	cout << listCompte.size() << endl;
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

bool Model::inscription(string identifiant, string mdp, int status){
	bool rep = true;
    switch(status){
        case COMPTE_ADMIN :{
            Admin compte(identifiant,mdp);
            listCompte.insert(listCompte.end(), (Compte)compte);
            break;
        }case COMPTE_ENSEIGNANT :{
            Enseignant compte(identifiant,mdp);
            listCompte.insert(listCompte.end(), (Compte)compte);
            break;
        }case COMPTE_ETUDIANT :{
            Etudiant compte(identifiant,mdp);
            listCompte.insert(listCompte.end(), (Compte)compte);
            break;
        }
    }
	//TODO modifier pour mettre rep a false si l'id existe deja
	return rep;
}

//Model::void accepterCours(int indiceCours);
//Model::void refuserCours(int indiceCours);
//Model::void ouvrirInscription(int indiceCours);
//Model::void fermerInscription(int indiceCours);
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
   // if(typeinfo(listCompte[indiceCompte])== typeid(Attente)){
		cout << "yep" << endl;
		/*((Attente)(listCompte[indiceCompte])).getStatus();
         Attente a;// = dynamic_cast<Attente&>(listCompte[indiceCompte]);
		 cout << "status : "<< a.getStatus() << endl;
         switch(a.getStatus()){
		 case 1 : cout << "youpi" << endl; break;
         }*/
   // }
   // else{ //le compte donner n'est pas en attente
   // }
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
//Model::void inscriptionCours(int indiceCours);
//Model::void deinscriptionCours(int indiceCours);

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
//Model::std::vector<int> getListNote(int indiceCours) ;
//Model::std::vector<Compte> geListDemandeCompte();
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
