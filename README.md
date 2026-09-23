# Calculadora de linha de comando em C

Exercício de programação em C com soma, subtração, multiplicação, divisão e repetição do menu. A divisão por zero é tratada com uma mensagem de erro.

## Compilar e executar

```bash
gcc -std=c11 -Wall -Wextra calculadora.c -o calculadora
./calculadora
```

No Windows, execute `calculadora.exe`. O programa contém `system("pause")`, específico do Windows; em Linux e macOS pode aparecer `pause: not found` após o encerramento. Remover essa chamada é recomendado para portabilidade.

## Limitações

A entrada usa `scanf` para números inteiros e não trata entradas não numéricas. Este repositório é um exercício introdutório; a divisão produz resultado com duas casas decimais.
