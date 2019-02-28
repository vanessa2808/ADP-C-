#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<cstdio>
using namespace std;
class Person{
	protected: 
		char *name;
		int year;
	Person(){
		name=NULL; year=0;
	}
	Person(char *n1, int y1) {
		name= new char[strlen(n1)]; 
		strcpy(name, n1); year=y1;
	}
	public: 
		void nhap(){
			char *t; cout<<" nhap ten:"; fflush(stdin); // xoa bo dem ban phim
			gets(t);
			name= new char[strlen(t)]; strcpy(name, t);
			cout <<"Year: "; cin>> year;
		}
		void in(){
			cout << "Thong tin: " << name << "  " << year;
		}
};
class Student: public Person{
	private: 
		char *queQuan;
		float dtb;
	public: 
		Student(){
		queQuan=NULL;
		dtb=0;
	}
	Student(char *n1, int y1, char *q1):Person(n1,y1) {
		queQuan= new char[strlen(q1)]; 
		strcpy(queQuan, q1);
}
public:
	void nhap(){
		Person::nhap();
		char *t; cout<<" que : "; fflush(stdin); gets(t);
		queQuan= new char[strlen(t)]; strcpy(queQuan, t);
		do{
			cout << "Diem trung binh " << endl; 
			cin >> dtb;
			}while(dtb< 0 || dtb>10);
	}
	void in(){
		Person:: in();
		cout << "  " << queQuan << "   ";
		cout<< dtb<< "  ";
	}
	int getdtb(){
		return dtb;
	}
	void setdtb(int k){
		dtb=k;
	}
	char* getqueQuan(){
			return name;
	}
	
};
class Lop{
	private: 
		string tenLop;
		int n;
		Student *a;
	public:
			 void nhap(){
			cout<<" nhap ten lop:"; getline(cin, tenLop);
			cout <<"Nhap so sinh vien: "; cin >> n;
			 a= new Student[n];
			for(int i=0;i<n;i++){
				cout <<"Nhap sinh vien thu " << i<< ": ";
				a[i].nhap();
			}
		}
		void in(){
			cout <<"Ten lop la: "<< tenLop;
			for(int i=0;i<n;i++){
				a[i].in();
				cout << endl;
			}
		}
		void sapxep(){
			for(int i=0; i<n; i++){
			for(int j= i+1; j<n; j++){
			if(a[i].getdtb()>a[j].getdtb())
			{
				Student t=a[i]; 
				a[i]=a[j]; 
				a[j]=t;
			} 
		}
	}
}
		bool contains(char *coID){
			for(int i=0;i<n;i++){
				if(a[i].getqueQuan()==coID)
					return true;
			
			}
			return false;
		}
		void dem(){
			int dem=0;
			for(int i=0;i<n;i++){
				bool kt=contains(a[i].getqueQuan());
				if(kt== true) dem=dem+1;
			}
			cout << endl << "có" << dem <<" hoc sinh den tu quang binh!";
			
		}
		void xuLiDiem(){
			float cong;
			for(int i=0;i<n;i++){
				bool kt=contains(a[i].getqueQuan());
				if(kt== true && a[i].getdtb()<=9.75) {
					cong=a[i].getdtb()+0.25;
					cout << "Diem moi: " << cong;
					}
					else cout << endl << "diem moi" << cong ;
				}
			}
};
int main(){
	Lop a;
	a.nhap();
	a.in();
	cout <<"sau khi xap sep: "<< endl;
	a.sapxep();
	a.in();
	cout <<"den so sinh vien"<< endl;
	a.contains("quang binh");
	a.dem();
	cout << "xu li diem sinh vien" <<endl;
	a.xuLiDiem();
	
	
}
