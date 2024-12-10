#include<stdio.h>
int maxNumber(int arr[], int size){
	if(size<=0){
		printf("mang ko hop le \n");
		return -1;
	}
	int max =arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
} 
int main(){
	int mang[5]={1,2,3,4,5};
	int kichCo=sizeof(mang)/sizeof(mang[0]);
	int lonNhat=maxNumber(mang,kichCo);
	if(lonNhat!=-1){
		printf("so lon nhat trong mang la: %d",lonNhat);
	}
	return 0;
}
