#include <iostream>
#include <string>
#include "disc_declaracao.h"
using namespace std;


int main() {

    Disciplina POO;

    string nome = "Disciplina 1";
    int vagas = 30;
    Disciplina Disciplina1(nome,vagas);


    cout << "Primeira disciplina: " << POO.getNomeDisciplina() << ",         Vagas: " << POO.getVagas() << endl;
    cout << "Primeira disciplina: " << Disciplina1.getNomeDisciplina() << ",         Vagas: " << Disciplina1.getVagas() << endl;

    return 0;
}
