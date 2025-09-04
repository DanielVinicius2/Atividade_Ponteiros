# Trabalho – Ponteiros em C

Este repositório contém a resolução da **Lista de Exercícios sobre Ponteiros em C**, proposta na disciplina de Estrutura de Dados.

---

## 🔹 O que são ponteiros em C?
Em C, um **ponteiro** é uma variável que armazena o endereço de memória de outra variável.  
Eles permitem manipular diretamente os dados na memória, tornando o código mais flexível e eficiente.

📌 Em resumo:
- `int *p;` → declara um ponteiro para inteiro.  
- `p = &x;` → faz o ponteiro `p` apontar para a variável `x`.  
- `*p` → acessa o valor armazenado no endereço para o qual `p` aponta.  

No trabalho, os ponteiros foram usados para acessar valores, percorrer vetores e matrizes, manipular dados e calcular estatísticas.

---

## 📝 Questões resolvidas

### **1 – Cofrinho** :white_check_mark:
- Declarar uma variável inteira representando um valor.
- Usar ponteiro para exibir o valor e seu endereço na memória.

### **2 – Idade do aluno**:white_check_mark:
- Ler a idade digitada pelo usuário.
- Imprimir valor e endereço usando ponteiro.

### **3 – Preços de produtos**:white_check_mark:
- Armazenar preços de 5 produtos em um vetor.
- Usar ponteiros e laço `for` para:
  - Mostrar os preços originais.
  - Calcular e exibir os preços com **10% de desconto**.

### **4 – Horas trabalhadas**:x:
- Armazenar horas de trabalho em um vetor de tamanho `n` informado pelo usuário.
- Preencher o vetor com ponteiros.
- Calcular o total de horas trabalhadas no mês.

### **5 – Notas dos alunos**:white_check_mark:
- Armazenar notas de 6 alunos em um vetor.
- Usar ponteiros para **inverter a ordem** do vetor.
- Exibir o vetor invertido.

### **6 – Notas em uma matriz 3x3**:white_check_mark:
- Armazenar as notas de 3 provas de 3 alunos em uma matriz 3x3.
- Usar apenas ponteiros para:
  - Mostrar todas as notas.
  - Calcular a soma da **diagonal principal**.

### **7 – Pontuação no vôlei (matriz 4x4)**:white_check_mark:
- Matriz representa pontos de 4 jogadores em 4 sets.
- Funcionalidades implementadas com ponteiros:
  - Mostrar todos os valores da matriz.
  - Contar pontos **pares** e **ímpares**.
  - Calcular a pontuação total de cada jogador e identificar o maior pontuador.
  - Calcular a pontuação total de cada set e identificar o mais disputado.
  - Calcular a **média de pontos por jogador**.
  - Determinar o jogador **mais regular** (menor diferença entre maior e menor pontuação nos sets).

---
# Uso de Ponteiros no Projeto

Este repositório contém códigos em C desenvolvidos para exercitar o uso de **ponteiros** em diferentes situações.  
A seguir, explico como utilizei ponteiros em cada questão.

---

## 🔹 Questão 1 – Cofrinho
**Resumo:**  
Foi declarada uma variável inteira representando o valor do cofrinho (`int cofrinho = 1000;`).  
Em seguida, criei um **ponteiro para inteiro** (`int *p = &cofrinho;`) para acessar o valor e o endereço de memória.

**Uso do ponteiro:**  
- `p = &cofrinho` → o ponteiro `p` armazena o endereço da variável `cofrinho`.  
- `*p` → acessa o valor guardado nesse endereço.  
- `p` → imprime diretamente o endereço de memória.

Dessa forma, o programa mostra:
- O valor armazenado no cofrinho.  
- O endereço de memória em que ele está guardado.  

---

## 🔹 Questão 2 – Idade do aluno

**Resumo:**  
O programa pede que o usuário digite a idade de um aluno e armazena esse valor em uma variável inteira (`idade`).  
Depois, um **ponteiro** é usado para acessar e exibir tanto o valor quanto o endereço de memória dessa variável.

**Uso dos ponteiros no código:**  
- `int *p = &idade;` → cria um ponteiro `p` que guarda o **endereço da variável `idade`**.  
- `*p` → acessa o valor armazenado nesse endereço (ou seja, a idade digitada).  
- `p` → imprime diretamente o endereço de memória onde a variável está localizada.  

**Passos principais:**  
1. O usuário digita a idade, que é lida com `scanf("%d", &idade)`.  
2. O ponteiro `p` recebe o endereço de `idade` com `&idade`.  
3. `printf("Idade: %d", *p);` → mostra o valor da idade acessando através do ponteiro.  
4. `printf("Endereco da idade: %p", p);` → mostra o endereço em memória da variável.  

