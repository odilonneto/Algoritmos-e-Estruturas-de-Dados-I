# Algoritimos-e-Estrutura-de-dados-1
Codigos feito por Odilon Ramos da Silva Neto durante o curso de Engenharia de Computação, na Universidade Tecnoligica Federal do Paraná(UTFPR). 

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

# Recursão - resto de divisão
Implemente uma função recursiva que calcule o resto da divisão entre dois números inteiros.

**Input Format:**

Na primeira linha deve ser lido um número inteiro N referente a quantidade de leituras de entradas.

Para cada uma das N próximas linhas, ler dois números inteiros (a e b)

**Output Format:**

Em cada uma das N linhas, imprimir o resultado do resto da divisão dos respectivos números inteiros.

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

# Ordenação de strings - ordenação simples em listas encadeadas de strings
Implemente um algoritmo de ordenação simples para ordenar uma lista encadeada de strings.

**Input Format:**

Na primeira linha deve ser lida a quantidade de elementos que serão inseridos na lista encadedade. A partir da segunda linha, ler as strings e colicá-las na lista encadeada.

**Output Format:**

Imprimir o conteúdo da lista encadeada após a ordenação.

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
