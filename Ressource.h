#pragma once
class Ressource
{
public:
	Ressource(void);
	~Ressource(void);
	Ressource(TCHAR inti , TCHAR road);
	TCHAR getIntitule() const;
	void setIntitule(TCHAR inti);
	TCHAR getChemin() const;
	void setChemin(TCHAR road);
			  
              
protected :
	TCHAR intitule ;
	TCHAR chemin;
};

