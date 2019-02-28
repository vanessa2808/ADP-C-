// kiem tra tam giac hay khong
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Enter a: "; cin>>a;
	cout<<"Enter b: "; cin>>b;
	cout<<"Enter c: "; cin>>c;
	if((a+b>c || a+c>b || b+c>a)&&(a>0 && b>0 && c>0)){
		cout<< a << b << c << " create triangle" ;
		if( a==b && b==c) 	cout << " tao thanh tam giac deu ";
		else if((a==b && b!=c)|| (c==b && c!=a) || (a==c&& a!=b)) cout<<"tao thanh tam giac can";
		else if((a*a==b*b+c*c)||(b*b== a*a+c*c)||(c*c==a*a+b*b) ) cout<< " tao thanh tam giac vuong";
		else  cout << "tao thanh tam giac thuong";
	}
	else cout<<" not create triangle";
}
	
