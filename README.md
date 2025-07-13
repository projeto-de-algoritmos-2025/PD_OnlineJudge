# Lista de Exercícios de um Juiz Online Sobre Programação Dinâmica

**Número da Lista**: 5<br>
**Conteúdo da Disciplina**: Programação DInâmica<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 21/1031584  |  Ana Letícia Melo Pereira |
| 20/0073184 |  Mateus Fidelis Marinho Maia |

## Sobre 
Para desenvolver o conteúdo abordado no tópico de Programação Dinâmica, a dupla selecionou alguns exercícios em um juiz online - o LeetCode -, sendo eles, de nível médio ou difícil. Para obter mais informações sobre os enunciados propostos, basta clicar no link que aparece no título de cada um.

### 🔗 [322. Coin Change]([https://leetcode.com/problems/the-skyline-problem/description/](https://leetcode.com/problems/coin-change/description/))
 Resumo: O problema Coin Change (LeetCode 322) pede o menor número de moedas de valores disponíveis necessárias para totalizar exatamente um valor amount, retornando -1 se não for possível. A ideia é calcular, de forma eficiente, a menor quantidade de moedas para formar qualquer valor até amount, considerando que cada moeda pode ser usada quantas vezes forem necessárias.

- Nível de dificuldade: Médio

### 🧠 Algoritmo utilizado:  

A solução utiliza programação dinâmica top-down com memoization, implementada por uma função recursiva que tenta todas as possibilidades de moedas para subtrair do valor restante (rem). Se rem chegar a zero, significa que o valor foi formado, e retorna zero; se ficar negativo, retorna -1, indicando impossibilidade. Para cada chamada, o menor número de moedas encontrado é armazenado em um dicionário (memo) para evitar recomputações. Ao final, a função retorna a menor quantidade de moedas para amount ou -1 caso não exista combinação possível. Essa abordagem explora a característica de subproblemas sobrepostos e optimal substructure, reduzindo a complexidade do problema por meio do cache de resultados parciais.

---

## 🔗 [1143. Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/)
Resumo: O problema Longest Common Subsequence (LeetCode 1143) pede o tamanho da maior subsequência comum entre duas strings dadas, ou seja, a maior sequência de caracteres que aparece em ambas as strings na mesma ordem, mas não necessariamente de forma contígua. Este problema é clássico em programação dinâmica e aparece frequentemente em bioinformática e comparação de textos, sendo diretamente relacionado ao tópico de sequence alignment.

- Nível de dificuldade: Médio

### 🧠 Algoritmo utilizado:  
A solução utiliza programação dinâmica bottom-up, construindo uma matriz dp onde dp[i][j] representa o tamanho da maior subsequência comum entre os primeiros i caracteres de text1 e os primeiros j caracteres de text2. Se os caracteres atuais das duas strings são iguais, incrementa-se em 1 o valor da célula correspondente ao subproblema anterior (dp[i-1][j-1]). Caso contrário, toma-se o máximo entre ignorar o caractere atual de text1 ou de text2. Ao final, o valor em dp[m][n] fornece o tamanho da maior subsequência comum. Essa abordagem explora a característica de subproblemas sobrepostos e optimal substructure, reduzindo a complexidade para 𝑂(𝑚 × 𝑛), sendo eficiente mesmo para entradas grandes.

## Screenshots
- Problema 322
<img width="734" alt="621" src="screenshots/322.png">

- Problema 1143
<img width="734" alt="621" src="screenshots/1143.png">

## Instalação 

Linguagens: C e Python
Pré-requisitos: Compilador GCC, Python 3.4 

## 1. Clone o repositório 

```bash
git clone https://github.com/projeto-de-algoritmos-2025/Grafos1-OnlineJudge.git
```

### 2. Compile o programa

Em C:
```bash
gcc -o nome_do_arquivo.c nome_do_executável  
./nome_do_executável
```

Em Python:
```bash
python arquivo.py
```

## Uso 
Para aplicar os casos de teste (in e out), basta acessar o link referente ao exercício no LeetCode e inserí-los no prompt de comando, também é possível gerar novos casos de teste, desde que cumpram os requisitos do exercício em questão.

## Outros 
A apresentação da entrega pode ser visualizada [aqui]().
