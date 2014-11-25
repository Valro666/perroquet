#include "Perroquet.h"

using namespace std;

Perroquet::Perroquet(){
    typeAjout = TYPE_RESSOURCE;
}

bool Perroquet::connexion(string identifiant, string mdp){
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

bool Perroquet::inscription(string identifiant, string mdp, int status){
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
}

//Perroquet::void accepterCours(int indiceCours);
//Perroquet::void refuserCours(int indiceCours);
//Perroquet::void ouvrirInscription(int indiceCours);
//Perroquet::void fermerInscription(int indiceCours);
//Perroquet::void ajouterRessource(int indiceCours, Ressource elem);
//Perroquet::void ajouterDevoir(int indiceCours, Devoir elem);
//Perroquet::void ajouterDepot(int indiceCours, Depot elem);
//Perroquet::void proposerCours(Cours c);
//Perroquet::void accepterCompte(int indiceCompte);
//Perroquet::void refuserCompte(int indiceCompte);
//Perroquet::void ouvrirDepot(int indiceDepot, int indiceCours);
//Perroquet::void fermerDepot(int indiceDepot, int indiceCours);
//Perroquet::void retirerElement(int indiceDepot, int indiceCours);
//Perroquet::void noterDevoir(std::vector<int> listNotes, int indiceCours, int indiceDevoir);
//Perroquet::void publierDevoir(int indiceCours, int indiceDevoir);
//Perroquet::void setTypeAjout(int n);
//Perroquet::int getTypeAjout();
//Perroquet::std::string getDepotFile(int indiceCours, int indiceDepot);
//Perroquet::void setDepotFile(int indiceCours, int indiceDepot, std::string chemin);
//Perroquet::std::string getRessourceFile(int indiceCours, int indiceRessource);
//Perroquet::void setRessourceFile(int indiceCours, int indiceRessource, std::string chemin);
//Perroquet::chaine getNotesDevoir(int indiceCours, int indiceDevoir);
//Perroquet::void inscriptionCours(int indiceCours);
//Perroquet::void deinscriptionCours(int indiceCours);
//Perroquet::std::vector<Cours> getCoursASuivre() ;
//Perroquet::std::vector<Cours> getCoursSuivie() ;
//Perroquet::std::vector<Depot> getListDepot(int indiceCours) ;
//Perroquet::std::vector<int> getListNote(int indiceCours) ;
//Perroquet::std::vector<Compte> geListDemandeCompte();
//Perroquet::std::vector<Cours> getCoursEnseigne() ;
//Perroquet::std::vector<Cours> geListPropositionCours() ;
