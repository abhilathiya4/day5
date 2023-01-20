#include<stdio.h>
#include<conio.h>

main(){
	int a;
	int b;
	int c;

	clrscr();

	printf("enter value of A:  ");
	scanf("%d",&a);

	printf("enter value of B: ");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;

	printf("value of A after swap:  %d\n",a);
	printf("value of B after swap:  %d",b);

	getch();




}