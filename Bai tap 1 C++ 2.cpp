#include<iostream>
using namespace std;
class PhanSo{
	private:
		int x,y;
	public:
		PhanSo(int x1=0, int y1=0){
			x=x1;
			y= y1;
		}
		void input(){
			cout<<"Nhap tu so: "; cin>> x;
			cout << "Nhap mau so: "; cin>> y;
		}
		void output(){
			cout<<"Phan so = " << x << "/" << y;
		}
		int gety(){
			return y;
		}
		void sety(int k){
			x=y;
		}
	};
class soSanhPhanSo{
	PhanSo a,b;
	public:
		void nhap(){
			a.input();
			b.input();
		}
		void in(){
			a.output();
			b.output();
		}
		void PhanSoCompare(){
			if(a.gety()% b.gety()==0) cout << "mau so chung nho nhat la  :" << a.gety();
			else if(b.gety()% a.gety()==0) cout<<"mau so chung nho nhat la: " <<b.gety();
			else cout<<"Mau so chung nho nhat la: " <<b.gety()* a.gety();
			
		}
};
	int main(){
		soSanhPhanSo m;
		m.nhap();
		m.in();
		m.PhanSoCompare();
	}
