#include <iostream> 
#include <string> 

using namespace std; 

class Placar{ 
	private: 
		string nomeTime1; 
		string nomeTime2; 
		int golsTime1; 
		int golsTime2; 
	public: 
		Placar(string nomeTime1, string nomeTime2); 

	//metodos
	int marcarTime1(); 
	int marcarTime2(); 
       	void resultado(); 
	void reiniciar(); 
	
	// destrutor 
	~Placar(); 
}; 
