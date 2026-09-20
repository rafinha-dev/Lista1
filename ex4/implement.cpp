#include <iostream> 
#include "declaracao.h"

using namespace std;

// construtores 
Retangulo::Retangulo(){ 
	largura= 1.0f;	
	altura= 1.0f; 
}

Retangulo::Retangulo(float largura, float altura){ 
	setlargura(largura); 
	setaltura(altura); 
}

// setters 
void Retangulo::setlargura(float largura){
	if(largura <= 0){
		cout 
			<< " Err: A largura não pode ser negativa" 
			<< endl; 
	}else{ 
		this-> largura = largura; 
	} 
}

void Retangulo::setaltura(float altura){
	if(largura <= 0){
		cout 
			<< "Err: A altura não pode ser negativa" 
			<< endl; 
	} else{
		this-> altura = altura; 
	} 
} 

// metodos 

float Retangulo::area() { 
	// calcula e retorn
	float area= largura * altura; 
	return area; 
} 

float Retangulo::perimetro() {
	// calcula e retorna
	float perimetro= 2 * (largura + altura); 
       return perimetro;	
} 
void Retangulo::exibir() {
       cout 
	       << "O retangulo tem Largura: " 
	       << largura
	       << " | Altura: "
	       << altura
	       << endl; 
	// todos os dados do retângulo 

} 
bool Retangulo::quadrado() { 
	// retorna true se o retangulo for um quadrado
	if(largura == altura){ 
	       return true; 	
	} else { 
		return false; 
	} 
} 
