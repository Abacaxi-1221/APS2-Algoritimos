# APS2-Algoritimos

## 📋 Breve Descrição das Atividades

Este repositório contém uma coleção de programas desenvolvidos em C++ durante o aprendizado de algoritmos e programação estruturada. Os exercícios abordam conceitos fundamentais como loops (for), vetores, matrizes, modularização e structs, progressivamente aumentando em complexidade.

## 📁 Estrutura do Repositório

O repositório está organizado em pastas temáticas, cada uma abordando um conceito específico:

### **04-repeticao-for/**
Exercícios sobre laços de repetição (`for`). Inclui programas para calcular sequências, somas, fatorials e aplicações matemáticas básicas.
- `fatorial.cpp` - Cálculo de fatorial
- `tabuada.cpp` - Tabuada de multiplicação
- `soma_impares.cpp` - Soma de números ímpares
- `par_impar.cpp` - Verificação de paridade

### **05-vetores/**
Exercícios com vetores (arrays unidimensionais). Aborda busca, ordenação, média, identificação de elementos especiais.
- `soma_vetor.cpp` - Soma de elementos
- `maior_posicao.cpp` - Encontrar maior valor e sua posição
- `media_pares.cpp` - Média de números pares
- `aprovados.cpp` - Filtro de aprovados por nota

### **06-matrizes/**
Exercícios com matrizes (arrays bidimensionais). Operações como soma, busca na diagonal e manipulação de elementos.
- `soma_matrizes.cpp` - Soma de duas matrizes
- `soma_linhas.cpp` - Soma de elementos por linha
- `diagonal_negativos.cpp` - Operações com diagonal principal
- `acima_diagonal.cpp` - Trabalhar com elementos acima da diagonal

### **07-modularizacao/**
Exercícios aplicando conceitos de modularização com funções. Refatoração de programas anteriores para melhor organização.
- `medidas_mod.cpp` - Cálculos com modularização
- `pagamento_mod.cpp` - Cálculo de pagamento com funções
- `retangulo_mod.cpp` - Operações com retângulos utilizando funções

### **08-structs/**
Exercícios utilizando estruturas de dados (structs). Agrupamento de dados relacionados.
- `alturas_struct.cpp` - Armazenar dados de alturas de pessoas
- `funcionarios_struct.cpp` - Dados de funcionários
- `idades_struct.cpp` - Armazenar idades e informações
- `notas_struct.cpp` - Registro de notas e alunos

## 🚀 Instruções Básicas de Execução

### Pré-requisitos
- Compilador C++ instalado (g++, clang ou similar)
- Terminal ou prompt de comando

### Compilação

Para compilar um arquivo C++:
```bash
g++ -o nome_programa arquivo.cpp
```

Exemplo:
```bash
g++ -o fatorial 04-repeticao-for/fatorial.cpp
```

### Execução

Após compilar, execute o programa com:

**No Linux/WSL:**
```bash
./nome_programa
```

**No Windows (cmd/PowerShell):**
```bash
nome_programa.exe
```

Exemplo completo:
```bash
g++ -o fatorial 04-repeticao-for/fatorial.cpp
./fatorial
```

### Compilação e Execução Direta (Linux/WSL)
Você pode compilar e executar em um único comando:
```bash
g++ -o programa arquivo.cpp && ./programa
```

### Dicas
- Cada pasta contém exercícios independentes
- Alguns programas podem solicitar entrada do usuário durante a execução
- Para sair de um programa em execução, pressione `Ctrl+C`