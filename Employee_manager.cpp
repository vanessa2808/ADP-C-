#include<iostream>
using namespace std;
class Employee{
};
class Manager: public Employee{
};
int main(){
	Employee a,b,c;
	Manager d,e;
	a=d;
	d=e;
	a=c;
	e=a;
}
