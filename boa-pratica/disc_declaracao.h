#include <iostream>
#include <string>
using namespace std;

// Definição da Classe
class Disciplina {
public:

    Disciplina ();
    Disciplina (string nome, int vagas);
    string getNomeDisciplina();
    string getNomeProfessor(); 
    void setNomeDisciplina(string nome);
    void setNomeProfessor(string); 
    int getVagas();
    void setVagas(int vagas); // Permite mudar o número de vagas
    void mensagem();

    private:
    string nomeDisciplina; // Membro de Dados privado
    string nomeProfessor; 
    int numVagas;

}; // Fim da Classe
