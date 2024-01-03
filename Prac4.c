#include<stdio.h>
void main(){
	int size;
	printf("Enter Size of 1-D Array A : ");
	scanf("%d",&size);
	int a[size];
	int *p[size];
	int i,j;
	printf("\nEnter Elements : \n");
	for(i=0;i<size;i++){
		printf("Enter Element for A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nOriginal Array : \n");
	for(i=0;i<size;i++){
		printf(" %d ",a[i]);
	}
	printf("\nOdd Elements from Array A : \n");
	for(i=0;i<size;i++){
		if(*p[i]%2!=0){
			a[i]=*p[i];
			printf(" %d ",*p[i]);
		}
	}
}