👉 Assim, o código não acessa a variável `idade` diretamente no `printf`, mas sim através do **ponteiro**, demonstrando o uso de indireção.

---

## 🔹 Questão 3 – Preços dos produtos

**Resumo:**  
O programa armazena os preços de 5 produtos em um vetor (`lista_precos`).  
Utilizando **ponteiros**, percorre cada posição do vetor para mostrar:  
1. O preço original e seu endereço de memória.  
2. O preço com **10% de desconto** e o mesmo endereço em memória.

**Uso dos ponteiros no código:**  
- `float *plist;` → ponteiro usado para apontar para cada elemento do vetor.  
- `plist = &lista_precos[i];` → faz o ponteiro guardar o endereço do elemento na posição `i`.  
- `*plist` → acessa o valor armazenado nesse endereço (preço do produto).  

**Passos principais:**  
1. **Primeiro laço `for`:**  
   - Para cada elemento do vetor, `plist` aponta para `&lista_precos[i]`.  
   - O programa imprime o preço original (`*plist`) e o endereço (`plist`).  
2. **Segundo laço `for`:**  
   - O ponteiro novamente percorre os mesmos endereços.  
   - Para cada valor acessado, calcula o desconto:  
     ```c
     float desconto = *plist - *plist/10;
     ```  
   - O programa mostra o preço com desconto e o endereço de memória.  

**Exemplo de saída:**  
Precos Originais:
50.00|| Endereco: 0x7ffee62c2a20
1499.00|| Endereco: 0x7ffee62c2a24
...

Precos com 10 porcento de Desconto:
45.00|| Endereco: 0x7ffee62c2a20
1349.10|| Endereco: 0x7ffee62c2a24
...

👉 Aqui, os ponteiros foram usados para percorrer o vetor e acessar os preços, mostrando também como aplicar operações sobre os valores **sem usar indexação direta**, apenas com acesso via endereço.

---

## 🔹 Questão 5 – Notas de alunos

**Resumo:**  
O programa armazena as notas de 6 alunos em um vetor (`lista_notas`).  
O objetivo é **inverter a ordem das notas** usando ponteiros, sem depender apenas da indexação tradicional do vetor.

**Uso dos ponteiros no código:**  
- `float *plist_notas;` → ponteiro usado para percorrer o vetor e exibir cada elemento junto com seu endereço.  
- `float *p_inic = lista_notas;` → ponteiro que aponta para o **início** do vetor (primeira nota).  
- `float *p_final = lista_notas + n - 1;` → ponteiro que aponta para o **fim** do vetor (última nota).  

**Passos principais:**  
1. Foi exibida a lista inicial de notas com seus respectivos endereços usando `plist_notas`.  
   - Exemplo: `printf("%.2f|| Endereco: %p", *plist_notas, plist_notas);`
2. Usando um laço `while (p_inic < p_final)`, o programa **trocou os valores apontados por `p_inic` e `p_final`**.  
   - `*p_inic` acessa o valor no início.  
   - `*p_final` acessa o valor no fim.  
   - Esses valores foram trocados entre si.  
3. Depois de cada troca:  
   - `p_inic++` → ponteiro avança para a próxima posição da esquerda.  
   - `p_final--` → ponteiro recua para a posição anterior da direita.  
4. Ao final do processo, o vetor fica invertido, e os novos valores são mostrados junto com seus endereços.

**Exemplo de funcionamento:**  
- Lista inicial: `7.00, 9.00, 10.00, 10.00, 4.00, 6.50`  
- Lista invertida: `6.50, 4.00, 10.00, 10.00, 9.00, 7.00`

👉 Aqui, os ponteiros `p_inic` e `p_final` foram fundamentais para percorrer o vetor **de fora para dentro** e realizar a inversão.

---

## 🔹 Questão 6 – Notas em uma matriz 3x3

**Resumo:**  
O programa armazena as notas de 3 provas de 3 alunos em uma matriz `3x3` (`mat_notas`).  
Usando **apenas ponteiros**, percorre todos os elementos da matriz e também calcula a **soma da diagonal principal**.

**Uso dos ponteiros no código:**  
- `*(*(mat_notas + i) + j)` → essa expressão acessa o elemento da matriz na posição `[i][j]` usando apenas ponteiros:
  - `mat_notas` → representa o endereço da primeira linha.  
  - `mat_notas + i` → avança `i` linhas na matriz.  
  - `*(mat_notas + i)` → aponta para a linha `i`.  
  - `*(mat_notas + i) + j` → avança `j` colunas nessa linha.  
  - `*(*(mat_notas + i) + j)` → acessa o valor armazenado na posição `[i][j]`.  

**Passos principais:**  
1. **Mostrar todas as notas:**  
   - Dois laços `for` percorrem a matriz.  
   - Cada valor é exibido usando `*(*(mat_notas + i) + j)`.  
   - Isso substitui o acesso tradicional `mat_notas[i][j]`.  
