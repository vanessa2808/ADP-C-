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
		float calculateDistance(Diem b){
			return sqrt(pow(this->x-b.x,2)+pow(this-> y-b.y,2));
		}
		float Area(Diem b, Diem c){
			float d1, d2, d3;
			d1=calculateDistance(b);
			d2=calculateDistance(c);
			d3=b.calculateDistance(c);
			float p= (d1+d2+d3)/2;
			return sqrt(p*(p-d1)*(p-d2)*(p-d3));
		}
//		float dt2(Diem b,Diem c){
//			float s=0;
//			s=abs((c.x-x)*(b.y-y)-(b.x-x)*(c.y-y));
//			return s/2;
//		}
};
int main(){
	Diem a(3,7), b(8,5), c,d;
//	Diem a,b,c;
//	a.nhap();
 a.in();
//	b.nhap(); 
b.in();	
	//c.nhap(); 
c.in();
d.in();
	cout<<endl<< "Khoang cach A B = " << a.calculateDistance(b)<< endl;
//	cout<< "Khoang cach B A = "<< b.calculateDistance(a);
//	cout<<endl << "Khoang cach B C= "<< b.calculateDistance(c); 
//	cout<< endl <<" Dien tich tam giac ABC la: " << a.Area(b,c);
}
