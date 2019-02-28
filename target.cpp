#include<iostream>
using namespace std;
int input(int *&GivenNumber, int &n){
	cout << "enter n: "; cin >> n;
	GivenNumber= new int [n];
	for(int i=0;i<n;i++){
		cout <<" Enter element " << i << ": "; cin>> GivenNumber[i];
	}		
}
int output(int *GivenNumber, int n){
	for(int i=0;i<n;i++){
		cout << GivenNumber[i];
	}
}
int target(int *GivenNumber, int n){
	int target;
	cout << "Enter target: "; cin>> target;
	int s=0;
	int index1=0, index2=1;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			s= GivenNumber[i]+ GivenNumber[j];
			index1= i;
			index2=j;
		}
	}
	if(s== target){
		cout<< index1 << " + " << index2 << s;
		}
}
int main(){
	int *GivenNumber, n;
	input(GivenNumber,n);
	output(GivenNumber,n);
	target(GivenNumber,n);
}
