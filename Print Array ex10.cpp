#include<iostream>
using namespace std;
int main(){
	int a[10],n;
	cout<< "enter number of elements: "; cin >> n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<< "]="; cin>> a[i];
	}
	cout<< "\n Array a[n]= ";
	for(int i=0;i<n;i++) cout<< a[i]<< "   ";
}
