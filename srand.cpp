#include<time.h>
#include<iostream>
using namespace std;
int main(){
	int *a;
	int n;
	cout<< "nhap so phan tu cap phat";
	cin>>n;
	a= new int [n];
	srand(time(NUll)); // srand(10)
	for(int i=0;i<n;i++)
		a[i]=rand();
	cout<<"\n Cac so vua sinh ngau nhien: \n";
	for(int i=0;i<n;i++){
		cout << a[i];
	}
}

