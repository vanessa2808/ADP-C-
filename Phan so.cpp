#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct ps{
	int t,m;
} ;
/*void nhap(ps &a){
	cout << "Tu so "; cin >> a.t;
	do{
		cout<<"Nhap mau so: "; cin >> a.m;
	}while (a.m==0);
}*/
istream &operator>> (istream &is, ps &a){
	cout << "Tu so "; is >> a.t;
	do{
		cout <<"Nhap mau so: "; is >> a.m;
	}while (a.m==0);
	return is;
}
ostream &operator<<(ostream &os, ps a){
	os<< a.t << "/ "<<a.m;
	return os;
}
ps operator+(ps a, ps b){
	ps t; t.t= a.t*b.m+ b.t*a.m;
			t.m=a.m*b.m;
	return t;
}
ps operator-(ps a, ps b){
	ps t1;
	t1.t= a.t*b.m - b.t*a.m;
	t1.m=a.m* b.m;
	return t1;
}
ps operator*(ps a, ps b){
	ps t2;
	t2.t= a.t*b.t;
	t2.m=a.m*b.m;
	return t2;
}
ps operator/(ps a,ps b){
	ps t;
	t.t=a.t*b.m;
	t.m=a.m*b.t;
	return t;
}
int main(){
	ps a,b,c;
	cout<< "Nhap hai phan so a,b: "; 
	cin >> a; 
	cin >>b;
	c=a+b; cout<< "\n a+b= " <<c;
	c=a-b; cout<< "\n a-b= "<<c;
	c=a*b; cout <<"\n a*b= "<<c;
	c=a/b; cout<< "\n a/b= "<<c;
}
