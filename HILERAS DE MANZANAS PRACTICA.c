/******************************************************************************

HILERAS DE MANZANAZ

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float hileras(int manzanos[200]);
int acumulador;

int main()
{
    int manzanos[200];
    srand(time(NULL));
    hileras(manzanos);
    printf("%f", hileras(manzanos));
    return 0;
}

float hileras(int manzanos[200])
{
    int acumulador=0;
    for (int i=0;i<200;i++){
        manzanos[i]=rand()%3+3;
        acumulador=acumulador+manzanos[i];
        
    }
    return acumulador/200;
}



