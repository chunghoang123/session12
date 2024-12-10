#include<stdio.h>
#include<stdlib.h>
void taoMaTran(int rows,int clows,int maTran[rows][clows]){
	printf("moi nhap gia tri cho ma tran: arr[%d][%d]",rows, clows);
	for(int i=0;i<rows;i++){
		for(int j=0;j<clows;j++){
			printf("nhap phan tu cua hang:  arr[%d][%d]",i+1,j+1);
			scanf("%d",&maTran[i][j]);
		}
	}
}
void inMaTran(int rows,int clows,int **maTran){
	printf("ma tran vua nhap");
	for(int i=0;i<rows;i++){
		for(int j=0;j<clows;j++){
			printf("%d",maTran[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int rows,clows;
	printf("moi nhap hang: ");
	scanf("%d",&rows);
	printf("moi nhap co: ");
	scanf("%d",&clows);
	int maTran[rows][clows];
	taoMaTran(rows,clows,maTran);
	inMaTran(rows,clows,maTran);
	return 0;
}
