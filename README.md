# Algoritimos-e-Estrutura-de-dados-1
Codigos feito por Odilon Ramos da Silva Neto durante o curso de Engenharia de Computação, na Universidade Tecnológica Federal do Paraná(UTFPR). 

Materia: Algoritmos e Estruturas de Dados 1, ministrada por Jefferson Tales Oliva.

# Struct - eletrodomésticos
Implemente um programa que faça o controle do consumo de energia dos eletrodomésticos de um imóvel. Primeiro leia os N eletrodomésticos que contendo nome, potência (inteiro, em kW) e tempo ativo por dia (real, em horas). Em seguida, leia um número inteiro d (quantidade de dias) e calcule:

O consumo total no imovel

O consumo total de cada eletrodoméstico

O consumo relativo de cada eletrodoméstico ((consumo/consumo total) * 100) nesse período de tempo.

**Input Format:**

Na primeira linha deve ser lido o número de eletrodoméstico.

Para cada uma das N linhas seguintes, leia as seguintes informações para cada eletrodoméstico: nome (string), potencia (inteiro) e tempo (real).

Por fim, leia um número inteiro que represente a quantidade de dias.

**Constraints:**

Não utize a função gets para ler as strings. Em vez disso, use scanf (nos casos de teste não há o caractere espaço em branco)

**Output Format:**

A primeira linha deve exibir o consumo total no imóvel seguido de N linhas com o consumo relativo de cada eletrodoméstico.

# Struct - números racionais
Crie uma struct para representar um número racional, ou seja, nessa estrutura deve haver os seguintes campos: numerador e denominador.

Em seguida, crie uma função que receba dois números racionais. A função deverá retornar um outro número racional resultante da divisão dos números fornecidos como entrada.

**Input Format:**

A primeira linha é composta pelo numerador e denominador, respectivamente, do primeiro número racional.

A segunda linha é composta pelo numerador e denominador, respectivamente, do segundo número racional.

**Constraints:**

As entradas lidas devem ser armazenadas em varíaveis do tipo de estrutura que você criou.

**Output Format:**

Número racional resultante da divisão dos números fornecidos como entrada.

# Structs - Média Alunos
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.

