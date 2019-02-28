#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<cstdio>
using namespace std;
class Object{
	private: 
		protected:
		string name;
		int weight;
		public:
		virtual void nhap(){
			cout<< "Name: "; fflush(stdin); getline(cin,name);

			cout<<"Weight: "; cin>> weight;
		}
		virtual void in(){
			cout << name << "  "<< weight << endl;
		};
};
class Dog: public Object{
	private:
		string color;
	public:
		virtual void nhap(){
			Object::nhap();
			cout <<"Color: "; fflush(stdin);getline(cin, color);
		}
		virtual void in(){
			cout << "Con cho: " << color << "    "<< endl;
			Object::in();
	}
};
class Book:public Object{
private:
	string type;
	int nop;
public:
	virtual void nhap(){
		Object::nhap();
		cout <<"Type: ";fflush(stdin); getline(cin,type);
		cout <<"Nop: "; cin >> nop;
	}
	virtual void in(){
		cout << "cuon sach: " << type<<" "<< nop<< endl;
		Object::in();
	}
};
class Human: public Object{
private:
	int height, weight;
	string skin;
	public:
	virtual void nhap(){
		Object::nhap();
		cout << "height: "; cin>> height;
		cout<<"Skin: "; fflush(stdin);getline(cin, skin);
	}
	virtual void in(){
		cout << "co gai xinh dep "<<height <<" " << " "<<skin<< endl;
		Object::in();
	}
};
class MagicBag{
	private:
		int noo;
		Object **a ;
	public:
		 void nhap(){
			cout << "Enter noo: "; cin>> noo;
			a=new Object *[noo];
			int t;
			for(int i=0;i<noo;i++){
				cout <<"Nhap hinh thu: " << i+1<<": ";
				cout <<"Nhap con cho(1)"; 
				cout << "cuon sach (2)" ;
				cout <<"hay co gai xinh dep(3):"; 
				cin>> t;
			switch(t){
				case 1: {
					Dog *p =new Dog();
					p-> nhap();
					a[i]=p;
					break;
					}
				case 2:{
					Book *q=new Book();
					q->nhap();
					a[i]=q;
					break;
				}
				case 3:{
					Human *r= new Human();
					r->nhap();
					a[i]=r;
					break;
				}
				default:{
					cout<<" please, enter avalid number";
					break;
				}
			}
			}
		}
		 void indv(){
			for(int i=0;i<noo;i++){
				cout <<"Do vat thu " << i+1 <<"co thuoc tinh : " ;
				a[i]->in();
				cout <<endl;
			}
		}
		
};

int main(){
	MagicBag a;
	a.nhap();
	a.indv();
}
