#include<iostream>
#include<math.h>
using namespace std;
class Diem{
	private:
		int x,y;
	public:
//		Diem(){	
//			x=0; y=0;
//		}
		Diem(int x1=0, int y1=0){
			//x=this->x=x;
			//y=this->y=y;
			x=x1;
			y=y1;
		}
		void nhap(){
			cout<<"Hoanh do: "; cin >> x;
			cout<< "Tung do: "; cin>> y;
		}
		void in(){
			cout << "--> ("<< x << " " << y << ") ";
		}
		float kc(Diem b){
			return sqrt(pow(this->x-b.x,2)+pow(this-> y-b.y,2));
		}
		float Area(Diem b, Diem c){
			float d1, d2, d3;
			d1=kc(b);
			d2=kc(c);
			d3=b.kc(c);
			float p= (d1+d2+d3)/2;
			return sqrt(p*(p-d1)*(p-d2)*(p-d3));
		}
//		float dt2(Diem b,Diem c){
//			float s=0;
//			s=abs((c.x-x)*(b.y-y)-(b.x-x)*(c.y-y));
//			return s/2;
//		}
int getx(){
			return x;
		}
		void setx(int k){
			x=k;
		}
};
class tamGiac{
	Diem d1,d2,d3;
	public:
		void nhap(){
			cout<<"Nhap toa do diem d1= ";
			d1.nhap();
			cout<<"Nhap toa do diem d2= ";
			d2.nhap();
			cout<<"Nhap toa do diem d3= ";
			d3.nhap();
		}
		void in(){
			d1.in();
			d2.in();
			d3.in();
		}
		float dt(){
			float a,b,c,d,p;
			a=d1.kc(d2);
			b=d2.kc(d3);
			c=d3.kc(d1);
			p= (a+b+c )/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		void tinhtienx(int k){
			d1.setx(d1.getx()+k); d2.setx(d2.getx()+k);
			d3.setx(d3.getx()+k);
		}
};
int main(){
	tamGiac m;
	m.nhap();
	m.in();
		cout<<"Dien tich tg= " << m.dt();
	m.tinhtienx(5);
	m.in();
	cout<<"Dien tich tg= " << m.dt();
	
	}
