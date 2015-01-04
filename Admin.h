#pragma once
#include "compte.h"
class Admin :
	public Compte
{
public:
	Admin(void);
	~Admin(void);
	Admin(string id , string pw);
};

