#include "StdAfx.h"
#include "Enseignant.h"


Enseignant::Enseignant(void)
{
}


Enseignant::~Enseignant(void)
{
}

Enseignant::Enseignant(string nom, string pw) : Compte(nom, pw)
{
}
