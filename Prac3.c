/*
Q.3 Write all leap years from a given range into a text file.
	*/
#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter the starting Year : ");
	scanf("%d",&n1);
	printf("Enter the ending Year : ");
	scanf("%d",&n2);
	FILE *p="Leap.txt,w";
	while(n1<n2){
		if(n1%4==0 || n1%100==0 || n1%400==0){
			fprintf(" %d ",p);
		}
		n1++;
	}
}
