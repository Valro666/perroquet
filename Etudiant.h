#pragma once
#include "compte.h"
class Etudiant :
	public Compte
{
public:
	Etudiant(void);
	~Etudiant(void);
	Etudiant(string id , string pw);
};

