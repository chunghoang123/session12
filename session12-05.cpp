#include<stdio.h>
bool primeNumberTest(int a){
	if(a<=1){
		return false;
	}
	for(int i =2;i*i<=a;i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int num1,num2;
	printf("moi nhap num1: ");
	scanf("%d",&num1);
	printf("moi nhap num2: ");
	scanf("%d",&num2);
	if(primeNumberTest(num1)){
		printf("%d la so nguyen to\n",num1);
	}else{
		printf("ko phia so nguyen to\n");
	}
	if(primeNumberTest(num2)){
		printf("%d la so nguyen to\n",num2);
	}else{
		printf("ko phia so nguyen to\n");
	}
	return 0;
}
