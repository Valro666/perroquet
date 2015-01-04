#pragma once
#include "compte.h"
class Enseignant :
	public Compte
{
	public:
		Enseignant(void);
		~Enseignant(void);
		Enseignant(string id , string pw);
};