(a) Permita ao usuário entrar com os dados de n alunos. (b) Encontre o aluno com maior nota da primeira prova. (c) Encontre o aluno com maior média geral. (d) Encontre o aluno com menor média geral (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando a média 6 para aprovação.

Utilize a estrutura e os protótipos de funções abaixo:

    #include <stdio.h>
    #include <math.h>
    
    struct aluno_t{
        int cod;
        char nome[255];
        float notas[3];
        float media;
    };
    
    void calculaMedia(aluno_t aluno[], int n){
    
    }
    
    int encontraMaiorMedia(aluno_t aluno[], int n){
    
    }
    
    int encontraMenorMedia(aluno_t aluno[], int n){
    
    }
    
    int encontraMaiorP1(aluno_t aluno[], int n){
    
    }
    
    int main(){
    
    return 0;
    }
**Input Format:**

A primeira linha é composta por um número n de alunos. Seguem a matricula (númerico até 65000), nome (string max 255 caracteres) e 3 notas (float com 1 casa de precisão)

**Output Format:**

A saída devera informar, para cada aluno se ele foi aprovado ou reprovado. Seguido das soluções para as questões (b), (c) e (d)
# Struct - batalha em turnos
Gladstone está desenvolvendo um jogo simples de RPG em que há batalhas, os quais são por turnos, onde, em cada luta, os jogadores se revezam em cada ataque. Cada personagem, além do nome (string), tem os seguintes atributos representados por números inteiros: energia, defesa e força. Em cada ataque, a energia do personagem que está sofrendo o golpe é reduzida. O dano (redução de energia) é dado pela subtração entre o atributo de força (F) do atacante e o atributo de defesa do personagem atacado, o qual pode ter redução de energia. Caso a diferença entre força (atacante) e defesa (atacado) seja menor igual a zero, o dano será de 1 ponto. Se o dano resultar em energia negativa, o valor da mesma para o personagem derrotado deverá ser "0". Em cada batalha, o perdedor será o personagem que tiver a energia zerada ou que tiver o menor valor de energia. Também, poderá ocorrer empate. É importante ressaltar que o personagem com energia zerada não pode mais atacar!

Implemente uma função que receba duas variáveis referentes aos personagens e um número inteiro que represente a quantidade de turnos, onde o primeiro personagem fornecido como parâmetro começa o ataque. Ao final, a função deverá imprimir o resultado, indicando o nome personagem vencedor ou se houve empate.

**Input Format:**

Nas duas primeiras linhas, devem ler lidos os dados dos personagens. "nome (vetor de char) energia (int) defesa (int), força (int)".

Na linha seguinte, deve ser lida a quantidade de rodadas que deverá ter a batalha.

**Output Format:**

Na primeira e segunda linha, imprimir o nome e a energia restante do primeiro e do segundo personagem, após a execução das rodadas de ataques.

Na terceira lunha, imprimir o nome do personagem vencedor ou "empate", caso os personagens tiverem a mesma quantidade de energia (neste exercício não levando em conta que os personagens possam iniciar uma batalha com diferentes valores de energia).

# Ponteiros - parte inteira e parte fracionária
Implemente uma função que receba três variáveis: duas do tipo float e uma do tipo int. A função deverá retornar a parte inteira (int) e a fracionária (float) de um número do real. Para isso utilize o seguinte protótipo:

    void frac(float n, int * in, float * fr)
**Input Format:**

A primeira linha da entrada contém um único inteiro N, indicando o número de casos de teste.

**Constraints:**

Os floats devem ser impressos considerando 3 casas decimais, ou seja, usando ".3f"

**Output Format:**

Para cada caso de teste de entrada deverá ser apresentada uma linha de saída, no seguinte formato: N=n I=in F=fr

# Ponteiros - operações matemáticas valores
Implemente uma função que receba três ponteiros de int (a, b, c). Na função, o endereço apontado c deve conter a diferença entre a e b (módulo da subtração entre a e b, ou seja, |a - b|). Após, o ponteiro a deve receber o resultado da soma entre o seu valor e o do ponteiro c. Por fim, o endereço apontado b deve receber o resultado da subtração entre o seu valor e o do ponteiro c.

**Input Format:**

Na primeira linha deve ser lido, em sequência, os valores a serem armazenados nos ponteiros a e b.

**Output Format:**

Em uma linha, imprimir os valores armazenados nos ponteiros em sequência seguindo o seguinte padrão:

A=valor B=valor C=valor

# Ponteiros - parâmetros de paralelepípedo
Escreva uma função que receba três variáveis (altura, largura e comprimento) do tipo float para a representação de um paralelepípedo reto e três ponteiros do tipo float. Nessa função, cada ponteiro deverá armazenar uma medida relacionada ao palalepípedo, como:

área = 2 x altura x altura + 2 x altura x comprimento + 2 x largura x comprimento

volume = altura x largura x comprimento

comprimento da diagonal = √(altura^2+largura^2+comprimento^2)

**Input Format:**

Ler três variáveis do tipo float.

**Constraints:**

A impressão dos floats deve considerar apenas uma casa decimal.

**Output Format:**

Em cada linha, imprimir o conteúdo de um ponteiro seguido o seguinte padrão:

"area: valor"

"volume: valor"

"comprimento da diagonal: valor"

# Ponteiros - soma dobro
Implemente um programa que leia três valores do tipo float (A, B e C). Em seguida faça uma função que receba três ponteiros do tipo float. Essa função deverá dobrar o valor em cada ponteiro e retornar a soma desses valores dobrados.Exemplo: se a função receber ponteiros com os valores A=3.0, B=4.0 e C=0.0, ao final da execução da função, A=6.0, B=8.0 e C=0.0 e retorno será 14.0.

**Input Format:**

A primeira linha contém um único inteiro N, indicando a quantidade de vezes que serão lidos os parâmetros da função.

Nas próximas N linhas, ler três valores do tipo float.

**Output Format:**

Para cada vez em que os parâmetros da função forem lidos deverá ser apresentada uma linha de saída no seguinte formato: "A=X B=Y C=Z SOMA=TOTAL", sendo todos com precisão de uma casa decimal.

# Ponteiros em structs - operações com números complexos
Dada a estrutura abaixo:

    typedef struct{
        float real, img, mod;
    }complexo;
    
Implemente uma função que receba um ponteiro do tipo complexo e duas variáveis estáticas do tipo float que represente as partes real e imaginária de um número complexo. A partir das varáveis do tipo float, os campos das estrutura devem ser atualizados.

Em seguida, imprima os campos do "complexo" no seguinte formato: real sinal img i.

Para a implementação do exercício proposto considere o seguinte protótipo de função e a equação abaixo:

    void atualizar_complexo(complexo *c, float real, float img);
Módulo de um número complexo:

z = sqrt(real * real + img * img);

Para o cálculo da raiz quadrada, você pode utilizar a função sqrt da biblioteca math.h.

**Na primeira linha deve ser lido dois dados do tipo float.

**Output Format:**

Na primeira linha deve ser impresso o número complexo no seguinte formato: real sinal_numero_imaginário img i

Na segunda linha, deve ser impresso o módulo do número complexo.

Para a impressão de floats, considere a precisão de uma casa decimal (%.1f).

# Ponteiro em structs - batalha em turnos v1.1
Após ter o protótipo de jogo de RPG aprovado pelo CEO de uma importante empresa de games, Gladstone decide fazer melhorias na jogabilidade. Dessa vez o jogo deverá ter mais recursos. Consequentemente, a estrutura de cada personagem deve ter os seguintes campos: nome, energia, defesa, força e três golpes diferentes (A1, A2, A3), sendo cada um com um valor diferente. Após a execução de um golpe, o dano é dado pela seguinte equação:

dano=força.atacante + golpe.atacante - defesa.atacado

Caso o valor da equação acima for negativo, o dano será de 1 ponto apenas. Em cada batalha, o perdedor será o personagem que tiver a energia zerada ou que tiver o menor valor de energia. Também, poderá ocorrer empate. É importante ressaltar que o personagem com energia zerada não pode mais atacar!

O jogo também tem mais novidades novidades: o personagem, em vez de atacar, pode tomar uma poção de cura, que restaura 200 pontos; quem inicia o ataque não é necessariamente o primeiro personagem; o valor máximo de energia é 1000 (personagem completamente saudável).

Implemente funções para o gerenciamento de batalha entre dois personagens. Para isso, devem ser utilizados ponteiros de structs. Exemplo de protótipos:

void reduzir_energia(Tipo *p, int pontos_dano); // reduz pontos_dano pontos na saúde do personagem (valor mínimo de saúde: 0)

void restaurar(Tipo *p); // aumenta 200 pontos na saúde do personagem (valor máximo de saúde: 1000)

**Input Format:**

Nas duas primeiras linhas, devem ler lidos os dados dos personagens. Cada uma das duas primeiras linhas tem a seguinte seguência: "nome (vetor de char) energia (int) defesa (int), força (int), ataque 1 (int), ataque 2 (int), ataque 3 (int)""

Na linha seguinte, deve ser lida a quantidade de ações (N) que deverá ter a batalha.

A leitura das próximas N linhas devem ser no formato: "P A" (o personagem toma uma poção de cura) ou P A G (o personagem realiza um ataque), onde:

P: do tipo inteiro, representa o personagem que executa a ação. O valor pode ser 1 (primeiro persongem lido) ou 2

A: é um caractere que representa uma ação, que pode ser "C" (cura) ou "A" ataque.

Caso a ação representada pelo caractere "A", ainda deverá ser definido qual dos 3 três golpes possíveis deve ser executado, ou seja, o valor deve ser 1, 2 ou 3

**Output Format:**

Na primeira e segunda linha, imprimir o nome e a energia restante do primeiro e do segundo personagem, após a execução das rodadas de ataques.

Na terceira lunha, imprimir o nome do personagem vencedor ou "empate", caso os personagens tiverem a mesma quantidade de energia (neste exercício não levando em conta que os personagens possam iniciar uma batalha com diferentes valores de energia).

# Alocação dinâmica - soma de vetores
Implemente uma função que receba dois vetores de números inteiros. A função deverá retornar um vetor resultante da soma dos vetores entrada.

Cabeçalho da solução proposta, onde v1 e v2 são vetores, n1 é o comprimento de v1 e v2 é o comprimento de v2:

    int* soma(int *v1, int n1, int *v2, int n2);

**Input Format:**

Deve ser lido um valor inteiro n que representa a quantidade de elementos de um v. Em seguida, devem ser lidos os n elementos do vetor. Repetir o processo para o segundo vetor.

**Output Format:**

Vetor resultante da soma dos vetores de entrada.

# Alocação dinâmica - mensagem codificada
Luciano Capitão América tem um quadro no seu programa "Geladeira do Capitão América" onde é passada uma sequência de caracteres (string) que representa um alfabeto e uma sequência de números inteiros, sendo cada número a posição de um determinado caractere. O participante deve decifrar a mensagem utilizando o alfabeto e a sequência de números inteiros.

Exemplo de alfabeto: oabeucis,-gfk Mensagem codificada: 1 7 9 10 4 5 10 8 1 5 10 1 10 11 1 13 5 Mensagem decodificada: oi,-eu-sou-o-goku

Para ajudar os participantes desse quadro no programa, implemente uma função que receba uma string (alfabeto) e um vetor de números inteiros (mensagem codificada) alocado dinamicamente. A função deverá retornar uma string resultante da decodificação da mensagem utilizando o alfabeto.

**Input Format:**

Na primeira linha deve ser lida uma string Na segunda linha, enquanto -1 não for lido, deve ser lido um número inteiro.

**Output Format:**

Deve ser impressa a mensagem decodificada.

# Alocação dinâmica - diagonal de matrizes
Implemente uma função que receba uma matriz quadrática de números inteiros. A função deverá retornar um vetor (ponteiro) alocado dinamicamente com os elementos da diagonal principal da matriz.

**Input Format:**

Na primeira linha deve ser lido um número inteiro N representando a dimensão da matriz.

Em seguida, ler os elementos de uma matriz NxN de números inteiros.

**Output Format:**

Em uma única, linha, imprimir o conteúdo do vetor com os elementos da diagonal da matriz.

# Alocação dinâmica - soma entre matrizes
Implemente uma função que receba duas matrizes de números inteiros com dimensões iguais. A função deverá retornar uma matriz (int**), alocada dinamicamente, resultante da soma das duas matrizes de entrada.

**Input Format:**

Na primeira linha devem ser lidos dois números inteiros: um para a quantidade de linhas (l) e outro para a quantidade de colunas (c).

Em seguida, ler o conteúdo de duas matrizes lxc.

**Output Format:**

Imprimir o conteúdo da matriz resultante da soma.

# TAD - concatenação e soma de vetores
Crie um TAD para processamento de vetores com a seguinte estrutura e operações, onde v é o vetor e n é a quantidade de elementos contidos no vetor:

    typedef struct{
        int *v; // Array (vetor) de tamanho n
        int n; // tamanho do v
        int q; // quantidade de elementos preenchidos no vetor
    }Vetor;
    
    Vetor * iniciar(int n);
    
    int inserir(Vetor *v, int x); // inserir x na última posição. A função retorna 1 se a operação foi bem-sucedida
    
    Vetor * concatenar(Vetor *v1, Vetor *v2);
    
    Vetor * soma(Vetor *v1, Vetor *v2);
    
**Observação:** não é necessário considerar o arquivo .h, já que no HackerRank não tem como "upar" arquivos .h e .c.

**Input Format:**

Deve ser lido um valor inteiro n que representa a quantidade de elementos de um v. Em seguida, devem ser lidos os n elementos do vetor. Repetir o processo para o segundo vetor.

**Output Format:**

Vetores na seguinte ordem: resultantes da concatenação resultantes da soma

# TAD - números reais
Crie um TAD para números reais, onde i é a parte inteira e f é a parte fracionária, que pode ter valores entre 0 e 99, ou seja, o número real possui apenas duas casas decimais.

Para isso, considere a estrutura e os protótipos de funções abaixo.

    typedef struct{
        int i; // parte inteira
        int f; // parte fracionária
    }Real;
    
    Real* criar(int i, int f);
    
    // Soma entre dois números reais
    Real* soma(Real *r1, Real *r2);
    
    // Subtração entre dois números reais
    Real* subtracao(Real *r1, Real *r2);
    
    // Arredondar
    int arredondar(Real *r1);
    
    // Imprimir
    void imprimir(Real *r1);

**Observação:** não é necessário considerar o arquivo .h, já que no HackerRank não tem como "upar" arquivos .h e .c.

**Input Format:**

Na primeira linha, devem ser lidos dois números inteiros, sendo um a parte inteira e a outra, a fracionária, respectivamente.

Na segunda linha, devem ser lidos dois números inteiros, sendo um a parte inteira e a outra, a fracionária, respectivamente.

**Output Format:**

Na primeira linha, imprimir o primeiro número real.

Na segunda linha, imprimir o segundo número real.

Na terceira linha, imprimir o resultado da soma entre os dois números reais.

Na quarta linha, imprimir o resultado da subtração entre os dois números reais.

Na quinta linha, imprimir o arredondamento do primeiro e do segundo número real.

# TAD - números racionais
Implemente um TAD (tipo abstrato de dados) para números racionais. O TAD deve ter as seguintes funções: criar número racional; soma; subtração; divisão; e mutiplicação entre números racionais.

Para isso, pode ser considerada a estrutura e os protótipos de função abaixo:

    typedef struct{

        int num, den; // numerador e denominador, respectivamente
        
    }RAC;

    RAC *criar(int num, int den);

    RAC *somar(RAC *r1, RAC *r2);

    RAC *subtrair(RAC *r1, RAC *r2);

    RAC *multiplicar(RAC *r1, RAC *r2);

    RAC *dividir(RAC *r1, RAC *r2);

**Input Format:**

A primeira linha é composta pelo numerador e denominador, respectivamente, do primeiro número racional.

A segunda linha é composta pelo numerador e denominador, respectivamente, do segundo número racional.

**Output Format:**

Na primeira linha deve ser impresso o primeiro número racional no seguinte formato: "r1: num/den".

Na segunda linha deve ser impresso o segundo número racional no seguinte formato: "r2: num/den".

Na terceira linha deve ser impresso o resultado da soma entre os números racionais r1 e r2 seguindo o seguinte formato: "r1+r2=num/den".

Na quarta linha deve ser impresso o resultado da subtração entre os números racionais r1 e r2 seguindo o seguinte formato: "r1-r2=num/den".

Na quinta linha deve ser impresso o resultado da multiplicação entre os números racionais r1 e r2 seguindo o seguinte formato: "r1*r2=num/den".

Na sexta linha deve ser impresso o resultado da divisão entre os números racionais r1 e r2 seguindo o seguinte formato: "r1/r2=num/den".

# Listas estáticas - lista de contatos
Dada uma função que receba uma lista estática de contatos e uma string. Essa função deverá imprimir os contatos que contêm essa string no nome. Por exemplo, para a string "son", podem ser encontrados nomes como: Son**ia, Ander**son, Jeffer**son**.

**Input Format:**

A primeira linha a ser lida deve ser a string que deve ser procurada. Em seguida, deve ser lida um número inteiro referente à quantidade de nomes que devem ser incluídos na lista.

**Constraints:**

Usar TAD de listas estáticas.

**Output Format:**

Imprimir os nomes que contêm a string procurada.

# Listas estáticas - pares e ímpares
Implemente uma função que receba três listas estáticas (l1, l2, l3), sendo as duas últimas listas vazias. A função deverá colocar os itens pares da lista l1 na l2, e os ímpares, na l3.

**Input Format:**

Enquanto -1 não for lido, ler números inteiros e colocá-los na lista l1.

**Output Format:**

Na primeira linha deve ser impresso o conteúdo da lista l2.

Na linha linha deve ser impresso o conteúdo da lista l3.

Caso uma das listas esteja vazia, imprimir -1 (menos um).

# Listas estáticas - procurar sub-lista
Implemente uma função que receba duas listas estáticas (l1, l2). A função deverá retornar a posição lista l2 dentro de l1. Caso a lista l2 não estiver na l1, retornar "-1".

Exemplo:

l1 = {1, 2, 3, 4, 5, 6, 7,** 8, 7, 6, 8**, 9, 10}

l2 = {8, 7, 6, 8}

No exemplo acima, l2 está (inicia) na posição 7 da lista l2.

Para a implementação do exercício, utilize um TAD de listas estáticas, podendo ser o código que foi apresentado em aula (disponível no repositório da disciplina no GitHub).

**Input Format:**

Na primeira linha, enquanto "-1" não for lido, ler números inteiros. Na segunda linha, a mesma restrição da primeira linha deve ser aplicada.

**Output Format:**

Imprimir a posição da lista l2 na l1.

# Pilhas estáticas - decimal para binário
Utilizando uma pilha estática, escreva uma função que receba um número inteiro positivo no formato decimal e o converta para o formato binário. A função deverá retornar a pilha com os dígitos do número binário.

**Input Format:**

Na primeira linha, um número inteiro deve ser lido.

**Constraints:**

As pilhas devem ser manipuladas apenas por funções. Por exemplo, o acesso a elementos deve ser feito apenas através da função desempilhar ou que retorne o valor que está no topo.

**Output Format:**

Imprimir o número binário.

# Pilhas estáticas - resolução de expressão posfixa
Implemente uma função que receba uma string que represente uma expressão matemática na notação posfixa. A função deverá retornar o resultado da expressão.

Para a implementação da solução, considere que cada operando tenha valor entre 0 e 9.

**Input Format:**

Deve ser lida uma string que represente uma expressão posfixa.

**Constraints:**

Para a solução do problema, deve ser utilizada uma pilha estática para armazenar os números inteiros.

As pilhas devem ser manipuladas apenas por funções. Por exemplo, o acesso a elementos deve ser feito apenas através da função desempilhar ou que retorne o valor que está no topo.

**Output Format:**

Resultado da expressão.

# Filas estáticas - intercalação de filas estáticas
Implemente uma função que receba duas filas compostas por números naturais. A função deverá intercalar as duas filas. Em cada intercalação, o maior elemento deve ser enfileirado primeiro.

**Exemplo:**

    Antes:

    f1 = {1, 5, 3}

    f2 = {4, 2, 3, 4}

    f3 = {}

    Depois:

    f1 = {}

    f2 = {}

    f3 = {4, 1, 5, 2, 3, 3, 4}

**Input Format:**

Na primeira linha, enquanto "-1" não for lido, ler números inteiros. Na segunda linha, a mesma restrição da primeira linha deve ser aplicada.

**Constraints:**

O acesso aos elementos da fila deve ser através da função desenfileirar.

**Output Format:**

Imprimir a fila intercalada.

# Filas estáticas - gerenciamento de estacionamento
O Sr. Pupunha, um grande investidor, comprou um terreno e decidiu fazê-lo um estacionamento, o qual tem capacidade para 10 carros. Ao estacionar o automóvel, o cliente recebe um ticket representando por um número inteiro. No entanto, o terreno é muito estreito e, consequentemente, os carros devem ser colocados em fila. Nesse terreno, a entrada é pelos fundos e a saída é pela frente. Caso um cliente precisar sair com o seu carro, os outros automóveis deverão ser retirados e estacionados novamente. Por exemplo, considere a seguinte fila de carros: {1, 2, 3, 4, 5, 6, 7, 8}, onde o primeiro elemento é o veículo que está mais próximo à saída e o último é mais próximo da entrada. Caso o carro 4 for retirado, os veículos 1, 2 e 3 devem estacionados novamente pela entrada do estacionamento. Desse modo, após a remoção do veículo 4, o estacionamento ficaria na seguinte forma: {5, 6, 7, 8, 1, 2, 3}.

Implemente uma função que receba uma fila estática (representação do estacionamento) e um número inteiro (ticket ou id do carro) como parâmetros e faça o gerenciamento de veículos no estacionamento do Pupunha. Enquanto o ticket não for encontrado, o primeiro elemento da fila deverá ser removido e recolocado no final da da fila. Também, deve ser tratado o caso em que o elemento não é encontrado na fila. A função deverá retornar um número inteiro representado a quantidade de veículos que precisaram ser estacionados novamente para que o cliente pudesse retirar o seu carro.

**Input Format:**

Na primeira linha, enquanto -1 não for lido, ler números inteiros. Na segunda linha deve ser lido um número inteiro que será o ticket a ser procurado na fila.

**Constraints:**

O acesso aos elementos da fila deve ser através da função desenfileirar.

**Output Format:**

Na primeira linha, o conteúdo da fila, após a operação de busca, deve ser impresso.

Na segunda linha impresso a quantidade de movimentações que foram necessárias para procurar o ticket.

Na terceira linha deve ser impressa a string "sucesso" caso o ticket for encontrado, ou "falha", caso contrário.

# Pilhas estáticas - mina de diamante
O Sr. Alcídes está trabalhando em uma mina para extrair o máximo que consegue de diamantes "<>". Ele deve excluir todas as particulas de areia "." do processo e a cada retirada de diamante, novos diamantes poderão ser encontrados. Se ele tem como uma entrada .<...<<..>>....>....>>>., três diamantes são formados: "O primeiro é retirado de "<..>", "<>" e "<.......>". Implemente uma função que receba uma string representado a carga com areia e diamante. A função deverá retornar a quantidade de diamantes contidas na carga. Para a solução do problema, deve ser utilizada uma pilha estática.

Para a implementação do exercício, utilize um TAD de pilhas estáticas, podendo ser um dos códigos que foi apresentado em aula (disponível no repositório da disciplina no GitHub).

**Input Format:**

Deve ser lido um valor inteiro N que representa a quantidade de casos de teste. Cada linha a seguir é uma string que contém apenas os seguintes caracteres: "<", ">" e ".".

**Constraints:**

Os elementos da pilha podem ser manipulados apenas utilizando funções de empilhar e desempilhar.

**Output Format:**

A quantidade de diamantes possíveis de serem extraídos em cada caso de entrada deve ser impressa.

# Filas estáticas - inserção ordenada
Implemente uma função que receba um fila estática de números inteiros e uma chave, também do tipo inteiro. A função deverá inserir a chave na fila de forma os os elementos sejam mantidos ordenados em ordem descrescente. Para a inserção de novos elementos será necessário o uso uma fila auxiliar, já que apenas as operações de enfileirar e desenfileirar são permitidas para a manipulação dos elementos. Adicionalmente, pode ser usada/implementada uma função para verificar qual elemento está no início e no fim da fila.

Para a implementação do exercício, utilize um TAD de filas estáticas, podendo ser o código que foi apresentado em aula (disponível no repositório da disciplina no GitHub).

**Input Format:**

Enquanto "-1" não for lido, ler números inteiros.

**Constraints:**

O acesso aos elementos da fila deve ser através da função desenfileirar.

**Output Format:**

Imprimir a fila ordenada em ordem decrescente.

# Listas encadeadas - soma de itens
Implemente uma função que receba uma lista encadeada. A função deverá retornar a soma dos elementos da lista.

**Input Format:**

Enquanto -1 não for lido, ler números inteiros e colocá-los na lista encadeada.

**Output Format:**

Imprimir o resultado da soma dos elementos.

# Listas encadeadas - dividir lista encadeada
Implemente uma função que receba duas listas encadeadas, sendo uma com itens (l1) e a outra vazia (l2). A função deverá transferir a metade do conteúdo de l1 para l2.

**Input Format:**

Enquanto -1 não for lido, ler números inteiros.

**Output Format:**

Imprimir o conteúdo das duas listas.

# Listas encadeadas - ocorrências de itens
Implemente uma função que receba uma lista encadeada e um número inteiro. A função deverá retornar a quantidade de vezes que o número inteiro aparece na lista.

**Input Format:**

Na primeira linha, enquanto -1 não for lido, ler números inteiros e colocá-los na lista encadeada.

Na segunda linha, ler um número inteiro.

**Output Format:**

Imprimir a quantidade de vezes que o número aparece na lista

# Pilhas encadeadas - Inverter string
Implemente uma função que inverta uma string através de uma pilha encadeada de caracteres.

**Input Format:**

Na primeira linha deve ser lida uma string.

**Constraints:**

As pilhas devem ser manipuladas apenas por funções. Por exemplo, o acesso a elementos deve ser feito apenas através da função desempilhar ou que retorne o valor que está no topo.

**Output Format:**

Imprimir a string invertida.

# Listas encadeadas - elementos em comum
Implemente uma função que receba duas listas encadeadas (l1 e l2). A função deverá retornar uma lista encadeada ordenada com os elementos existentes nas duas listas de entrada.

Exemplo:

Entrada:
l1 = {1, 2, 3, 4, 5, 6}

l2 = {6, 8, 10, 1, 7, 4}

Saída:
l3= {1, 4, 6}

Para a implementação do exercício, utilize um TAD de listas encadeadas, podendo ser um dos códigos que foi apresentado em aula (disponível no repositório da disciplina no GitHub).

**Input Format:**

Na primeira linha, enquanto -1 não for lido, ler números inteiros e colocá-los na lista l1.

Na segunda linha, enquanto -1 não for lido, ler números inteiros e colocá-los na lista l2.

**Output Format:**

Imprimir o conteúdo da lista (l3) retornada pela função.

# Pilhas encadeadas - balanço de parênteses
Dada uma expressão qualquer com parênteses, indique se a quantidade de parênteses está correta ou não, sem levar em conta o restante da expressão. Por exemplo:

a+(b*c)-2-a está correto (a+b*(2-c)-2+a)*2 está correto

enquanto

(a*b-(2+c) está incorreto 2*(3-a)) está incorreto )3+b*(2-c)( está incorreto

Ou seja, todo parênteses que fecha deve ter um outro parênteses que abre correspondente e não pode haver parênteses que fecha sem um previo parenteses que abre e a quantidade total de parenteses que abre e fecha deve ser igual.

Para a solução desse exercício, utilize uma pilha encadeada de caracteres.

**Input Format:**

Deve ser lido um valor inteiro N que representa a quantidade de casos de teste. Cada uma das N linhas a seguir é uma string representando uma expressão.

**Constraints:**

As pilhas devem ser manipuladas apenas por funções. Por exemplo, o acesso a elementos deve ser feito apenas através da função desempilhar.

**Output Format:**

O arquivo de saída deverá ter a quantidade de linhas correspondente ao arquivo de entrada, cada uma delas contendo as palavras correct ou incorrect de acordo com as regras acima fornecidas.

# Pilhas encadeadas - conversão de número decimal para uma base específica
Implemente um número que receba dois números inteiros: número na base decimal (n) e a base (b). A função deverá retornar uma pilha encadeada resultante da conversão de n na base b.

Para a implementação do exercício, utilize um TAD de pilhas encadeadas, podendo ser um dos códigos que foi apresentado em aula (disponível no repositório da disciplina no GitHub).

**Input Format:**

Ler dois números inteiros na seguinte sequência: número na base decimal e a base em que o número decimal será convertido.

**Constraints:**

1 - Para acessar um elemento na pilha, deve ser utilizada a função desempilhar ou implementar uma função que retorne o elemento que está no topo da pilha. Para inserir um elemento na pilha, deve ser utilizada a função empilhar.

2 - o número que representa a base deve estar entre a seguinte faixa de valores: 2 <= b <= 16.

**Output Format:**

Imprimir o número convertido na base b esvaziando a pilha encadeada.

# Filas encadeadas - semáforo
Três estradas movimentadas ligam a uma única rodovia (principal), conforme a figura abaixo. Para o gerenciamento do trânsito, um semáforo foi adicionado para cada estrada, na qual, enquanto o sinal estiver verde, os veículos que chegaram primeiro podem acessar a rodovia principal. Quando o sinal estiver verde para uma estrada, para as outras duas estradas, o sinal será vermelho. No entanto, como as estradas estão cheias de buracos e os veículos devem transitar vagarosamente, para cada vez que o sinal estiver verde para uma estrada, apenas três veículos conseguem acessar a estrada principal antes do sinal ficar vermelho. Por outro lado, os semáforos possuem um sistema inteligente, no qual, enquanto a estrada estiver vazia, o sinal será vermelho. Também, durante o sinal verde, quando a estrada tiver menos que três veículos, assim que os mesmos acessarem a rodovia principal, o sinal ficará vermelho antecipadamente.

![image](https://github.com/odilonneto/Algoritimos-e-Estrutura-de-dados-1/assets/92185618/abe8e43c-ed95-4a03-a09a-3448f95bb980)

Implemente uma função para o gerenciamento do trânsito conforme ilustrado acima. A função deverá receber, como parâmetro, 4 filas encadeadas (E1, E2, E3, R). Na função, os elementos de E1, E2 e E3 devem ser transferidos para R de forma que simule o trânsito descrito acima.

**Input Format:**

Em cada uma das 3 primeiras linhas, enquanto -1 não for lido, ler números inteiros e inserí-los em suas respectivas filas (E1, E2 e E3).

**Constraints:**

O acesso aos elementos da fila deve ser através da função desenfileirar.

**Output Format:**

Imprimir a fila R.

# Filas encadeadas - os últimos serão os primeiros
Implementente uma função que receba uma pilha estática. A função deverá converter a pilha estática invertida em uma fila encadeada.

**Input Format:**

Enquanto -1 não for lido, ler números inteiros.

**Constraints:**

O acesso aos elementos da fila deve ser através da função desenfileirar.

**Output Format:**

Impressão da fila encadeada.

# Filas encadeadas - concatenação inversa
Implemente uma função que receba 3 filas encadeadas (f1, f2, f3). A função deve concatenar f1 e f2, de forma que ambas sejam invertidas, em f3. Durante a concatenação, as filas f1 e f2 devem ser esvaziadas. Dica: utilizar pilhas como auxiliar.

**Exemplo:**

*Antes:*

f1 = {1, 2, 3}

f2 = {4, 5, 6, 7}

f3 = {}

*Depois:*

f1 = {}

f2 = {}

f3 = {3, 2, 1, 7, 6, 5, 4}

Para a implementação do exercício, utilize um TAD de filas encadeadas, podendo ser um dos códigos que foi apresentado em aula (disponível no repositório da disciplina no GitHub).

**Input Format:**

Na primeira linha, enquanto "-1" não for lido, ler números inteiros e inserir na primeira fila.

Na segunda linha, enquanto "-1" não for lido, ler números inteiros e inserir na segunda fila.

**Constraints:**

As filas devem ser manipuladas apenas por funções. As únicas operações permitidas são: enfileirar e desenfileirar.

**Output Format:**

Imprimir a fila concatenada

# Recursão - potenciação
Implemente uma função recursiva que receba dois números naturais: a e n. A função deverá calcular a potência de a em relação à n (a^n, ou "a" elevada à "n") multiplicações sucessivas. Exemplo para a = 5 e n = 3: 5 * 5 * 5.

**Input Format:**

Na primeira linha devem ser lidos dois números inteiros >= 0.

**Output Format:**

Imprimir o resultado da função.

# Recursão - multiplicação
A multiplicação de dois números inteiros pode ser feita através de sucessivas somas, por exemplo, 5 ∗ 3 = 5 + 5 + 5 = 15. Implemente uma função que calcule o produto entre dois números utilizando recursão.

**Input Format:**

Na primeira linha devem ser lidos dois números inteiros positivos.

**Output Format:**

Imprimir o resultado da multiplicação dos dois números lidos.

# Recursão - binário para decimal
Implemente uma função recursiva que receba, pelo menos (ou seja, se você preferir, pode colocar mais parâmetros na função, desde que explique para quê servem), um vetor de números inteiros e o seu respectivo tamanho. Suponha que esse vetor represente um número binário, ou seja, cada elemento pode ser apenas 0 (zero) ou 1 (um). A função deverá retornar um número inteiro que represente a versão decimal do número binário. Para a implementação da solução, pode ser utilizada a função pow(x, y), que eleva x ao y.

**Input Format:**

Na primeira linha deve ser lido o tamanho do vetor.

A partir da segunda linha, devem ser lidos os elementos (0's e 1's) que irão compor o vetor.

**Output Format:**

Imprimir o número na base decimal.

# Recursão - resto de divisão
Implemente uma função recursiva que calcule o resto da divisão entre dois números inteiros.

**Input Format:**

Na primeira linha deve ser lido um número inteiro N referente a quantidade de leituras de entradas.

Para cada uma das N próximas linhas, ler dois números inteiros (a e b)

**Output Format:**

Em cada uma das N linhas, imprimir o resultado do resto da divisão dos respectivos números inteiros.

# Algoritmos de busca - recuperação recorrente por transposição
Implemente uma função que receba uma lista encadeada. Nessa função deverá ser implementado o método de recuperação recorrente transposição, no qual, cada vez que um registro é recuperado com sucesso, ele tem a posição trocada com o registro imediatamente anterior. Por exemplo, suponha que procuramos a chave 2 na seguinte: {7, 3, 4, 2, 6}. Após recuperar a chave 2, a mesma tem a posição trocada com a chave 3: {7, 3, 2, 4, 6}.

**Input Format:**

Na primeira linha, enquanto -1 não for lido, devem ser lidos os elementos da lista encadeada. Na segunda linha deve ser lida a quantidade de chaves que deverão ser procuradas). A partir da próxima linha, as chaves que serão procuradas devem ser lidas.

**Output Format:**

Após execução do algoritmo para cada caso teste, imprimir a lista encadeada.

# Algoritmos de busca - combinação entre pesquisa binária e sequencial
Implemente a função que receba quatro parâmetros: número inteiro a ser procurado, vetor de inteiros (v[] ou *v), tamanho do vetor (n) e um número inteiro representando tamanho mínimo (m). Nessa função, enquanto o espaço de busca (espaço coberto entre os índices esquerdo e direito em uma busca binária, ou seja, direito - esquerdo + 1) for maior que m, o método de busca binária deve ser aplicada. Quando o espaço de busca ficar menor ou igual a m, a busca sequencial deverá ser executada. Se a busca sequencial for aplicada, o espaço de busca deverá ser impresso (caso houver). Ao final a posição do item procurado no vetor é retornada. Caso o item não seja encontrado, a função deverá retornar -1.

**Input Format:**

Na primeira linha deve ser lido um número inteiro que deverá ser procurado. Na segunda linha deve ser lido o tamanho do vetor. Na terceira devem ser lidos os elementos do vetor. Na quarta linha deve ser lida o tamanho mínimo da partição (m) para fazer a busca binária.

**Output Format:**

Na primeira linha deve ser impresso o subvetor referente ao espaço de busca a partir do momento em que a busca sequencial é executada. Na próxima linha deve ser impressa a posição retornada pela função.

Caso a busca sequencial não tenha sido executada, apenas a posição retornada pela função deve ser impressa.

# Algoritmos de busca - recuperação recorrente mover-para-frente recursivo
Implemente uma função que receba um arranjo de números inteiros. Nessa função deverá ser implementado, utilizando recursão, o método de recuperação recorrente mover-para-frente, no qual, cada vez que um registro é recuperado com sucesso, ele é movimentado para a primeira posição.

**Input Format:**

Na primeira linha, ler um número inteiro (n) referente ao tamanho do arranjo.

Na segunda linha, ler os n elementos do vetor

Na terceira linha deve ser lida a quantidade de chaves que deverão ser procuradas). A partir da próxima linha, as chaves que serão procuradas devem ser lidas.

