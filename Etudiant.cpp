#include "StdAfx.h"
#include "Etudiant.h"


Etudiant::Etudiant(void)
{
}


Etudiant::~Etudiant(void)
{
}

Etudiant::Etudiant(string nom, string pw) : Compte(nom, pw)
{
}