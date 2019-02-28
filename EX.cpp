#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: "; cin>>n;
	do{
			if(n%2==0)n=n/2; 
			else 	n =3*n+1; 
			cout<<" n== "<< n;
	}while(n!=1);
	}
	/*while(1){
		cout<<"--->" <<n;
		if(n==1) break;
		else if(n%2==0) n=n/2;
		else n=3*n+1;
	}
	
}
