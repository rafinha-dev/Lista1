#include <iostream>
#include <string>
//#include <windows.h>
using namespace std;

// Definição da Classe
class Disciplina {
public:

    Disciplina (){
        setNomeDisciplina("Nome Provisorio");
        setVagas(0);
    }

    Disciplina (string nome, int vagas){
        this->nomeDisciplina = nome;
        this->numVagas = vagas;
    }

    string getNomeDisciplina(){
        return nomeDisciplina;
    } // Função get

    void setNomeDisciplina(string nome){
        nomeDisciplina = nome;
    } // Função set

    int getVagas(){
        return numVagas;
    } // Função get

    void setVagas(int vagas){
        this->numVagas = vagas;
    } // Função set

    void mensagem(){
        cout << "Bem vindos à disciplina de " << getNomeDisciplina() << "!" << endl;
    }

private:
    string nomeDisciplina; // Membro de Dados privado
    int numVagas;
}; // Fim da Classe

int main() {
   // SetConsoleOutputCP(CP_UTF8);

    Disciplina POO;

    string nome = "Disciplina 1";
    int vagas = 30;
    Disciplina Disciplina1(nome,vagas);


    cout << "Primeira disciplina: " << POO.getNomeDisciplina() << ",         Vagas: " << POO.getVagas() << endl;
    cout << "Primeira disciplina: " << Disciplina1.getNomeDisciplina() << ",         Vagas: " << Disciplina1.getVagas() << endl;

    return 0;
}
