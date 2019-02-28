#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<cstdio>
using namespace std;
class Employee{
	char *name; int age; float c_salary;
	public:
		Employee(){
		}
		Employee(char *n1, int t1, float s1){
			name= new char[strlen(n1)];
			strcpy(name,n1);
			age= t1;
			c_salary=s1;
		}
		void nhap(){
			char t[20];
			cout <<" \n nhap ten: "; fflush(stdin); gets(t);
			name= new char[strlen(t)]; strcpy(name,t);
			cout << "\n nhap tuoi: "; cin >> age;
			cout <<"\n Nhap he so luong: "; cin >> c_salary;
		}
		 void in(){
			cout << "\n Ten " <<name<<"\t Tuoi: "<< age <<"He so luong: " << c_salary;
		}
};
class manager: public Employee{
	string dep;
	float bonus;
	public:
		void nhap(){
		Employee::nhap();
		cout <<"\n Phong ban phu trach: "; fflush(stdin); getline(cin,dep);
		cout <<"\n Phu cap chuc vu: "; cin>> bonus;
		}
		 void in(){
			Employee::in();
			cout<<"\t Phu trach: " << dep<< "\t Phu cap chuc vu: "<< bonus;
		}
};
int main(){
//	Employee e1("Le Van Hai",7,4.33),e2;
//	manager m1,m2;
// m1.nhap();  e1.in();m1.in();
//	e2=m1; cout <<"\n GOI IN TU e2: \n"; e2.in();
//--------------------
//	Employee e1,r;
//	cout <<"Nhap nhan vien: "; e1.nhap();
//	manager m1; cout<<"Nhap quan li: "; m1.nhap();
//	e1.in(); m1.in();
//	cout <<"\n xem lai nhan vien hay quan li (1/<>1)";
//	int tl; cin >> tl;
//	if(tl==1) r=e1; else r=m1;
//	r.in();
//-----------------
Employee e1; cout <<"Nhap nhan vien: "; e1.nhap();
manager m1; cout<<"Nhap quan li: "; m1.nhap();
e1.in(); m1.in();
cout <<"\n xem lai nhan vien hay quan li(1/<>1)";
int tl; cin >> tl;
Employee *p; if(tl==1) p=&e1; else p=&m1;
p-> in();
}
