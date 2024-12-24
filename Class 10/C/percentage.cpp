#include<stdio.h>
int main(){
	float p;
	abc:
	printf("Enter a percentage");
	scanf("%f", &p);
	if(p>=80 && p<=100){
		printf("Dis");
	}
	else if(p>=60 && p<80){
		printf("1st div");
	}
	else if(p>=50 && p<60){
		printf("2nd div");
	}
	else if (p>=40 && p<50){
		printf("3rd div");
	}
	else if(p>=0 && p<40){
		printf("fail");
	}
	else
	{
		printf("Invalid Input");
		printf("Please enter a number btn 0 - 100\n");
		goto abc;
	}
	return 0;
}
