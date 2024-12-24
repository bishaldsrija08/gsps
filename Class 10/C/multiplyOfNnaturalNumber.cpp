#include<stdio.h>
int main(){
	int mul=1;
	for(int i=1;i<=5; i=i+1){
		mul=mul*i;
	}
	printf("%d\t",mul);
	return 0;
}
