#include <stdio.h>

int main()
{ 
    int i,a;
   printf("entrer i \n");
   scanf("%d",&i);
   printf("entrer a \n");
   scanf("%d",&a);
   printf(" la somme de %d + %d c'est : %d",i,a,somme(i,a));
    return 0;
}
int somme( int a ,int i)
{
  return a+i;
}

