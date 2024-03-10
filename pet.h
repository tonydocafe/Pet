#ifndef PET_H
#define PET_H
//A estrura do Pet formada por pelo nome e os niveis de seus atributos 
struct Pet {
    char nome[50];
    int fome;
    int energia;
    int diversao;
};

//Todas as funçoes estao recebendo a estrutura Pet 
void criarPet(struct Pet *pet, char nome[]);
void exibirNivel(struct Pet *pet);
void alimentar(struct Pet *pet);
void brincar(struct Pet *pet);
void descansar(struct Pet *pet);
void menu(struct Pet *pet);

#endif 
