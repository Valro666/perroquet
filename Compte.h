#include <iostream>
class Compte{
      private :
              std::string identifiant ;
	          std::string password;
              std::string tampon;
      public:
	          Compte();
	          Compte(std::string id , std::string pw , int status);  
	          std::string getIdentifiant();
              std::string getPassword();
              std::string getTampon();
              std::string setTampon(std::string s);
              std::string setIdentifiant(std::string s);
              std::string setPassword(std::string s);
};
