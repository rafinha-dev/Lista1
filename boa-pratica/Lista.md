# 1. Modifique a classe Disciplina desenvolvida em sala na Aula 4 como descrito a seguir.


## (a) Inclua um segundo membro de dados do tipo string representando o nome do professor.

Um segundo membro de dados não é uma nova classe, é um  membro da classe Disciplina. 
O uso dele em private é pelo encapsulamento. E esse uso no private exige que se use os métodos internos get e set para poder alterar seus dados pois não podem ser acessados diretamente. 

## (b) Forneça setNomeProfessor e getNomeProfessor.

Ainda construindo um membro de dados no public será inserido o get e o set.
Será preciso pensar em 3 partes: 
    1. Criar o atributo 
    2. declarar get/set no .h
    3. Implementar o get/set no .cpp 


## (c) Modifique o construtor para receber dois parametros, o nome do curso e o nome do professor.
Modificado o construtor no .h 
Disciplina (string nome, int vagas, string nomeCurso, string nomeProfessor);

Uma vez que o construtor tem quatro parâmetros esses dados também precisam ser modificados na implementação e os atributos declarados na classe. 
Oo valores informados  na classe ficam que no main. 
A implementação em implementação.cpp. 
E no .h a declaração do construtor de 4 argumentos. 

As informações que serão exibidas precisam ser modificadas caso não houver chamada na main.O getter/setter declarados no .h e implementados no cpp e só então usados na main.
