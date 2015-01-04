#pragma once
#include <string>
using namespace std;
class Compte
{
	public:
		Compte(void);
		~Compte(void);
		Compte(string id , string pw);
		Compte(const Compte &);
		string getIdentifiant() const;
		string getPassword() const;
		string getTampon() const;
		void setTampon(string s);
		void setIdentifiant(string s);
		void setPassword(string s);
	protected :
		string identifiant ;
		string password;
		string tampon;
};

