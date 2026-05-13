# miniature-calculator

# 🧮 Calculadora em C
 
Calculadora de linha de comando desenvolvida em **linguagem C**, com suporte às quatro operações aritméticas básicas e execução em loop.
 
---
 
## 📋 Funcionalidades
 
- **Soma** de dois números inteiros
- **Subtração** de dois números inteiros
- **Multiplicação** de dois números inteiros
- **Divisão** com resultado em ponto flutuante (2 casas decimais)
- **Proteção contra divisão por zero**
- **Loop interativo** — o usuário decide se quer realizar outra operação
---
 
## 🚀 Como compilar e executar
 
### Pré-requisitos
 
- Compilador C (GCC recomendado)
- Terminal ou Prompt de Comando
### Compilando
 
```bash
gcc calculadora.c -o calculadora
```
 
### Executando
 
```bash
# Linux / macOS
./calculadora
 
# Windows
calculadora.exe
```
 
---
 
## 🖥️ Exemplo de uso
 
```
Menu para operacao
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
Informe o primeiro numero INTEIRO: n1 = 10
Informe o segundo numero INTEIRO: n2 = 3
Escolha uma opcao (1, 2, 3, 4): 4
O resultado da divisao = 3.33
Deseja repetir o programa? (s/n): n
Fim do programa!
```
 
---
 
## 📐 Estrutura do código
 
```
calculadora.c
│
├── Declaração de variáveis
│   ├── numero1, numero2  → operandos inteiros
│   ├── resultado         → resultado inteiro (soma, subtração, multiplicação)
│   ├── result_div        → resultado float (divisão)
│   ├── opcao             → opção do menu
│   └── repetir           → controle do loop (char)
│
├── Loop principal (do...while)
│   ├── Exibição do menu
│   ├── Leitura dos operandos e da opção
│   ├── switch/case → executa a operação escolhida
│   │   ├── case 1 → Soma
│   │   ├── case 2 → Subtração
│   │   ├── case 3 → Multiplicação
│   │   ├── case 4 → Divisão (com verificação de divisão por zero)
│   │   └── default → opção inválida
│   └── Pergunta se deseja repetir
│
└── Encerramento do programa
```
 
---
 
## ⚠️ Observações
 
- Os operandos devem ser **números inteiros**. Entradas com ponto flutuante podem causar comportamento inesperado.
- O programa utiliza `system("pause")` que é específico do **Windows**. Em ambientes Linux/macOS, essa linha pode ser removida ou substituída por:
  ```c
  getchar();
  ```
- O espaço antes de `%c` no `scanf(" %c", &repetir)` é intencional — ele descarta o `\n` deixado no buffer pelo `scanf` anterior.
---
 
## 🛠️ Possíveis melhorias
 
- Suporte a números de ponto flutuante como entrada
- Validação de entrada (tratar caracteres não numéricos)
- Histórico das operações realizadas
- Exportar resultado para arquivo `.txt`
---
 
## 📄 Licença
 
Projeto de uso educacional. Sinta-se livre para usar, modificar e distribuir.
