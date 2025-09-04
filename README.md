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

## 🚀 Como compilar e executar
No terminal, dentro da pasta do projeto:

```bash
gcc main.c -o trabalho
./trabalho

