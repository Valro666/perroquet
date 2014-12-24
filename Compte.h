#pragma once
class Compte
{
	public:
		Compte(void);
		~Compte(void);
		Compte(TCHAR id , TCHAR pw);
		TCHAR getIdentifiant() const;
		TCHAR getPassword() const;
		TCHAR getTampon() const;
		void setTampon(TCHAR s);
		void setIdentifiant(TCHAR s);
		void setPassword(TCHAR s);
	protected :
		TCHAR identifiant ;
		TCHAR password;
		TCHAR tampon;
};