**Output Format:**

Após execução do algoritmo para cada caso teste, imprimir o arranjo.

# Algoritmos de ordenação - ordenar linhas de uma matriz
Implemente uma função que receba uma matriz de números inteiros. A função deverá ordenar, em ordem decrescente, cada linha da matriz.

**Input Format:**

Na primeira linha, devem ser lidos dois números inteiros: l (linhas) e c (colunas).

Para cada uma das l linhas seguintes devem ser lidos c números inteiros.

**Output Format:**

Imprimir a matriz com as linhas ordenadas.

# Algoritmos de ordenação - recursividade na ordenação simples de uma lista encadeada de floats
Implemente, utilizando recursão, um dos algoritmos de ordenação simples apresentados em sala de aula (bublesort, selection sort ou insertion sort) para a ordenação de uma lista encadeada de floats.

**Input Format:**

Enquanto -1 não for lido, ler um float e colocá-lo na lista encadeada de floats.

**Constraints:**

No seu código pode ter, no máximo, apenas um loop.

**Output Format:**

Imprimir o contrúdo da lista ordenada.

# Algoritmos de ordenação - ordenação simples em listas encadedadas
Implemente um dos algoritmos de ordenação simples apresentados em sala de aula (bublesort, selection sort ou insertion sort) para ordenar elementos de uma lista encadeada de números inteiros positivos.

