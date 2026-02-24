//Jogo War

// Objetivo: Cadastrar territrios utilizado estrutura de dados composta '' struct".

# include <stdio.h>
# include <string.h>

// Definição da estrutura struct
struct territorio{
    char nome[30];
    char cor[10];
    int tropas; 
};  

// Função para limpar o buffer  de entrada.
void limparbufferentrada() {
    int c;
    while (( c = getchar()) != '\n' && c != EOF);
    
}

//Função principal (main).
int main (){
    struct territorio listaterritorios[5];
    int i;

    printf("=== CADASTRO DE TERRITORIOS - JOGO WAR (Nivel 1) ===\n\n");

    //Laço principal, entrada de dados.
    for (i = 0; i < 5; i++) {
     printf("Registro do %d territorio:\n", i + 1);

        printf("Nome do territorio: ");
        // Usamos %[^\n] para permitir nomes com espaços
        // O " " antes do % limpa o buffer do teclado de enters anteriores
        scanf(" %[^\n]s", listaterritorios[i].nome);

        printf("Cor do exercito: ");
        scanf(" %[^\n]s", listaterritorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &listaterritorios[i].tropas);

        printf("-------------------------------\n");
    
    } 
    
    // Exibição dos dados cadastrados
    printf("\n=== RELATORIO DE TERRITORIOS CADASTRADOS ===\n");
    
    for (i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);
        printf(" > Nome:   %s\n", listaterritorios[i].nome);
        printf(" > Cor:    %s\n", listaterritorios[i].cor);
        printf(" > Tropas: %d\n", listaterritorios[i].tropas);
    }

    printf("\n==========================================\n");
    printf("Cadastro concluido com sucesso!\n");

    return 0;
    

    }

    