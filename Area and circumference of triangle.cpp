//linear equation
#include<stdio.h>
#include<math.h>
int main(){
	float b,c;
	float x;
	printf("Enter b: "); scanf("%f",&b);
	printf("Enter c: "); scanf("%f",&c);
	if(b==0 && c==0)  printf("pt vo so nghiem" );
	else if(b!=0) {
		x=-c/b;
		printf(" result is: %5.5f ",x);
	}
	else printf("pt vo nghiem");
	
	}
	
