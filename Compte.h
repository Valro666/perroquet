#include <iostream>
#include "Constante.h"

class Compte{
      private :
              std::string identifiant ;
	          std::string password;
              std::string tampon;
      public:
	          Compte();
	          Compte(std::string id , std::string pw);
	          std::string getIdentifiant();
              std::string getPassword();
              std::string getTampon();
              void setTampon(std::string s);
              void setIdentifiant(std::string s);
              void setPassword(std::string s);
};
