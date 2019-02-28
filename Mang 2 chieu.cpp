#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int ** a,m,n;
	cout<<"Enter row: "; cin >>m;
	cout << "ENter column: "; cin >> n;
	a= new int * [m];
	for(int i=0;i<m;i++) a[i]=new int [n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			a[i][j]= rand()%100;
			cout<< endl<< "Content = ";
			for(int i=0;i<m;i++){
				cout << endl ; for(int j=0;j<n;j++)
					cout <<a[i][j]<<" ";		
			}
	}
