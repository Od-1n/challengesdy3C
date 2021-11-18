#include <stdio.h>

int main ()
{
int number , i , count = 0 ;
printf   ("entrer un nombre  : \n");
scanf ("%d", &number);

for (i=1 ; i<= number ; i++)
{
if ( number % i == 0 )
{
    count++ ;

}

}

if (count == 2 )
printf("le nombre %d est premier  " , number);

else 
printf("le nombre  %d ce n'est pas premier " , number);

return 0;
}

