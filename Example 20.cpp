#include<iostream>
using namespace std;
int tong(int n=10){
	int t=0;
	for(int i=1;i<=n;i++){
		t=t+i;	
	}
		return t;
}
int main(){
	cout << "tong cua doi ngam dinh = " << tong() << endl;
	cout << "Tong khong doi ngam dinh " << tong(15);
}