**Input Format:**

Enquanto -1 não for lido, ler número inteiro positivo.

**Output Format:**

Imprimir o conteúdo da lista encadeada ordenada.

# Ordenação de strings - ordenação simples em listas encadeadas de strings
Implemente um algoritmo de ordenação simples para ordenar uma lista encadeada de strings.

**Input Format:**

Na primeira linha deve ser lida a quantidade de elementos que serão inseridos na lista encadedade. A partir da segunda linha, ler as strings e colicá-las na lista encadeada.

**Output Format:**

Imprimir o conteúdo da lista encadeada após a ordenação.

# Algoritmos de ordenação - recursividade na ordenação simples 
Implemente, utilizando recursão, um dos algoritmos de ordenação simples apresentados em sala de aula (bublesort, selection sort ou insertion sort).

**Input Format:**

Na primeira linha deve ser lido o tamanho do vetor. Na segunda linha devem ser lidos os elementos do vetor.

**Constraints:**

Dica: para os códigos apresentados em aulas, transforme apenas o for externo em recursão. Em outras palavras, no seu código pode ter, no máximo, apenas um laço for.

**Output Format:**

Imprimir o vetor ordenado.

# Ordenação de structs - Ordenação de dados de alunos
Adapte um dos algorimos de ordenação para o vetor de elementos da seguinte estrutura:

 
    typedef struct{
        int matricula;
        
        char* nome;
        
        char* curso;
        
        float coef;
    }Aluno;

