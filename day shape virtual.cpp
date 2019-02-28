#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<cstdio>
using namespace std;
class Shape{
	protected: 
		float x,y;
	public:
		void nhap(){
			cout<<"x: "; cin >> x;
			cout <<"y: "; cin>> y;
		}
		virtual float Area()=0;
};
class Circle: public Shape{
	private:
		float r;
	public:
		void nhap(){
			Shape:: nhap();
			cout <<"Nhap r: ";
			cin>> r;
		}
		virtual float Area(){
			return 3.14*r*r;
		}
};
class Rectangle: public Shape{
	private:
		float height, width;
	public:
		void nhap(){	
			Shape::nhap();
			cout << "Height: ";
			cin>> height;
			cout <<"width: ";
			cin>> width;
		}
		virtual float Area(){
			return height*width;
		}
	
		
};
class dayhinh{
	private:
		int sh;
		Shape **a;
	public:
		void nhap(){
			cout <<"Nhap so hinh: "; cin>> sh;
			a=new Shape *[sh];
			int tl;
			for(int i=0;i<sh;i++){
				cout << "\n Nhap hinh thu " << i+1 <<": \n";
				cout <<"\n Nhap hinh chu nhat (1) hay hinh trong(<>1): "; cin>> tl;
				if(tl==1) {
					Rectangle *p= new Rectangle();
					p -> nhap();
					a[i]=p;
				}
				else {
					Circle *q= new Circle;
					q -> nhap();
					a[i]=q;
				}
			}
			}
		void indt(){
			for(int i=0;i<sh;i++){
				cout <<"HInh thu " << i+1<<"co dien tich: " << a[i]->Area() << endl ;
			}
		}
};

int main(){
	dayhinh a;
	a.nhap();
	a.indt();	
}

