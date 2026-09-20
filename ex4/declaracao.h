#include <iostream> 

using namespace std; 

class Retangulo {
	private: 
		float largura;
		float altura;
	
	public: 
		Retangulo();
		Retangulo(float largura, float altura); 
		void setlargura(float largura); 
		void setaltura(float altura);
		// rejeitar valores negativos ou zero

		float area(); 
		float perimetro(); 	
		void exibir(); 
		bool quadrado(); 
}; 
