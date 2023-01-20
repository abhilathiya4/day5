#include<stdio.h>
#include<conio.h>

main(){

	int a;
	int k;
	clrscr();

	printf("enter value of A:  ");
	scanf("%d",&a);

	printf("enter value of K:  ");
	scanf("%d",&k);
	a=a+k;
	k=a-k;
	a=a-k;

	printf("value of A after:   %d\n",a);

	printf("value of K after:   %d",k);


	getch();


}