#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
typedef struct ps{
	int t, m;
};
void nhap(vector<ps>&a, int &n){
	ps x;
	cout<<"Enter element: ";
	cin >> n;
	for(int i=0;i<n;i++){
		cout <<"Enter ps "<<i; 
		cout<<"tu so: "; cin>> x.t;
		cout<<"mau so: "; cin >> x.m;
	}
		a.push_back(x);
}
void in(vector<ps> a, int n){
	ps x;
	for(int i=0;i<n;i++){
		cout << x.t <<"/"<< x.m;
	}
}
int main(){	
	ps a;
	int n;
	vector <ps> x;
	 nhap(x,n);
	 in(x,n);
}
