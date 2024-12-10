#include<stdio.h>
#include<stdbool.h>
bool perfectNumberCheck(int a){
	if(a<=0){
		return false;
	}
	int  totalEstimate=0;
	for(int i=1;i<=a/2;i++){
		if(a%i==0){
			totalEstimate+=i;
		}
	}
	return totalEstimate==a;
}
int main(){
	int num1,num2;
	printf("moi nhap num1: ");
	scanf("%d",&num1);
	printf("moi nhap num2: ");
	scanf("%d",&num2);
	if(perfectNumberCheck(num1)){
		printf("la so hoan hoa\n");
	}else{
		printf("ko phai la so hoan hoa\n");
	}
	if(perfectNumberCheck(num2)){
		printf("la so hoan hoa\n");
	}else{
		printf("ko phai la so hoan hoa\n");
	}
	
	return 0;
}
