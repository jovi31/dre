#include"funcoes.h"

void criarDRE(){
    char op = 's';

    criarArquivo();

    while(op != 'n'){
        inserirItem();
        op = desejaContinuar();
    }
}

void inserirItem(){
    Item umItem;
    FILE* arquivo = abrirArquivo("ab");

    umItem = lerItem();

    fwrite(&umItem, sizeof(Item), 1, arquivo);

    fclose(arquivo);
}

Item lerItem(){
    Item umItem;

    linha();
    printf("\t# CRIAÇÃO DE ITEN");
    linha();
    printf("\n -> Digite o nome do item: ");
    scanf("%[^\n]s", umItem.nome);
    getchar();
    printf("\n -> Digite o tipo do item: ");
    scanf("%[^\n]s", umItem.tipo);
    getchar();
    printf("\n -> Digite o valor do item: ");
    scanf("%f", &umItem.valor);
    getchar();

    return umItem;
}

void criarArquivo(){
    FILE* arquivo = abrirArquivo("w");
    fclose(arquivo);
}
