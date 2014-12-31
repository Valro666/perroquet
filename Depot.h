#pragma once
class Depot
{
public:
	Depot(void);
	~Depot(void);
	Depot(TCHAR intitule , TCHAR chemin, bool ouvert);
	TCHAR getIntitule() const;
	void setIntitule(TCHAR inti);
    TCHAR getChemin() const;
    void setChemin(TCHAR road);
    bool getOuvert() const;
    void setOuvert();
			  
              
protected :
	TCHAR intitule ;
	TCHAR chemin;
	bool ouvert;
};

