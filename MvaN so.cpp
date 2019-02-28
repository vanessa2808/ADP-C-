#include<iostream>
using namespace std;
void input(int k){
	int s=0, x;
	for(int i=0;i<k;i++){
		cout<< "Enter element  " << i<<": ";  cin>>x;
		s=s+x;
	}
	cout<< "\n sum = \n " << s;
}
int main(){
	int m,n;
	cout<< "ENter m: "; cin>> m;
	cout << "ENter n: "; cin >> n;
	input(m);
	input(n);
}
