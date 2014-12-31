#pragma once
#include "compte.h"
class Etudiant :
	public Compte
{
public:
	Etudiant(void);
	~Etudiant(void);
	Etudiant(TCHAR id , TCHAR pw);
};