A ordenação deve ser por nome. Caso haja registros com o mesmo nome, o critério de ordenação nesse caso é a matrícula.

**Input Format:**

Na primeira linha deve ser lido o tamanho do vetor. A partir da segunda linha, ler os dados de cada elemento do vetor.

**Output Format:**

Imprimir os registro ordenados. Diferentemente da forma leitura, cada registro deve ser impresso em uma linha.

# Matrizes esparsas - vetor com soma de linhas da matriz
Implemente uma função que receba uma matriz esparsa. A função deverá retornar um vetor onde o i-ésimo elemento é igual a soma de todos os elementos da i-ésima coluna da matriz.

**Input Format:**

A primeira linha contém os números de linhas e de colunas. Em seguida, uma matriz deve ser lida. Lembre-se: 0 é valor nulo, ou seja, deve ser ignorado.

**Constraints:**

Deve ser utilizada uma estrutura de matriz esparsa, como a que foi apresentada em sala de aula.

Será atribuída a nota zero no caso em que a verificação for feita em matriz de inteiros em vez de matriz esparsa.

**Output Format:**

Imprimir o vetor.

# Matrizes esparsas - comparação com vetor
Implemente uma função que receba uma matriz esparsa e um vetor de números inteiros. A função deverá comparar o vetor com cada linha da matriz. Caso o vetor seja encontrado, deve ser retornada a linha em que o mesmo foi localizado. Caso contrário, a função deverá retornar -1.

