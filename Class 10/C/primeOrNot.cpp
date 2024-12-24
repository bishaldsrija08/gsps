#include<stdio.h>
int main(){
	int a,i;
	int div=2;
	int counter=0;
	printf("Enter any number");
	scanf("%d", &a);
	for(i=1;i<=a;i++){
		if(a%i==0){
		counter=counter+1;	
		}
	}
	if(counter>div){
		printf("%d is not a prime",a);
	}else{
		printf("%d is a prime", a);
	}
	return 0;
}
