#ifndef DEF_ETUDIANT
#define DEF_ETUDIANT

#include <iostream>
#include <string>
#include "Compte.h"

class Etudiant:public Compte{
      public:
	          Etudiant();
	          Etudiant(std::string id , std::string pw);
};
#endif
