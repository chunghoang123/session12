#include<stdio.h>
int timUCLN(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main(){
	int num1,num2;
	printf("moi nhap num1: ");
	scanf("%d",&num1);
	printf("moi nhap num: ");
	scanf("%d",&num2);
	int ucln=timUCLN(num1,num2);
	printf("UCLN cua la: %d",ucln);
	return 0;
}
