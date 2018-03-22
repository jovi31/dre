#include"funcoes.h"

void deletarArquivo(){
    remove("dados.dat");
    linha();
    printf("\n -> DRE deletada com sucesso!\n");
    linha();
}
