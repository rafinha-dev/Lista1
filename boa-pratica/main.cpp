#include <iostream>
#include <string>
#include "disc_declaracao.h"
using namespace std;


int main() {

    Disciplina POO;

    // dados da primeira disciplina
    string nome = "Disciplina 1";
    int vagas = 30;
    string nomeCurso= "POO"; 
    string nomeProfessor= "Joao"; 
    
    //cria o primeiro objeto
    Disciplina Disciplina1(nome,vagas, nomeCurso, nomeProfessor);


    //Dados da segunda disciplina 
    string nome2= "Disciplina 2"; 
    int vagas2= 25; 
    string nomeCurso2 = "Mysql"; 
    string nomeProfessor2 = "Fantini"; 

    // cria o segundo objeto
    Disciplina Disciplina2(nome2, vagas2, nomeCurso2, nomeProfessor2); 


     cout << "Primeira disciplina: " 
	 << Disciplina1.getNomeDisciplina() 
	 << ",         Vagas: " 
	 << Disciplina1.getVagas() 
	 << ",   Professor: "
	 << Disciplina1.getNomeProfessor()
	 << endl;

   cout << "Segunda  disciplina: " 
	    << Disciplina2.getNomeDisciplina() 
	    << ",         Vagas: " 
	    << Disciplina2.getVagas() 
	    << ",   Professor: "
	    << Disciplina2.getNomeProfessor()
	    << endl;


    Disciplina1.mensagem(); 
    Disciplina2.mensagem(); 
    return 0;
}
