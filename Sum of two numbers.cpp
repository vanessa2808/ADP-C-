//enter a,b,c of triangle
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float p,s;
	printf("Enter a: "); scanf("%f",&a);
	printf("Enter b: "); scanf("%f",&b);
	printf("Enter c: "); scanf("%f",&c);
	p=(a+b+c)/2;
	printf(" area of triangle is: %5.2f ",p);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf(" area of triangle is: %5.2f ",s);
}
