#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

#define ROWS 8
#define COLS 8

void Menu_principal();
void desenhar_op();
void back_menu();
int tabuleiro ();
void nome_jogador();
void initBoard();
void showBoard();

typedef char ChessBoardType[ROWS][COLS];


int main()
{
    Menu_principal();
}


/**
* Função para Criar MEnu Principal
*/

void Menu_principal()
{

    char opcao;
    textbackground(BLUE);
    textcolor(WHITE);
    clrscr();
    desenhar_op();
    opcao = getch();
    switch(opcao)
    {
        case 'J':
        case 'j':
        nome_jogador();
        ChessBoardType board;
        initBoard(board);
        showBoard(board);



        case 'O':
        case 'o':


        case 'S':
        case 's':
            exit;
            break;

        default :
            printf("\n\n Opção Invalida.\n\n Deseja Voltar ao menu Inicial (S/N)");
            back_menu();
    }

}

/**
* Função que Desenha opções de jogo
*/

void desenhar_op()
{
    gotoxy(28,5);
    printf("Bem Vindo ao Jogo de Xadrez\n\n\n\n\n");
    textcolor(WHITE);
    gotoxy(26,10);
    printf("- - -   Opcoes de Jogo    - - -");
    gotoxy(32,14);
    printf("[J]- player vs player");
    gotoxy(32,16);
    printf("[O]- opcoes do jogo");
    gotoxy(32,18);
    printf("[s]- Sair do jogo ");
}

/**
* Função de Voltar ao menu inicial
*/

void back_menu()
{
    char op;
    op = getch();
    switch(op)
    {
        case 'S':
        case 's':
            clrscr();
            system("PAUSE");
            Menu_principal();
            break;

        case 'N':
        case 'n':
            exit;
            break;

            default:
                printf("\n Opção invalida. O Programa vai encerrar!\n\n");
                exit;
                break;
    }
}



/**
* Função Que cria peças do Tabuleiro
*/

void initBoard(ChessBoardType cb) {
        int col;
        char ch;

        for(col=0; col<COLS; col++) {
                if (col==0 || col==7)
                {
                     ch='t';
                }
                else if (col==1 || col==6)
                {
                    ch='c';
                }
                else if (col==2 || col==5)
                {
                    ch='b';
                }
                else if (col==3)
                {
                    ch='d';
                }
                else
                {
                    ch='r';
                }

                cb[0][col] = ch;
                cb[1][col] = 'p';
                cb[2][col] = cb[3][col] = cb[4][col] = cb[5][col] = ' ';
                cb[6][col] = 'P';
                cb[7][col] = ch - 32; // Maiusculas
        }
}


/**
* Função Que mostra o Tabuleiro
*/

void showBoard(ChessBoardType cb) {
        int row, col;
        printf(" +---+---+---+---+---+---+---+---+\n");
        for(row=0; row<ROWS; row++) {
                printf(" | ");
                for(col=0; col<COLS; col++) {
                        printf("%c | ", cb[row][col]);
                }
                printf("\n +---+---+---+---+---+---+---+---+\n");
        }
}


/**
* Função de Criar o Nome dos Jogadores
*/

void nome_jogador()
{
    char P1[25];
    char P2[25];
    clrscr();
    printf("\n Introduza o Nome do Primeiro jogador.\n");
    gotoxy(2,4);
    gets(P1);
    printf("\n Introduza o Nome do Segundo jogador.\n");
    gotoxy(2,8);
    gets(P2);
    clrscr();
}