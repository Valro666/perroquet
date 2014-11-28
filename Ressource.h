
#include <iostream>
#include <string>
#include "Constante.h"

class Ressource{
      public:
	          Ressource();
	          Ressource(std::string intitule , std::string chemin);
	          std::string getIntitule() const;
	          void setIntitule(std::string inti) const;
              std::string getChemin() const;
              void setChemin(std::string road) const;
			  
              
      protected :
              std::string intitule ;
	          std::string chemin;
             
};
#endif
