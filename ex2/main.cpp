#include <iostream> 
#include "declaracao.h" 

using namespace std; 

int main() { 
	// criando um objeto usando o construtor padrão
	Account contaExemplo;

	// Criando objeto com valor e exibindo
	Account conta1(100.00f);

	cout << "Saldo inicial: R$ " << conta1.getSaldo() << endl << endl; 
	
	// testando creditar saldo: 
	cout << "-- Creditando R$ 50.00 --" << endl; 
	conta1.creditar(50.00f); 
	cout << " --Novo saldo: R$ " << conta1.getSaldo() << endl << endl; 

	// testando método debitar 
	cout << " == Debitando R$ 30.00 " << endl; 
	conta1.debitar(30.00f); 
	cout << "Novo saldo: R$ " << conta1.getSaldo() << endl << endl; 

	// teste saldo insuficiente
	cout << " -- Tentando debitar R$ 500.00 ( mais que o saldo) " << endl; 
	conta1.debitar(500.00f); 
	cout << "Saldo atual após a tentativa: R$ " << conta1.getSaldo() << endl << endl; 



	//float saldoInicial= 500.25f;; 
	return 0; 
}; 
