#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
void input(int *&a, int &n){
	cout<<"Enter n: "; cin>>n;
	a= new int[n];
	for(int i=0;i<n;i++){
		cout<<"a [ " << i << "]=";
		cin >> a[i];
	}
}
void print(int *a,int n){
	for(int i=0;i<n;i++){
		cout << a[i] <<"  ";
	}
}
void calculateAndSort(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i])> abs(a[j])){
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){	
		a[i] = pow(a[i],2);
		cout << a[i] << "  ";
	}
}
int main(){
	int *a,n;
	input(a,n);
	print(a,n);
	cout<<endl<<  "After square and sort: ";
	calculateAndSort(a,n);
} 
