#include<iostream>
using namespace std;
int main(){
	int *P = new int [100];
	int n;
	cout<<"Enter the the number of elements: "; cin>>n;
	for (int i=0;i<n;i++){
		cout<< "element " << i;
		 cin >> P[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(P[i]>P[j]){
				int temp=P[i];
				P[i]=P[j];
				P[j]=temp;
			}	
		}	
	}
	for(int i=0;i<n;i++){
		cout<< P[i];
	}
}
