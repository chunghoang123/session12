#include<stdio.h>
	int sum(int a,int b){
		return a+b;
	}
int main(){
	int num1, num2, total ;
	printf("moi nhap num1: ");
	scanf("%d",&num1);
	printf("moi nhap num2: ");
	scanf("%d",&num2);
	total=sum(num1,num2);
	printf("tong bang: %d",total);
	return 0;
}
