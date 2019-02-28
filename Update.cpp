#include<iostream>
using namespace std;
int main(){
	int a,b,n,x[100];
	cout<<"Enter n: "; cin >> n;
	for(int i=0;i<n;i++){
		cout<< "enter element " <<i; cin >>  x[i];
	}
		for(int i=0;i<=n;i++){
		cout<<x[i];}
	cout<<"Enter the element you want to change: "; cin >> a;
	cout<<"Enter the value that you wanna change: "; cin >>b;
	for(int i=0;i<=n;i++){
		cout<<x[i];
		x[a]=b;
	}
}