2. **Calcular soma da diagonal principal:**  
   - Dentro do duplo `for`, a condição `if (i == j)` garante que apenas os elementos da diagonal sejam somados.  
   - A soma é feita com `soma += *(*(mat_notas + i) + j);`.  

**Exemplo de saída:**  
2 5 6
6 9 10
0 0 5
Soma da Diagonal principal:16

👉 Aqui os ponteiros foram fundamentais para percorrer a matriz inteira **sem usar indexação**, mostrando como navegar em linhas e colunas com aritmética de ponteiros.

---

## 🔹 Questão 7 – Pontuação (matriz 4x4)

**Resumo:**  
O programa utiliza uma matriz `4x4` (`mat_pontos`) para registrar os pontos de **4 jogadores em 4 sets**.  
A partir dessa matriz, várias operações são feitas utilizando **ponteiros** para acessar e manipular os dados.

---

**Uso dos ponteiros no código:**

1. **Mostrar todos os pontos da matriz:**  
   - `*(*(mat_pontos + i) + j)` acessa diretamente `mat_pontos[i][j]` sem usar indexação.  
   - Assim, percorre toda a matriz mostrando os pontos de cada jogador em cada set.

2. **Contar pontos pares e ímpares:**  
   - Ainda com `*(*(mat_pontos + i) + j)`, o programa verifica se o valor é par ou ímpar.  
   - Os contadores `par` e `impar` são atualizados de acordo.

3. **Soma dos pontos de cada jogador:**  
   - Para cada linha (jogador), é criado um ponteiro para o início da linha:  
     ```c
     int *p_linha = mat_pontos[i];
     ```  
   - Com `*(p_linha + j)`, percorre os sets daquele jogador e soma os pontos.

4. **Soma dos pontos por set:**  
   - Para percorrer colunas, o programa acessa cada elemento como:  
     ```c
     *(*(mat_pontos + i) + j)
     ```  
   - Isso permite somar os pontos de todos os jogadores em um mesmo set.

5. **Média de pontos por jogador:**  
   - De novo é usado um ponteiro para cada linha:  
     ```c
     int *p_linha = mat_pontos[i];
     ```  
   - A soma de cada linha é feita com `*(p_linha + j)`, e dividida por 4 para gerar a média.

6. **Regularidade dos jogadores:**  
   - Para cada jogador (linha), o programa encontra o **mínimo e máximo** de pontos usando ponteiros:  
     ```c
     int valor = *(p_linha + j);
     ```  
   - A diferença `max - min` é calculada.  
   - O jogador com a **menor diferença** é considerado o mais regular, e o programa mostra esse resultado.

---

**Exemplo de saída esperada:**

**Pontos dos alunos:**
5 7 8 6
4 6 5 7
3 9 6 8
2 4 7 5

**Pontos pares e impares:**
Pontos pares: 9
Pontos impares: 7

**Soma dos pontos de cada jogador:**
Soma do jogador 1 = 26
Soma do jogador 2 = 22
Soma do jogador 3 = 26
Soma do jogador 4 = 18

**Soma dos Pontos Por SET:**
Soma do SET 1 = 14
Soma do SET 2 = 26
Soma do SET 3 = 26
Soma do SET 4 = 26

**Media de pontos do jogadores:**
Media do jogador 1 = 6.50
Media do jogador 2 = 5.50
Media do jogador 3 = 6.50
Media do jogador 4 = 4.50

**Regularidade dos jogadores:**
Jogador 1 -> min = 5, max = 8, diferenca = 3
Jogador 2 -> min = 4, max = 7, diferenca = 3
Jogador 3 -> min = 3, max = 9, diferenca = 6
Jogador 4 -> min = 2, max = 7, diferenca = 5

**Jogador mais regular: Jogador 1 (diferenca = 3)**

👉 Nesta questão, os ponteiros foram aplicados de várias formas:  
- Para acessar elementos da matriz sem indexação.  
- Para percorrer linhas inteiras usando `int *p_linha`.  
- Para calcular estatísticas (pares/ímpares, soma, média).  
- Para encontrar o jogador mais regular com base em **mínimo e máximo via ponteiros**.

---

## ✅ Conclusão
Em todas as atividades, os ponteiros foram usados para:
- Acessar diretamente o valor e o endereço de variáveis.  
- Percorrer vetores e matrizes com aritmética de ponteiros.  
- Manipular dados sem depender da notação tradicional de índices.  

Isso reforça como os ponteiros são poderosos em C, permitindo acesso direto à memória e maior flexibilidade na manipulação de dados.

---

## 🚀 Como compilar e executar
No terminal, dentro da pasta do projeto:

```bash
gcc main.c -o trabalho
./trabalho