**Input Format:**

A primeira linha contém os números de linhas (l) e de colunas (c). Em seguida, uma matriz deve ser lida. Lembre-se: 0 é valor nulo, ou seja, deve ser ignorado.

Por fim, deve ser lido um vetor com c elementos.

**Constraints:**

Deve ser utilizada uma estrutura de matriz esparsa, como a que foi apresentada em sala de aula.

Será atribuída a nota zero no caso em que a verificação for feita em matriz de inteiros em vez de matriz esparsa.

**Output Format:**

Imprimir a posição da primeira linha em que o vetor foi encontrado. Caso o vetor não seja em encontrado, imprimir -1

# Matrizes esparsas - matriz triangular
Implemente uma função que verifica se a matriz esparsa é uma matriz triangular, onde todos os elementos acima ou abaixo da diagonal principal são obrigatoriamente nulos.

**Input Format:**

Na primeira linha deve ser lido um número inteiro, que representará os números de linhas e de colunas (matriz quadrada). Em seguida, uma matriz deve ser lida. Por último, a matriz bidimensional deve ser convertida para uma matriz esparsa.

**Constraints:**

Deve ser utilizada uma estrutura de matriz esparsa, como a que foi apresentada em sala de aula.

Será atribuída a nota zero no caso em que a verificação for feita em matriz de inteiros em vez de matriz esparsa.

