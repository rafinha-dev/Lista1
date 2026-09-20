#include <iostream> 
#include <string>
#include "declaracao.h"

using namespace std; 
int main(){
	
	Sensor sensor1;

	Sensor sensor2("Horta",'F', 65.3); 
	Sensor sensor3("Varanda",'F', 70.4); 

	cout << "Leituras iniciais;" << endl; 

	sensor1.leitura(); 
	sensor2.leitura();
	sensor3.leitura();

	cout << endl; 

	cout << "Tentando registrar valores invalidos:" << endl; 
	sensor1.setTemperatura(-300); 
	sensor2.setTemperatura(-500); 
	sensor3.setTemperatura(-400); 

	cout << endl; 

	cout << "Leituras depois das tentativas: " << endl; 
	sensor1.leitura(); 
	sensor2.leitura(); 
	sensor3.leitura(); 


	return 0; 
} 
