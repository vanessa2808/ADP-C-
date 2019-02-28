#include<stdio.h>
#include<conio.h>
int main(){
	int arr[3][3],i,j;
	printf("\n Enter 9 numbers: ");
	for( i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
			printf("\n you have entered: ");
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					printf("%d",arr[i][j]);
				getch();
			
	}
