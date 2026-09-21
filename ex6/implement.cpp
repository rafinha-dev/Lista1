#include <iostream> 
#include <string> 
#include "declar.h" 

using namespace std; 


Produto::Produto(string nome, float preco, int estoque){ 
	this-> nome=nome; 
	setPreco(preco); 
	setEstoque(estoque); 
} 

// setters
void Produto::setPreco(float preco){ 
	if(preco <= 0){ 
		cout 
		<< "Valor invalido. A mercadoria precisa de preço! "
		<< endl; 
		} 
	else { 
	this-> preco = preco; 
	} 
} 

void Produto::setEstoque(int estoque){
	if(estoque <= 0){ 
		cout
		<< "Produto sem estoque"
		<< endl; 
		} 
	else{ 
		this-> estoque = estoque; 	
	}
} 

// metodos 

void Produto::vender(int quantidade){

	if(quantidade < estoque){ 
		estoque -= quantidade; 
	} 
	else{ 
		cout
		<< "Sem estoque suficiente"
		<< endl; 
	} 
} 

void Produto::repor(int reposicao){ 

	if(reposicao > 0){ 
		estoque += reposicao; 
	}
	else{ 
		cout
		<< "Valor inválido para repor"
		<< endl; 
	}	
} 

float Produto::valorEmEstoque(){ 
	float total= preco * estoque; 
	return total;
} 
	
// fora da classe 
void maisValioso(Produto& a, Produto& b){ 
	if(a.valorEmEstoque() > b.valorEmEstoque()){ 
		cout 
		<< "O primeiro produto tem maior valor em estoque." 
		<< endl; 
	} 
	else if(a.valorEmEstoque() <  b.valorEmEstoque()){ 
		cout 
		<< "O segundo produto tem maior valor em estoque. " 
		<< endl; 
	} 
	else{ 
		cout 
		<< "Os dois produtos possuem o mesmo valor em estoque"
		<< endl; 
	} 
} 
