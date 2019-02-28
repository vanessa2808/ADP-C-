#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int a=1,b=5;
	cout<< "a= " << a<< endl;
	int &r=a;
	r++;
	cout<< a;
	system("pause");
}
