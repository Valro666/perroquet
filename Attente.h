#include "Compte.cpp"

class Attente : public Compte{
      private:
              int status ;
      public :
             int getStatus();
	         void setStatus(int i);
};
