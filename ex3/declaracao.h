#ifndef DECLARACAO_H
#define DECLARACAO_H
#include <iostream> 
#include <string> 

using namespace std; 

class Sensor{ 
	public: 
		Sensor(); 
		Sensor(string nome, char unidade, float temperatura);
	       void setTemperatura(float temperatura); 
       		void setUnidade(char unidade); 	

		void leitura(); 	
	private: 
		string nome;
		float temperatura; 
		char unidade; 
}; 

#endif
