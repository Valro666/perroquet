#include "Compte.h"

class Attente : public Compte{
      private:
              int status ;
      public :
             int getStatus();
	         void setStatus(int i);
};
