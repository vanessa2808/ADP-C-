#include<iostream>
using namespace std;
void f1(int a, int b){
	a=a+2; b=b+a;
}
void f2(int a, int &b){
	a=a+2; b=b+a;
}
void f3(int &a, int &b){
	a=a+2; b=b+a;
}
void in (int a, int b){
	cout<< a <<"   " <<  b << "\n ";
}
int main(){
	int a=8,b=5;
	f1(a,b); in(a,b);
	f2(a,b); in(a,b);
	f3(a,b); in(a,b);
	f2(a,a); in(a,b);
	f3(b,b); in(a,b);
}
