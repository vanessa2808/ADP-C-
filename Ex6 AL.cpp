#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n;
	cout<< "Enter n: "; cin >> n;
	for(int i=0;i<n;i++){
		cout<< "Enter element  "  << i << ":  ";
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cout <<a[i] << "\n ";
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<" \n Array after sorting:  \n ";
	for(int i=0;i<n;i++){
		cout << a[i] << "\n";
	}
}
