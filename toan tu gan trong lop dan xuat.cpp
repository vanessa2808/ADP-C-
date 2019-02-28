#include<iostream>
using namespace std;
class A{
	int a;
	public: 
		A operator=(const A k){
			a=k.a;
		}
		*A getthis(){
		 	return this;
		}
};
class B:public A{
	int b;
	B operator =(const B k){
		A *u,*v;
		u= this -> getthis();
		v=k.getthis();
		u=v;
		b=k.b
	}
};

