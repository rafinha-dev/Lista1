#include <iostream> 
#include <string> 
#include "declara.h" 

using namespace std;

Placar::Placar(string nomeTime1,  string nomeTime2){
	golsTime1= 0; 
	golsTime2=0; 
	this-> nomeTime1= nomeTime1; 
	this-> nomeTime2= nomeTime2; 
	
} 

int Placar::marcarTime1(){ 
	golsTime1 += 1; 
	return golsTime1;
} 
int Placar::marcarTime2(){ 
	golsTime2 += 1; 
	return golsTime2;
} 	
void Placar::resultado(){ 
		cout
		<< nomeTime1
	       << " " 	
		<< golsTime1
		<< " X "
		<< golsTime2
		<< " " 
		<< nomeTime2
		<< endl;

	if(golsTime1 > golsTime2){
		cout
		<< nomeTime1
		<< " está vencendo! "
		<< endl; 
	} else if(golsTime1 < golsTime2){ 
		cout
		<< nomeTime2
		<< " está vencendo! "
		<< endl; 
	} else{ 
		cout
		<< "Empate! "
		<< endl; 
	}	
} 
void Placar::reiniciar(){ 
	golsTime1= 0;
	golsTime2= 0;
} 

Placar::~Placar() {
	cout 
	<< " ==Partida encerrada== "
	<< endl; 

	if(golsTime1 > golsTime2){
		cout
		<< nomeTime1
		<< " Venceu!  "
		<< endl; 
	} else if(golsTime1 < golsTime2){ 
		cout
		<< nomeTime2
		<< " Venceu!! "
		<< endl; 
	} else{ 
		cout
		<< "Empate! "
		<< endl; 
	}  
} 
	