**Output Format:**

Deve ser impresso "triangular" se a matriz for triangular ou "nao triangular", caso contrário.

# Matrizes esparsas - Soma entre matrizes esparsas
Implemente uma função que receba duas matrizes esparsas (m1 e m2). A função deverá retornar uma matriz esparsa resultante da soma de m1 e m2. Caso as matrizes tenham dimensões diferentes, a soma se dará a partir da primeira linha e da primeira coluna (como se uma matriz menor fosse colocada em cima da matriz maior mais ao topo e lado esquerdo possível).

**Input Format:**

A primeira linha contém os números de linhas (l) e de colunas (c). Em seguida, a primeira matriz deve ser lida.

Após leia os números de linhas (l) e de colunas (c) novamente. Posteriormente, a segunda matriz deve ser lida.

Lembre-se: 0 é valor nulo, ou seja, deve ser ignorado.

**Constraints:**

Deve ser utilizada uma estrutura de matriz esparsa, como a que foi apresentada em sala de aula.

Será atribuída a nota zero no caso em que a verificação for feita em matriz de inteiros em vez de matriz esparsa.

**Output Format:**

Imprimir o conteúdo da matriz esparsa de saída como arranjo bidimensional.

# Hashing - conversão da tabela hash estática fechada para aberta
O Sr. Urameshi implementou alguns anos atrás, uma tabela hash estática fechada, na qual, para a alocação de chaves é utilizada a função h(k) = k % B e para o tratamento de colisões é usado o overflow progressivo (sondagem linear). No entanto, Urameshi não previu que um dia a tabela poderia ficar cheia. Sendo assim, ajude o Dr. Uramesh a migrar essa tabela para uma tabela hash estática aberta com a mesma quantidade de buckets, mas com tratamento de colisões por listas encadeadas. Para isso, implemente uma função que receba uma tabela hash estática fechada. Essa função converter a entrada em uma tabela estática aberta.

