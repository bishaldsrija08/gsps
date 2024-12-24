#include<stdio.h>
#include<math.h>
int main(){
	for(int i=1;i<=10; i=i+1){
		int sqr = pow(i,3);
		printf("\t%d",sqr);
	}
	return 0;
}
