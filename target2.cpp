#include<iostream>
using namespace std;
int main(){
	int a[]={3,4,6,7};
	int target;
	cout << "Enter target: "; cin>> target;
	int s=0;
	int index1=0, index2=1;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			s= a[i]+ a[j];
			index1= i;
			index2=j;
		if(s== target){
			cout<< a[i] << " + " << a[j] << " = " << s << endl ;
			cout<< index1 << "   " << index2;
		}
	}	
	}
}
