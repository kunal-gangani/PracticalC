/*
Q.5 Write a Program to print the below pattern using nested for loop.
A
B 1 
C 2 D
E 3 F 4
G 5 H 6 I.
	*/
#include<stdio.h>
void main(){
	int i,j,k=1;
	char a='A';
	for(i=5;i>=1;i--){
		for(j=i;j<6;j++){
			if(j%2==0){
				printf(" %d ",k++);
			}else{
				printf(" %c ",a++);
			}
		}
		printf("\n");
	}
}
