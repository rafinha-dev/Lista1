#include <iostream> 
#include <string> 
#include "declaracao.h"

using namespace std; 

// construtor vazio
Sensor::Sensor() { 
	nome= "sensor";
	temperatura= 0; 
	unidade= 'C'; 
} 

// construtor com parâmetos. 
Sensor::Sensor(string nome, char unidade, float temperatura){
       this->nome = nome; 
       setUnidade(unidade); 
       setTemperatura(temperatura); 
} 

//setters 
void Sensor::setUnidade(char unidade){

	//unidade
	if(unidade=='C' || unidade == 'F'){

			this-> unidade= unidade; 
	}else{
			this-> unidade= 'C';
		} 
} 

void Sensor::setTemperatura( float temperatura){

	// temperatura
	if(unidade == 'C'){
		if (temperatura < -273.15){ 
			cout << "Temperatura invalida em Celcius." << endl; 
		this-> temperatura = 0;
		return; 	
		} 
} 	else if( unidade =='F'){
       	
	if(temperatura < -459.67){ 
		cout << "Temperatura invalida em fahrenheit." << endl; 
		this -> temperatura =0; 
		return; 
		}
	}
	this-> temperatura = temperatura;
} 

// leitura() 
void Sensor::leitura() { 
	cout << "Sensor: " << nome << " | Temperatura: " << temperatura << " " << unidade << endl; 
} 
