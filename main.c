#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pet.h"

// Chamadas e declaraçoes
int main() {
    struct Pet pet;
    
    char nome[50];

    printf("Digite o nome do seu animal de estimação: ");
    
    scanf("%s", nome);
    
    criarPet(&pet, nome);
    
    menu(&pet);
    
    return 0;
}
