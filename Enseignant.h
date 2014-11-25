#ifndef DEF_ENSEIGNANT
#define DEF_ENSEIGNANT

#include <iostream>
#include <string>
#include "Compte.h"

class Enseignant:public Compte{
      public:
	          Enseignant();
	          Enseignant(std::string id , std::string pw);
};
#endif
