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

## (d) Modifique o m ́etodo mensagem para que ele primeiro imprima a mensagem de boas-vindas

com o nome do curso e depois imprima Esta disciplina é ministrada por:  seguido do
nome do professor.
Demonstre a classe em um programa que cria dois objetos com nomes diferentes e chama
mensagem nos dois.

Depois de modificado o arquivo de implementação do método de mensagem, criei no main outro objeto e modifiquei a forma de exibir os valores já guardados dentro do main. 

# 2. 

Crie uma classe Account que um banco poderia usar para representar contas bancarias.
Ela deve ter um atributo privado saldo do tipo float. Forneca um construtor que recebe o
saldo inicial e o valida, configurando o saldo como zero e exibindo uma mensagem de erro se
o valor for negativo. Forneca tres metodos: creditar float valor que adiciona ao saldo,
debitarfloat valor que subtrai do saldo apenas se o valor nao exceder o saldo atual,
imprimindo uma mensagem de erro caso contrario, e getSaldo que retorna o saldo. Crie um
programa com dois objetos Account e demonstre os tres metodos, incluindo tentativas invalidas.

# 3


Crie uma classe Sensor com os atributos privados nome (string), temperatura (float) e
unidade (char, valendo ’C’ para Celsius ou ’F’ para Fahrenheit). Forneça dois construtores,
um sem parametros que inicializa nome como “Sensor”, temperatura como 0 e unidade como ’C’, e um com os tres parametros. O setter de temperatura deve rejeitar valores abaixo de −273,15 quando a unidade for Celsius, e abaixo de −459,67 quando for Fahrenheit, que são os zeros absolutos em cada escala. Forneça um metodo leitura() que imprime o nome do sensor seguido da temperatura e da unidade, por exemplo “Sensor1: 36.5 C”. No main, crie ao menos
tres sensores, tente registrar valores invalidos e chame leitura() em todos.

- Os atributos privados criados. 
- Um construtor foi declarado vazio e o outro com 3 parâmetros. 
- A pagina de implementação dos construtores foi feito 1 como solicitado vazio e inicializado, ja o outro foi preciso colocar os parâmetros para identificar o construtor que era. 
    Aqui temos uma sovrecarga de construtores, mesmoo nome mas assinaturas diferentes. 
- implementado limite de temperatura de zero absoluto. 


# 4 

Crie uma classe Retangulo com atributos privados largura e altura, ambos do tipo float. Os dois setters devem rejeitar valores negativos ou zero. Forneçaa dois construtores, um sem parâmetros que inicializa ambos como 1.0, e um com os dois parâmetros. Adicione os métodos area() e perimetro(), que calculam e retornam os respectivos valores, e um método exibir() que imprime todos os dados do retângulo. Por fim, adicione um método quadrado()que retorna true se o retângulo for um quadrado.
No main, crie um array de três retângulos com dimensões diferentes. Percorra o array imprimindo os dados de cada um, e ao final imprima qual deles tem a maior  área.  O array deve conter ao menos um quadrado.


# 5


Crie uma classe Placar para um jogo entre dois times. Os atributos privados devem ser nomeTime1, nomeTime2 (string) e golsTime1, golsTime2 (int). O construtor recebe os nomes dos dois times e inicializa os gols como zero. Forneçaa metodos marcarTime1() e marcarTime2() que incrementam os gols do respectivo time, e um método resultado() que imprime o placar atual no formato “Atletico 2 x 1 Cruzeiro”, seguido de quem esta vencendo ou se é empate. Adicione um metodo reiniciar() que zera os gols sem alterar os nomes, e um destrutor que imprime “Partida encerrada: ” seguido do resultado final.
No main, simule uma partida com pelo menos cinco gols, chame resultado() ap ́os cada gol e reiniciar() para uma segunda partida.

- criado classe placar com dois times com placar inicial 0 
- metodos marcar implementados
- implementado placar
- implementado resultado 
- implementado reiniciar 

# 6 

Crie uma classe Produto com os atributos privados nome (string), preco (float) e estoque (int). O construtor recebe os três valores e valida que o preço seja positivoe o estoque seja maior ou igual a zero. Forneça setters com validação para preço e estoque. Adicione três métodosde operação: vender(int quantidade) que reduz o estoque se houver unidades suficientes,imprimindo uma mensagem de erro caso contrário, repor(int quantidade) que aumenta o estoque apenas para valores positivos, e valorEmEstoque() que retorna o preçoo multiplicado pelo estoque atual.
Crie uma função void maisValioso(Produto& a, Produto& b) que recebe dois produtos por referência e imprime qual deles tem o maior valor em estoque. No main, crie dois produtos, faça operaçõoes de venda e reposiçãao e chame maisValioso.

-- não da para criar no main um atributo privado de classe diretamente para colocar o nome o preço na tela.
- a função maisValioso() é um caso em que ela não é um método de classe mas fica fora dela, precisa estar declarada na folha de classe e em concordância com a folha de implementação. Ela usa um atributo de referência de objeto e por referenciar o objeto não precisa ser exclusiva da classe. 
