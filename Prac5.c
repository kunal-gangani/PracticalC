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
