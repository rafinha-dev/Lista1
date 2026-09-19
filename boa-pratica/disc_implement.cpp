#include <iostream>
#include <string>
#include "disc_declaracao.h"
using namespace std;

Disciplina::Disciplina (){
    setNomeDisciplina("Nome Provisorio");
    setVagas(0);
}

Disciplina::Disciplina (string nome, int vagas, string nomeCurso, string nomeProfessor){  
    this->nomeDisciplina = nome;
    this->numVagas = vagas;
    this->nomeDisciplina = nomeCurso; 
    this->nomeProfessor = nomeProfessor; 
} 

string Disciplina::getNomeDisciplina(){
    return nomeDisciplina;
} // Função get
 
string Disciplina::getNomeProfessor(){
	return nomeProfessor;
} 

void Disciplina::setNomeDisciplina(string nome){
    nomeDisciplina = nome;
} // Função set

int Disciplina::getVagas(){
    return numVagas;
} // Função get

void Disciplina::setVagas(int vagas){
    this->numVagas = vagas;
} // Função set

void Disciplina::mensagem(){
    cout << "Bem vindos à disciplina de " << getNomeDisciplina() << "!" << endl;
    cout << "Esta diciplina é ministrada por: " << getNomeProfessor() << endl; 
}


