#ifndef DEF_COMPTE
#define DEF_COMPTE

#include <iostream>
#include <string>

class Compte{
      public:
	          Compte();
	          Compte(std::string id , std::string pw);
	          std::string getIdentifiant() const;
              std::string getPassword() const;
              std::string getTampon() const;
              void setTampon(std::string s);
              void setIdentifiant(std::string s);
              void setPassword(std::string s);
      protected :
              std::string identifiant ;
	          std::string password;
              std::string tampon;
};
#endif
