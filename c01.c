#include <stdio.h>

int main (){

    int n;  //  le nombre  totale de ligne
    printf("entre un nombre de ligne : ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)         //i pour afiche le  culumérotage de ligne 
    {
        for (int k = 1; k <= n-i; k++)  // k pour les espases
        {
            printf(" ");
        }
           for (int j = 1; j<=i*2-1;j++) // j pour les etoiles 
           printf("*");
     printf("\n");
    }
    return 0;
}



