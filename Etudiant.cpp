#include "StdAfx.h"
#include "Etudiant.h"


Etudiant::Etudiant(void)
{
}


Etudiant::~Etudiant(void)
{
}

Etudiant::Etudiant(TCHAR nom, TCHAR pw) : Compte(nom, pw)
{
}