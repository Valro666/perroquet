#pragma once
#include "compte.h"
class Admin :
	public Compte
{
public:
	Admin(void);
	~Admin(void);
	Admin(TCHAR id , TCHAR pw);
};

