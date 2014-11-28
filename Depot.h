#ifndef DEF_DEPOT
#define DEF_DEPOT

#include <iostream>
#include <string>
#include "Constante.h"

class Depot{
      public:
	          Depot();
	          Depot(std::string intitule , std::string chemin, std::bool ouvert);
	          std::string getIntitule() const;
	          void setIntitule(std::string inti) const;
              std::string getChemin() const;
              void setChemin(std::string road) const;
              std::bool getOuvert() const;
              void setOuvert() const;
			  
              
      protected :
              std::string intitule ;
	          std::string chemin;
              std::bool chemin;
};
#endif
