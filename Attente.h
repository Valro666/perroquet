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
		Attente(TCHAR id , TCHAR pw, int i);
		int getStatus();
		void setStatus(int i);
};

