#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a: "; cin >> a;
	switch (a){
		case 1: cout<< "Ban nhap so 1"; break;
		case 2: cout<< "Ban nhap so 2"; break;
		case 3: cout<< "Ban nhap so 3"; break;
		default:cout<< "Ban nhap so <1 hoac > 3";
	}
}
