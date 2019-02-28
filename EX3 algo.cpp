#include<iostream>
using namespace std;
int main(){
	int n;
	int a[100];
	int x,y;
	cout<< "Enter n: "; cin >> n;
	for(int i=0;i<n ;i++){
		cout<<"enter element " << i << ":   ";
		cin>> a[i];
	}
	for(int i=0;i<n;i++){
		cout<< a[i];
	}
	cout<<"Enter the element you want to change: "; cin >> x;
	cout<<"Enter the value that you wanna change: "; cin >>y;
	for(int i=0;i<n;i++){
		a[x]=y;
	}
		for(int i=0;i<n;i++){
		cout<< a[i] << "\n";
	}
}
