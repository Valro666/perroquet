#pragma once
#include <string>
using namespace std;
#include <iostream>
#include <typeinfo>
#include "constante.h"
class Compte
{
	public:
		//virtual void foo() = 0;
		Compte(void);
		~Compte(void);
		Compte(string id , string pw,int a);
		Compte(const Compte &);
		string getIdentifiant() const;
		string getPassword() const;
		string getTampon() const;
		int getType();
		int getFuture();
		//void valider();
		void setTampon(string s);
		void setIdentifiant(string s);
		void setPassword(string s);
		void setType();
	protected :
		string identifiant ;
		string password;
		string tampon;
		int type;
		int futur;
};

