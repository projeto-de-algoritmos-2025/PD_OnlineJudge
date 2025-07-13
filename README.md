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

### 🔗 [218: The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/description/)
 Resumo: Dado uma lista de prédios (com início, fim e altura), determinar os pontos-chave do contorno do skyline (horizonte da cidade) visto de longe, removendo sobreposições e mantendo apenas os pontos onde a altura muda.

- Nível de dificuldade: Difícil

### 🧠 Algoritmo utilizado: Adaptação do par de pontos mais próximos. 

Divide os prédios ao meio recursivamente e faz merge de dois skylines mantendo a maior altura em cada x, evitando pontos redundantes.

---

## Screenshots
- Problema 218
<img width="734" alt="621" src="screenshots/218.png">

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
