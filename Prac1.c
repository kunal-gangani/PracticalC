/*
Q.1 WAP to print all odd numbers from a given range using UDF.
Output:
Enter Number 1 : 1
Enter Number 2 : 10
 1  3  5  7  9
*/
#include<stdio.h>
int Odd(int ans){
	return ans;
}
void main(){
	int n1,n2;
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");	
	scanf("%d",&n2);
	while(n1<n2){
		if(n1%2!=0){
			printf(" %d ",Odd(n1));
		}
		n1++;
	}
}
