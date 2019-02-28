#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class Dayso{
	int n,*a; // n la so phan tu mang a luuu cac phan tu
	public: 
		Dayso(int n1=0){
		}
		void sinh (int n){
			this->n=n;
			a=new int[n];
			srand(time(NULL))	;
			for(int i=0;i<n;i++){
				a[i]=rand()%100;
			}
		}
//	friend istream & operator >> (istream &is, Dayso &b){
//		cout<<  endl<<"Nhap so phan tu: "; cin >>b.n;
//		b.a=new int[b.n];
//		for(int i=0;i<b.n;i++){
//			cout<<" Nhap phan tu thu "<< i+1<<": "; cin>>b.a[i];
//		}
//		return is;
//	}
	friend ostream &operator << (ostream &os, Dayso b){
		for(int i=0;i<b.n;i++){
			os << b.a[i]<<"  ";
		}
		return os;
	}
		void in(){
			for(int i=0;i<n;i++){
				cout << a[i]<<"   ";
			}
		}
		void thaydoi(int d=2){
			for(int i=0;i<n;i++){
				a[i]=a[i]+d;
			}
		}
		Dayso(const Dayso &b){
			n=b.n; if(n>0) a= new int[n];
			for(int i=0;i<n;i++) a[i]=b.a[i];
		}
		friend int gmax(Dayso b);
};
int gmax(Dayso b){
	int m=b.a[0]; 
	for(int i=0;i<b.n;i++)
		if(b.a[i]>m) m=b.a[i];
		return m;
	}
int main(){
	Dayso a; 
	//cin >> a;
	a.sinh(10); 
	cout<<"Day a= "<<a; 
	Dayso b;b=a; cout<< endl << "Day b: "<< b;
	cout<< endl<< "Day a: "<< a;
//	a.in();
//	Dayso b(a);
//	cout<<endl<< "copy a= ";
//	b.in();
//	a.thaydoi(5); cout<<endl<< "Day b: "; b.in();
//	cout<<endl<< "Day a= "; a.in();
	cout <<"Gia tri max cua mang a la "<< gmax(a);
	}
