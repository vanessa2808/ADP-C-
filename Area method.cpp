#include<iostream>
#include<math.h>
using namespace std;
void input(float &a,float &b, float &c){
	cout<<"Nhap do dai tam giac ";
	cin>>a>>b>>c;
	}
float Area(float a,float b, float c){
	if(a+b>c && b+c>a&& a+c>b){
		cout<<"tao thanh tam giac:    ";
		float p= (a+b+c)/2;
		float s= sqrt(p*(p-a)*(p-b)*(p-c));
		cout << s;
	}
	else cout<<" \n not create triangle";
}
int main(){
	float a1,b1,c1,a2,b2,c2,s1,s2;
	cout<< "Enter triangle 1: ";
	input(a1,b1,c1);
	input(a2,b2,c2);
	s1=Area(a1,b1,c1);
	s2=Area(a2,b2,c2);
	if(s1>s2) cout<<"S1 co area lon hon " << s1;
	else cout<< s2;
}
