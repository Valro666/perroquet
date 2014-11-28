#ifndef DEF_RESSOURCE
#define DEF_RESSOURCE

#include <iostream>
#include <string>
#include "Constante.h"

class Ressource{
      public:
	          Ressource();
	          Ressource(std::string inti , std::string road);
	          std::string getIntitule() const;
	          void setIntitule(std::string inti);
              std::string getChemin() const;
              void setChemin(std::string road);
			  
              
      protected :
              std::string intitule ;
	          std::string chemin;
             
};
#endif
