/******************************************************************************
?: es un 
condicional

arreglo: elementos del mimso tipo

for i igual a cero, i menor que tope, i ++
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
void pinta_laberinto(int L[10][6]);
int main()
{
    int x;
    char tecla;
    int datos[80]={2,1};
    int lab[10][6]={{0},
                     {0,0,1,1,1,0},
                     {0,0,1,0,1,0},
                     {0,0,1,0,1,0},
                     {0,0,1,0,1,0},
                     {0,0,1,0,1,0},
                     {0,0,1,0,1,1},
                     {0,0,1,0,0,0},
                     {8,1,1,0,0,0},
                     {0,0,0,0,0,0},};
    
    int i_mono=0,j_mono=8;
    do{
        pinta_laberinto(lab);
        printf("Escribe w,a,s,d: ");                    
        tecla=tolower(getchar());
        lab[j_mono][i_mono]=1;
        switch(tecla)
        {
            case 'a':if (lab[j_mono][i_mono-1]=1)
                    i_mono--;
                    break;
            case'w': if (lab[j_mono-1][i_mono]=1)
                    j_mono--;
                    break;
            case 'd':if (lab[j_mono][i_mono+1]==1)
                    i_mono++;
                    break;
            case's': if (lab[j_mono+1][i_mono]==1)
                    j_mono++;
                    break;
        }
        lab[j_mono][i_mono]=8;
    
     }while(! (i_mono==5 && j_mono==5)  );
    return 0;
}
    
    void pinta_laberinto(int lab[10][6])
    {
        for (int j=0;j<10;j++)
        {
            for (int i=0; i<6;i++)
            {
                if(lab[j][i]==0)
                    printf("0");
                else if (lab[j][i]==8)
                    printf("8");
                else
                    printf("*");
            }
            printf("\n");
        }  
    }
