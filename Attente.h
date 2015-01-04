#pragma once
#include "compte.h"
class Attente :
	public Compte
{
    private:
        int status ;
	public :
		Attente(void);
		~Attente(void);
		Attente(string id , string pw, int i);
		int getStatus();
		void setStatus(int i);
};

