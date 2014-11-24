#include <string>
#include "Compte.h"

class Perroquet{
       private:
              int typeAjout;
              Compte session;
              std::vector<Cours> listCours;
              std::vector<Compte> listCompte;
      public:
             Perroquet();
             bool connexion(std::string identifiant);
             void inscription(std::string identifiant, std::string mdp, int status);
             void accepterCours(int indiceCours);
             void refuserCours(int indiceCours);
             void ouvrirInscription(int indiceCours);
             void fermerInscription(int indiceCours);
             void ajouterRessource(int indiceCours, Ressource elem);
             void ajouterDevoir(int indiceCours, Devoir elem);
             void ajouterDepot(int indiceCours, Depot elem);
             void proposerCours(Cours c);
             void accepterCompte(int indiceCompte);
             void refuserCompte(int indiceCompte);
             void ouvrirDepot(int indiceDepot, int indiceCours);
             void fermerDepot(int indiceDepot, int indiceCours);
             void retirerElement(int indiceDepot, int indiceCours);
             void noterDevoir(std::vector<int> listNotes, int indiceCours, int indiceDevoir);
             void publierDevoir(int indiceCours, int indiceDevoir);
             void setTypeAjout(int n);
             int getTypeAjout();
             std::string getDepotFile(int indiceCours, int indiceDepot);
             void setDepotFile(int indiceCours, int indiceDepot, std::string chemin);
             std::string getRessourceFile(int indiceCours, int indiceRessource);
             void setRessourceFile(int indiceCours, int indiceRessource, std::string chemin);
             chaine getNotesDevoir(int indiceCours, int indiceDevoir);
             void inscriptionCours(int indiceCours);
             void deinscriptionCours(int indiceCours);
             std::vector<Cours> getCoursASuivre() ;
             std::vector<Cours> getCoursSuivie() ;
             std::vector<Depot> getListDepot(int indiceCours) ;
             std::vector<int> getListNote(int indiceCours) ;
             std::vector<Compte> geListDemandeCompte();
             std::vector<Cours> getCoursEnseigne() ;
             std::vector<Cours> geListPropositionCours() ;
}
