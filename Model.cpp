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

	for(int i = 0 ; i <listCompte.size();i++ ){
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
//Model::void proposerCours(Cours c);

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
//Model::std::vector<Cours> getCoursASuivre() ;
//Model::std::vector<Cours> getCoursSuivie() ;
//Model::std::vector<Depot> getListDepot(int indiceCours) ;
//Model::std::vector<int> getListNote(int indiceCours) ;
//Model::std::vector<Compte> geListDemandeCompte();
//Model::std::vector<Cours> getCoursEnseigne() ;
//Model::std::vector<Cours> geListPropositionCours() ;
