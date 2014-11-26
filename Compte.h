#ifndef DEF_COMPTE
#define DEF_COMPTE

#include <iostream>
#include <string>
#include "Constante.h"

class Compte{
      public:
	          Compte();
	          Compte(std::string id , std::string pw,int type);
	          std::string getIdentifiant() const;
              std::string getPassword() const;
              std::string getTampon() const;
			  int getStatus() const;
			  void setStatus(int i);
              void setTampon(std::string s);
              void setIdentifiant(std::string s);
              void setPassword(std::string s);
      protected :
              std::string identifiant ;
	          std::string password;
              std::string tampon;
			  int status;
};
#endif
