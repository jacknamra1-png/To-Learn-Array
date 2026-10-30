#include<stdio.h>
void main()
{
	int matrix1[2][2];
	int matrix2[2][2];
	int result[2][2];
	int i,j;

printf("Enter elements of first2x2 matrix:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("Enter elements[%d][%d]:",i,j);
		scanf("%d,",&matrix1[i][j]);
	}
}

	printf("Enter elements of second2x2 matrix:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("Enter elements[%d][%d]:",i,j);
		scanf("%d,",&matrix2[i][j]);
    }
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		result[i][j]=matrix1[i][j]+matrix2[i][j];
	}
}
printf("\nAddtion of matrix:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d",result[i][j]);
	}
	printf("\n");
}
return 0;
}