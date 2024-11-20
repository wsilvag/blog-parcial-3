/******************************************************************************
BUSCAMINAS PRO HERMANO

VARIABNLES, PRINFT Y SCANF, SENTENCIA CONDICIONAL TY CICLO 
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void iniciar_tablero(char tablero[9][9]);
void mostrar_tablero(char tablero[9][9]);
void poner minas (char tablero[9][9]);
int main()
{
    char tablero[9][9];
    iniciar_tablero(tablero);
    mostrar_tablero(tablero);
    ponerminas
    
    return 0;
}

void iniciar_tablero(char tablero[9][9]){
    for (int i=0; i<9; i++){
        for (int j=0; j<9;j++){
            tablero[i][j]='-';
        }
        
    }
    
}

void mostrar_tablero(char tablero[9][9]){
    for (int i=0; i<9; i++){
        for (int j=0; j<9;j++){
            printf("%c", tablero[i][j]);
        }
        printf("\n");
    }
}

void poner minas (char tablero[9][9]){
    tablero[i][j]=MINA;
}
    

