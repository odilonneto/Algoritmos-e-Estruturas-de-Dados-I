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

# Struct - batalha em turnos
Gladstone está desenvolvendo um jogo simples de RPG em que há batalhas, os quais são por turnos, onde, em cada luta, os jogadores se revezam em cada ataque. Cada personagem, além do nome (string), tem os seguintes atributos representados por números inteiros: energia, defesa e força. Em cada ataque, a energia do personagem que está sofrendo o golpe é reduzida. O dano (redução de energia) é dado pela subtração entre o atributo de força (F) do atacante e o atributo de defesa do personagem atacado, o qual pode ter redução de energia. Caso a diferença entre força (atacante) e defesa (atacado) seja menor igual a zero, o dano será de 1 ponto. Se o dano resultar em energia negativa, o valor da mesma para o personagem derrotado deverá ser "0". Em cada batalha, o perdedor será o personagem que tiver a energia zerada ou que tiver o menor valor de energia. Também, poderá ocorrer empate. É importante ressaltar que o personagem com energia zerada não pode mais atacar!

Implemente uma função que receba duas variáveis referentes aos personagens e um número inteiro que represente a quantidade de turnos, onde o primeiro personagem fornecido como parâmetro começa o ataque. Ao final, a função deverá imprimir o resultado, indicando o nome personagem vencedor ou se houve empate.

**Input Format:**

Nas duas primeiras linhas, devem ler lidos os dados dos personagens. "nome (vetor de char) energia (int) defesa (int), força (int)".

Na linha seguinte, deve ser lida a quantidade de rodadas que deverá ter a batalha.

**Output Format:**

Na primeira e segunda linha, imprimir o nome e a energia restante do primeiro e do segundo personagem, após a execução das rodadas de ataques.

Na terceira lunha, imprimir o nome do personagem vencedor ou "empate", caso os personagens tiverem a mesma quantidade de energia (neste exercício não levando em conta que os personagens possam iniciar uma batalha com diferentes valores de energia).

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

+----------------------+
|        Roda          |
+----------------------+
| - roda: boolean      |
+----------------------+
| + Roda()             |
| + setCalibragem(acao: boolean): void |
| + getCalibragem(): boolean |
| + rodaToString(): String |
+----------------------+
