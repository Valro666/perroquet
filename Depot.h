#ifndef DEF_DEPOT
#define DEF_DEPOT

#include <iostream>
#include <string>
#include "Constante.h"

class Depot{
      public:
	          Depot();
	          Depot(std::string intitule , std::string chemin, bool ouvert);
	          std::string getIntitule() const;
	          void setIntitule(std::string inti);
              std::string getChemin() const;
              void setChemin(std::string road);
              bool getOuvert() const;
              void setOuvert();
			  
              
      protected :
              std::string intitule ;
	          std::string chemin;
              bool ouvert;
};
#endif
