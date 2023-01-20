#include<stdio.h>
#include<conio.h>

main(){
int a;
int b;
int c;
clrscr();

printf("enter value of A:  ");
scanf("%d",&a);

printf("enter value of b: ");
scanf("%d",&b);

c=a;
a=b;
b=c;

printf("after swap A:  %d\n",a);
printf("after swap B:  %d\n",b);
getch();


}