//square equation
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	float a,b,c,x1,x2,x,denta;
	cout<<"Enter a: "; cin>>a;
	cout<<"Enter b: "; cin>>b;
	cout<<"Enter c: "; cin>>c;
	if(a==0){
		if(b==0){
			if(c==0)  cout <<"pt vo so nghiem";
			else cout << "pt vo nghiem";
		}
		else {
		x=-c/b;
		cout <<" result is:  " << x;
		}
	}
	else {
		denta= b*b-4*a*c;
		if(denta<0) cout <<"no result" ;
		else if( denta==0){
			x1=x2= -b/2*a;
			cout<<"the result is:" <<x1;
		}
		else {
		 x1= (-b+sqrt(denta))/2*a;
		 x2=(-b-sqrt(denta))/2*a;
		 	cout<<"the result is:" << x1 <<x2;
		}
	}
}
	
