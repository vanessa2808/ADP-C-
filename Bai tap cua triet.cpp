#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Person{
	private:
		string name;
		int year;
	public:
		Person(string name,int year){
			this->name=name;
			this->year=year;
		}
		Person(){
		}
		
		~Person(){
			cout<<"\nDa huy Person";
		}
		void nhap(){
			cout<<"Enter name of student: "; cin.ignore(); getline(cin,name);
			cout<<"Enter year of birth: ";cin>>year;
		}
		void in(){
			
			cout<<endl<<"Name: "<<name;
			cout<<"\tYear of Birth: "<<year;
		}
};

class Student:public Person{
	private:
		string hometown;
		float average;
	public:
		Student(string name,int year,string hometown,float average):Person(name,year){
			this->hometown=hometown;
			this->average=average;
		}
		Student():Person(){
		}
		~Student(){
			cout<<"\nDa huy student";
		}
		void nhap(){
			Person::nhap();
//			char*temp;
			cout<<"Enter hometown: ";
			cin.ignore(); getline(cin,hometown);
//			fflush(stdin); gets(temp);
//			hometown=new char[strlen(temp)];strcpy(hometown,temp);
	
			cout<<"Enter average: ";cin>>average;
			
		}
		void in(){
			Person::in();
			cout<<"\nHometown: "<<hometown<<"\tAverage mark: "<<average;
		}
		int getAverage(){
			return average;
		}
		
		string getHometown(){
			return hometown;
		}
		void setAverage(float newAverage){
			average=newAverage;
		}
		
		
	
};

class Lop{
	string className; int n;
	Student *a;
	public: 
		void nhap(){
			cout<<"Enter class: "; getline(cin,className);
			cout<<"Enter student number: ";cin>>n;
			a=new Student [n];
			for (int i=0;i<n;i++){
				cout<<"Student no."<<i+1<<":\n";
				a[i].nhap();
			}
		}
		void in(){
			cout<<"Class: "<<className;
			for(int i=0;i<n;i++) a[i].in();
		}
		void dem(){
			int count=0;
			for (int i=0;i<n;i++)
			{
				if (a[i].getHometown()=="Quang Binh") count++;	
			}	
			cout<<"There are "<<count<<"student come from Quang Binh";
		}
		void sapxep(){
			for(int i=0;i<n-1;i++)
				for(int j=i;j<n;j++)
				{
					if (a[i].getAverage()<a[j].getAverage()){
						Student temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			in();
		}
		void xulydiem(){
			for (int i=0;i<n;i++)
			{
				if (a[i].getHometown()=="Quang Ngai"){
					a[i].setAverage(a[i].getAverage()+0.25) ;	
				}
				if (a[i].getAverage()>10) a[i].setAverage(10);
			}	
			in();
		}
};

int main(){
	Lop a;
	a.nhap();
	a.in();
	cout<<endl<<endl;
	a.xulydiem();
	cout<<endl<<endl;
	a.dem();
	cout<<endl<<endl;
	a.sapxep();
	
	
	
}
