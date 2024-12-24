 #include<stdio.h>
int main(){
	int n,fact=1;
	printf("Enter a number");
	scanf("%d",&n);
	for(int i=1;i<=n; i=i+1){
		fact=fact*i;
	}
			printf("\t%d",fact);
			return 0;
}
