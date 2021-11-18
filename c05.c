#include<stdio.h>

int main() {
	
	int i,f;
	printf("Entrer la 1 er valeur : ");
	scanf("%d",&i);
		printf("Entrer la 2eme valeur  :  ");
	scanf("%d",&f);
	echanger(i,f);
	return 0;
}

void echanger( int a,int b)
{
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	printf("1 er  valeur  : %d \n ",a);
	printf("2 eme  valeur : %d \n ",b);
}	