//square equation
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2,x,denta;
	printf("Enter a: "); scanf("%f",&a);
	printf("Enter b: "); scanf("%f",&b);
	printf("Enter c: "); scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0)  printf("pt vo so nghiem" );
			else printf("pt vo nghiem");
		}
		else {
		x=-c/b;
		printf(" result is: %5.5f ",x);
		}
	}
	else {
		denta= b*b-4*a*c;
		if(denta<0) printf("no result" );
		else if( denta==0){
			x1=x2= -b/2*a;
			printf("the result is: %5.5f ",x1);
		}
		else {
		 x1= (-b+sqrt(denta))/2*a;
		 x2=(-b-sqrt(denta))/2*a;
		 	printf("the result is: %5.5f and %5.5f",x1,x2);
		}
	}
}
	
