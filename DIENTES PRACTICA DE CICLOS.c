/******************************************************************************
DENTADURA PERFECTA HERMANO
ARREGLO BIDIMENSIONAL Y CVICLO 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
char definir_dientes(char dientes[2][16]);
char caries(char dientes [2][16]);
void mostrar_dientes(char dientes [2][16]);


int main()
{
    char dientes[2][16];
    srand(time(NULL));
    definir_dientes(dientes);
    caries(dientes);
    mostrar_dientes(dientes);
    

    return 0;
}

char definir_dientes(char dientes [2][16])
{
    for (char i=0; i<2; i++)
    {
        for (char j=0;j<16;j++)
            dientes[i][j]='O';
    }
}

void mostrar_dientes(char dientes [2][16])
{
    for (char i=0; i<2; i++)
    {
        for (char j=0;j<16;j++)
            printf("%c", dientes[i][j]);
        printf("\n");
    }
}

char caries(char dientes [2][16])
{
    for (char i=0;i<2;i++)
        for (char j=0;j<16;j++)
        if (rand()%11<9)
        dientes[i][j]='O';
        else
        dientes[i][j]='X';
        
        
}








