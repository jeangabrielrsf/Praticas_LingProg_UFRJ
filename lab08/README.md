# Trabalho Avaliativo 3 - Linguagens de Programação

O trabalho consiste em um catálogo de filmes. Neste programa, trabalhamos a ideia de operadores sobrecarregados para realizar as operações.

## Pré-Requisitos

- Ter o compilador g++ instalado.

## Instalação / Compilação

1. Clonar o repositório para o seu computador
2. Na pasta raíz, compilar o programa utilizando o comando make do Makefile:

```bash
make
```

3. Executar o arquivo executável com o comando:

```bash
./executeCatalogo
```

## Como Utilizar

O programa apresenta um menu principal contendo 7 opções numéricas. Digitar o número desejado e apertar enter.
OBS: Algumas opções contém sub-menus para que o usuário escolha alguma opção para imprimir na tela.

Operações possíveis:

1. Mostrar catálogo de filmes;
2. Inserir filme no catálogo;
3. Remover filme do catálogo;
4. Buscar filme no catálogo;
5. Editar informações de um filme;
6. Mostrar filme mais bem avialiado;
7. Sair do programa

Ao finalizar o programa, o catálogo é armazenado em um arquivo texto chamado "catalogo.txt". Na próxima execução do programa, o catálogo salvo anteriormente estará disponível.

```bash
make clean
```

### Autor

Jean Gabriel Frusca
