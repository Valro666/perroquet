#include "Compte.cpp"

class Attente : public Compte{

	int status ;


	

	int getStatus(){

		return status;
	}
	
	void setStatus(int i){

		status = i;

	}

};