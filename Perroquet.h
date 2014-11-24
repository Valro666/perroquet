#include <string>

using namespace std;

class Perroquet{
       private:
              int typeAjout;
              Compte session;
              vector<Cours> listCours;
              vector<Compte> listCompte;
      public:
             bool connexion(string identifiant);
             void inscription(string identifiant, string mdp, int status);
             void accepterCours(int indiceCours);
             void refuserCours(int indiceCours);
             void ouvrirInscription(int indiceCours);
             void fermerInscription(int indiceCours);
             void ajouterRessource(int indiceCours, Ressource elem);
             void ajouterDevoir(int indiceCours, Devoir elem);
             void ajouterDepot(int indiceCours, Depot elem);
}
