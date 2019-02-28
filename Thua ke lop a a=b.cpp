#include<iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
		A(int a1=0) {a=a1;}
		~A(){
			cout << endl<<" GOi ham huy lop a ";
		}
		void in() {
			cout << "a= "<< a;
			
		}
};
class B:A{
	private:
		int b;
	public:
		B(int a1, int b1): A(a1){
			b=b1;
		}
		~B(){
			cout << endl<<" Goi ham huy lop B";
		}
		void in(){
			cout <<"b= "<< b; 
			cout << "A trong lop a= "<< A::a; 
		}
};
int main(){
		A a(5);
		a.in();
		cout<< endl;
		B b(5,6);
		b.in();
		B m=b; m.in();
	
}
