#include<iostream>
using namespace std;
float sum(int k){
	float s=0;
	float dau= 1.0;
	for(int i=1;i<=k;i++){
		s=s+ dau/ i;
		dau=-dau;
	}
	cout<<  s;
}
int main(){
	int n;
	cout<< "Enter n: "; cin>>n;
	sum(n);
}
