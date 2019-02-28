#include<iostream>
using namespace std;
int main(){
	int n=10;
	for(int i=1;i<=n;i++){
		cout<<"\ni =" << i;
		if(i>5) break;cout<<"\t i*i =" << i*i;
	}
}
