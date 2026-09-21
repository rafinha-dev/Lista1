#include <iostream> 
#include <string> 
#include "declar.h" 

using namespace std; 

int main(){ 
	
	Produto produto1("Arroz", 20.0, 40); 
	Produto produto2("Feijão", 10.0, 100); 

	
	produto1.vender(5); 
	produto2.vender(3); 
	produto1.vender(41); 
		
	produto1.repor(15); 
	produto2.repor(4);

	maisValioso(produto1, produto2);

	return 0; 
}  
