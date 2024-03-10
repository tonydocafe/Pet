#include "pet.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


//Funçoes para caracterizar e para consultar atributos.
void criarPet(struct Pet *pet, char nome[]) {
    strcpy(pet->nome, nome);
    pet->fome = 5;
    pet->energia = 5;
    pet->diversao = 5;
}
void exibirNivel(struct Pet *pet) {
    printf("\nEstado atual do pet %s:\n", pet->nome);
    printf("Fome: %d\n", pet->fome);
    printf("Energia: %d\n", pet->energia);
    printf("Diversão: %d\n", pet->diversao);
}




// Funcoes para manipular os atributos 
void alimentar(struct Pet *pet) {
    pet->fome -= 3;
    pet->diversao --;
    printf("\nVocê alimentou %s!\n", pet->nome);
}
void brincar(struct Pet *pet) {
    pet->diversao += 2;
    pet->energia -= 2;
    printf("\nVocê brincou com %s!\n", pet->nome);
}
void descansar(struct Pet *pet) {
    pet->energia += 5;
    pet->fome++;
    printf("\n%s dormiu e recuperou energia!\n", pet->nome);
}





// Funçao para a interaçao 
void menu(struct Pet *pet) {
    char opcao;
    while (1) {

// Condiçoes para limitar o nivel de atributos a favor do Pet.
        if (pet->energia >= 10)
            pet->energia = 10;
        
        if (pet->diversao >= 10)
            pet->diversao = 10;
        
        if (pet->fome <= 0) 
            pet->fome = 0;
        
//Condiçao para quando atingir o limite de atributos contra o Pet. (encerra o programa) 
        if (pet->fome >= 10 || pet->diversao <= 0 || pet->energia <= 0) {
            printf("mesmo assim %s fugiu, fique atento na proxima vez!\n", pet->nome);
            break;
        }
        
//Condiçao para o aviso caso algum atributo contra o Pet fique proximo do limite  
        if (pet->fome >= 8  || pet->diversao <= 2 || pet->energia <= 2) {
            printf("Fique atento com %s ele pode querer fugir!\n", pet->nome);
        }

// Interaçao comum do usuario         
        printf("\nO que deseja fazer?\n");
        printf("B - Brincar com %s\n", pet->nome);
        printf("A - Alimentar %s\n", pet->nome);
        printf("E - Estado Atual de %s\n", pet->nome);
        printf("D - Descansar com  %s\n", pet->nome);
        printf("S - Sair\n");
        printf("Escolha: ");
        scanf(" %c", &opcao);
//Escolhas do usuario
        switch (opcao) {
            case 'B':
            case 'b':
                brincar(pet);
                break;
            case 'A':
            case 'a':
                alimentar(pet);
                break;
            case 'D':
            case 'd':
                descansar(pet);
                break;
            case 'E':
            case 'e':
                exibirNivel(pet);
                break;
            case 'S':
            case 's':
                printf("\nVocê decidiu sair.\n");
                exit(0);
            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }
    }
}
