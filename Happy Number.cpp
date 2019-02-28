#include<iostream>
#include<math.h> 
using namespace std;
void input(int &n){
	do{
		cout << "Enter n: "; cin>>n;
		if(n <=0 ) cout << "  please, Enter the positive number!!! " << endl ;
    }while(n <=0);
}
int isCheckHappyNumber(int n){
	int s;
	int t=n;
	while (s!=1 && s!=4){
	    s=0;
		while(n>0 ){
			int sd= n%10;
			s=s+pow(sd,2);
			n= n/10;
	}
		n=s;
}
	if(s==1) cout<< t << " is a happy number";
	else cout<< t << " is not a happy number!";
}
//bool isCheckHappyNumber1(int n){
//	int slow,fast;
//	slow= fast =n;
//	do
//    {  
//        slow = isCheckHappyNumber(slow); 
//        fast = isCheckHappyNumber(isCheckHappyNumber(fast)); 
//    }  while (slow != fast); 
//    return (fast == 1); 
//} 
int main(){
	int n;
	input(n);
	isCheckHappyNumber(n);
	
}

