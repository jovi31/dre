#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct{
    char nome[30], tipo[30];
    float valor;
}Item;

// PROTOTIPACAO



// criar.c



// editar.c



// exibir.c



// remover.c



// extras.c

int menuInicial();
FILE *abrirArquivo(char modo[]);
void linha();
void pausar();
void limpaTela();
void criaEspacosPadrao(char *palavraInicial, char *espacos, int tamanhoLinha);
void stringMaiusculo(char *nome, int tamanho);
void stringMinusculo(char *nome, int tamanho);

#endif
