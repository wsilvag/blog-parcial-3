/******************************************************************************
PARES DE CADENA 12 
*******************************************************************************/
#include <stdio.h>

int main()
{
    int dato, par[12], num, i;
    char panial[3];
    float prom[5];
    num = 2;
    panial[1]='a';
    for(i=0;i<12;i++)
    {
        par[i] = num;
        num=num+2;
        panial[i] = 'a';
    }
    
     for(i=0;i<12;i++)
    {
        printf("%i\n", par[i]);
        printf("%c\n", panial[i]);
    }
    
    
    
    return 0;
}