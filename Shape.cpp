#include<iostream>
#include<math.h>
using namespace std;
class Shape{
	protected:
		float a, b;
	public:
		void set_data(float width, float height){
			a=width;
			b =height;
		}
};
class Rectangle: public Shape{
	public:
		void nhap(){
			cout <<"Nhap chieu dai: "; cin >>a;
			cout << "Nhap chieu rong: "; cin>>b;
		}
		void in(){
			cout <<"Hinh chu nhat co chieu dai va chieu rong la: " << a<< "," << b;
		}
		float dt(){
			return a*b;
		}
};
class Triangle: public Shape{
	public:
		void nhap(){
			cout << "Nhap canh thu nhat: " << a;
			cout<<"Nhap canh thu 2: " << b;
		}
		void in(){
			cout << "do dai 3 canh cua tam giac la: " <<a << b ;
		}
		float dt(){
			return a*b/2;
		}
};
int main(){
	Rectangle rect;
	rect.set_data(5,3);
	cout << rect.dt()<< endl;
	Triangle tri;
	rect.set_data(3,4);
	cout << tri.dt()<< endl;
}
