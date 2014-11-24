#include <iostream>

using namespace std;

class Compte{

	char* identifiant ;
	char* password;
	char* tampon;

	Compte();

	Compte::Compte(char* id , char* pw , int status){

		identifiant = id ;
		password = pw ;



	};


	char* getIdentifiant(){

		return identifiant;
	}

	char* getPassword(){

		return password;
	}

	char* getTampon(){

		return tampon ;

	}

	char* setTampon(char* s){

		delete  tampon;
		tampon = s;

	}

	char* setIdentifiant(char* s){

		delete  identifiant;
		identifiant = s;

	}

	char* setPassword(char* s){

		delete  password;
		password = s;

	}



};

int main()
{
	cout << "Hello world!" << endl;
	return 0;
}