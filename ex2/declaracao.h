#ifndef DECLARACAO_H
#define DECLARACAO_H

#include <iostream> 
#include <string> 

using namespace std; 

// Definição
class Account { 
	public: 
		// construtores (inicializa)
		Account(); 
		Account(float saldoInicial);

		// métodos (funções da classe)
		void debitar(float valor); 
		void creditar(float valor); 

		// getters e setters 
		float getSaldo(); 
	private: 
		// Atributos ( variaveis começam com letras minúsculas )
		float saldo;

};

#endif
