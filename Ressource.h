#pragma once
#include <string>
using namespace std;
class Ressource
{
public:
	Ressource(void);
	~Ressource(void);
	Ressource(string inti , string road);
	string getIntitule() const;
	void setIntitule(string inti);
	string getChemin() const;
	void setChemin(string road);
			  
              
protected :
	string intitule ;
	string chemin;
};