**Input Format:**

Na primeira linha deve ser lido o tamanho N da tabela hash estática fechada. Na segunda linha deve ser lida a quantidade de chaves que serão alocadas. Por fim, devem ser lidas as chaves que serão alocadas na tabela hash estática fechada.

**Output Format:**

Imprimir o conteúdo da tabela hash resultante da conversão. Para isso, deve ser considerado o seguinte formato: "linha_i: -> item_0 -> item_1 -> ... -> item_n"

Caso a i-ésima linha da matriz esparsa seja nula, basta imprimir "linha_i -> ".

# Hashing - TAD tabela hash estática fechada
Implemente um TAD para hashing estático fechado utilizando as seguintes abordagens vistas para a sala de aula: -> função hash: método da multiplicação -> rehash: segunda função hash --> h1(k) = método da multiplicação --> h2(k) = 1 + k % (B - 1) --> rh(k, i) = (h1(k) + i * h2(k)) % B

**Input Format:**

Na primeira linha devem ser lidos a constante c considerada na alocação de chaves (tipo float), sendo que 0 < c < 1 e o tamanho n da tabela hash (tipo int). Na segunda linha deve ser lida a quantidade de chaves que serão alocadas. Por fim, devem ser lidas as chaves que serão alocadas na tabela hash.

**Output Format:**

Imprimir a posição onde cada chave foi alocada.

# Hashing - tabela hash com listas encadeadas
Implemente um TAD para hashing estático aberto, onde as colisões devem ser resolvidas por meio de listas encadeadas ordenadas. A função hash deve ser resto de divisão, ou seja, h(k) = k % B, onde k é uma chave e B é o tamanho da tabela hash.

**Input Format:**

Na primeira linha deve ser lido o tamanho da tabela hash. Na segunda linha deve ser lida a quantidade de chaves que serão alocadas. Por fim, devem ser lidas as chaves que serão alocadas na tabela hash.

**Output Format:**

Imprimir as posições onde as chaves foram colocadas na tabela. Em seguida, imprimir a tabela hash inteira. Para isso, deve ser considerado o seguinte formato: "linha_i: -> item_0 -> item_1 -> ... -> item_n"

Caso a i-ésima linha da matriz esparsa seja nula, basta imprimir "linha_i -> ".
