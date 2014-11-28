#ifndef DEF_ADMIN
#define DEF_ADMIN

#include <iostream>
#include <string>
#include "Compte.h"

class Attente : public Compte{
      private:
              int status ;
      public :
	          Attente();
              Attente(std::string id , std::string pw, int i);
              int getStatus();
	          void setStatus(int i);
};
#endif
