#include <stdio.h>

int main (){

    int num , x;
         printf("le tableau de multiplication de ce nombre : ");
            scanf("%d",&num);
       for (x = 1; x <= 10; x++)
       {
           printf("%d * %d : %d\n",num,x,num*x);
       }
       
    return 0;
}