#include <iostream> 
#include <string> 
#include "declara.h" 

using namespace std; 

int main(){
	Placar placar("Atletico", "Cruzeiro"); 
		
	cout << "Jogo iniciado"
		<< endl;

	placar.resultado(); 

	for(int i = 0; i < 5; i++){ 
		placar.marcarTime1(); 
		placar.resultado();	
	} 

	//placar.resultado(); 
	placar.~Placar();

	placar.reiniciar();

	cout << "Segunda partida " << endl; 

	placar.marcarTime2(); 
	placar.resultado(); 
	placar.marcarTime1(); 

	placar.resultado(); 
	return 0; 
} 
