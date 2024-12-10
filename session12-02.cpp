#include<stdio.h>
void inMang(int arr[], int size){

printf("cac ptu trong mang: ");
for(int i=0;i<size;i++){
	printf("%d, ",arr[i]);
}
printf("\n");
}
int main(){
	int mang[5]={1,2,3,4,5};
	int kichco=sizeof(mang)/sizeof(mang[0]);
	inMang(mang,kichco);
	return 0;
}
