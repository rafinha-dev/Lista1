#include <iostream> 
#include <string> 

using namespace std; 

class Produto{
	private: 
		string nome; 
		float preco; 
		int estoque; 
	public: 
		Produto(string nome, float preco, int estoque);
		
		// setters
		void setPreco(float preco); 
		void setEstoque(int estoque); 

		
		// metodos
		void vender(int quantidade);
	       	void repor(int reposicao); 	
		float valorEmEstoque(); 
};

void maisValioso(Produto&a, Produto& b); 
