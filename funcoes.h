#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct{
    char nome[30], tipo[30];
    float valor;
}Item;

// PROTOTIPACAO



// criar.c

void criarDRE();
void inserirItem();
Item lerItem();
void criarArquivo();

// editar.c



// exibir.c



// remover.c

void deletarArquivo();

// extras.c

int menuInicial();
FILE *abrirArquivo(char modo[]);
void linha();
void pausar();
char desejaContinuar();
void limpaTela();
void criaEspacosPadrao(char *palavraInicial, char *espacos, int tamanhoLinha);
void stringMaiusculo(char *nome, int tamanho);
void stringMinusculo(char *nome, int tamanho);

#endif
