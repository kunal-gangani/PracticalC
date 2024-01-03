/*
Q.2 WAP to find a cube of all elements from a given 2D array.
Output:
Enter the size of Rows : 3
Enter the Size of Columns : 3

Enter Elements for Array A :
Enter Element for A[0][0] : 1
Enter Element for A[0][1] : 2
Enter Element for A[0][2] : 3

Enter Element for A[1][0] : 4
Enter Element for A[1][1] : 5
Enter Element for A[1][2] : 6

Enter Element for A[2][0] : 7
Enter Element for A[2][1] : 8
Enter Element for A[2][2] : 9


Original Array :
 1  2  3
 4  5  6
 7  8  9

Cube of Array A is :
 1  8  27
 64  125  216
 343  512  729
*/
#include<stdio.h>
void main(){
	int r,c;
	printf("Enter the size of Rows : ");
	scanf("%d",&r);
	printf("Enter the Size of Columns : ");
	scanf("%d",&c);
	int a[r][c];
	int i,j;
	printf("\nEnter Elements for Array A : \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter Element for A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nOriginal Array : \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nCube of Array A is : \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d ",a[i][j]*a[i][j]*a[i][j]);
		}
		printf("\n");
	}
}
