#include <iostream> 
#include "declaracao.h"

using namespace std; 

// construtor padrão
Account::Account(){
	this->saldo = 0.00f; 
} 
// construtor com validacao
Account::Account( float saldoInicial){
	if(saldoInicial >= 0.00f){ 
		this-> saldo= saldoInicial; 
	}else{ 
		cout << "Erro: o saldo inicial não pode ser negativo." << endl; 
	this->saldo = 0.00f;
}
}

// getter
float Account::getSaldo(){
	return this-> saldo;
} 

// metodos
void Account::creditar(float valor){
	if(valor > 0.00f) { 
		this-> saldo += valor;
	}else{ 
		cout << "Erro: o valor para deposito deve ser maior que zero" << endl; 	
} 
} 

void Account::debitar(float valor){ 
	if(valor <= this-> saldo) { 
		this-> saldo -= valor;
	} else{ 
		cout << "Erro: Saldo insuficiente para debitar R$" << valor << endl;
	}
}
