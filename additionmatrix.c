#include<stdio.h>
#include<conio.h>
int main(void)
{
	int A[10][10], B[10][10], C[10][10], i, j, k, rows, cols;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	printf("enter the number of columns:");
	scanf("%d",&cols);
	printf("\enter the values for A[%d][%d]:",rows,cols);
	for(i=0;i<rows;i++)
	   for(j=0;j<cols;j++)
	       scanf("%d",&A[i][j]);
	       
    printf("\nenter the values for B[%d][%d]:",rows,cols);
    for(i=0;i<rows;i++)
       for(j=0;j<cols;j++)
           scanf("%d",&B[i][j]);
           
           for(i=0;i<rows;i++)
              for(j=0;j<cols;j++)
              {
              	C[i][j] = 0;
              	for(k=0;k<cols;k++)
              	C[i][j] = C[i][j] + A[i][k] * B[k][j];
			  }
              
              printf("\nresultant matrix C[%d][%d]:\n",rows,cols);
              for(i=0;i<rows;i++)
              {
              	for(j=0;j<cols;j++)
              	    printf("%d ",C[i][j]);
              	    printf("\n");
			  }
              getch();
}