#ifndef DEF_ADMIN
#define DEF_ADMIN

#include <iostream>
#include <string>
#include "Compte.h"

class Admin:public Compte{
      public:
	          Admin();
	          Admin(std::string id , std::string pw);
};
#endif
