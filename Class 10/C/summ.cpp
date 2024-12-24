#include<stdio.h>
int main() {
int a; int b; int r; int q;
printf("enter two numbers");
scanf("%d%d",&a,&b);
r=a%b;
q=a/b;
printf("remainder is %d",r);
printf("quotient is %d",q);
return 0;
}

