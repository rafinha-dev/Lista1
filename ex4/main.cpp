#include <iostream> 
#include "declaracao.h"

using namespace std; 

int main(){ 
	
	Retangulo retangulo[3] = {
		Retangulo(10, 5), 
		Retangulo(20, 8), 
		Retangulo(12,12)
	}; 
    		
	float maior= 0; 
	maior = retangulo[0].area();	

	int quadrados[3]; 
	int quantidade = 0; 


	for (int i = 0; i < 3; i++){ 
		retangulo[i].exibir();
		float area= retangulo[i].area(); 


		if(area > maior){ 
			maior = area;
		} 
		if(retangulo[i].quadrado()){
			quadrados[quantidade] = i; 
			quantidade ++; 
		} 

		
	} 
	cout 
		<< "== Verificação de maior area == \n"
		<< "O maior retangulo tem a area de "
		<< maior
		<< " ! "
		<< endl;
       	
	cout 
		<< "== Checando quadrados =="
		<< endl; 

	if( quantidade > 0){ 
		 cout 
			<< quantidade
		        << " é a quantidade de quadrados entre os retângulos" 
			<< endl; 	
		} else{ 
			cout
				<< "Não existem quadrados."	
			       << endl; 	
	} 
	
	return 0; 
} 
