#include "StdAfx.h"
#include "Enseignant.h"


Enseignant::Enseignant(void)
{
}


Enseignant::~Enseignant(void)
{
}

Enseignant::Enseignant(TCHAR nom, TCHAR pw) : Compte(nom, pw)
{
}
