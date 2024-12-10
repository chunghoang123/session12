#include<stdio.h>
long long factorial(int a){
if(a<0){
	printf("la so am");
	return -1;
}
long long giaiThua=1;
for(int i=1;i<=a;i++){
	giaiThua*=i;
}
return giaiThua;
}
int main(){
	int number;
	printf("moi nhap so nguyen: ");
	scanf("%d",&number);
	long long result = factorial(number);
	if(result!=-1){
		printf("gia thua la: %10d",result);
	}
	return 0;
}
