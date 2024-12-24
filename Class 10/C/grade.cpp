#include<stdio.h>
int main(){
	float g;
	abc:
	printf("Enter a percentage");
	scanf("%f", &g);
	if(g>3.6 && g<=4){
		printf("A+");
	}
	else if(g>3.2 && g<3.6){
		printf("A");
	}
	else if(g>2.8 && g<3.2){
		printf("B+");
	}
	else if (g>2.4 && g<2.8){
		printf("B");
	}
	else if(g>2.0 && g<2.4){
		printf("C+");
	}
		else if(g>1.6 && g<2.0){
		printf("C");
	}
		else if(g>0 && g<1.6){
		printf("D+");
	}
	else
	{
		printf("Invalid Input");
		printf("Please enter a number btn 0 - 4\n");
		goto abc;
	}
	return 0;
}
