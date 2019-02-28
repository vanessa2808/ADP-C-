#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int a=1,b=5,c;
	cout<< "a= " << a<< endl;
	int &r=a;
	r++;
	cout<< "a= " <<a << endl;
	cout << "Kich thuoc kieu int = "<< sizeof(a) << "bytes ";
	cout << "\n dia chi a= " <<&a;
	cout << "\n dia chi b= " <<&b;
	cout << "\n dia chi c= " <<&c;
	cout << "\n dia chi r= " <<&r << endl;
	system("PAUSE");
}
