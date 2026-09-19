#include <iostream>
#include <string>
#include "disc_declaracao.h"
using namespace std;


int main() {

    Disciplina POO;

    string nome = "Disciplina 1";
    string nomeCurso= "POO"; 
    string nomeProfessor= "Joao"; 
    int vagas = 30;
    Disciplina Disciplina1(nome,vagas, nomeCurso, nomeProfessor);


    cout << "Primeira disciplina: " 
	 << POO.getNomeDisciplina() 
	 << ",         Vagas: " 
	 << POO.getVagas() << endl;

    cout << "Segunda  disciplina: " 
	    << Disciplina1.getNomeDisciplina() 
	    << ",         Vagas: " 
	    << Disciplina1.getVagas() 
	    << ",   Professor: "
	    << Disciplina1.getNomeProfessor()
	    << endl;

    return 0;
}
