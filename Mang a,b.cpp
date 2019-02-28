#include<iostream>
#include <stdlib.h>  
using namespace std;
void input(int *&a, int &k){
	a= new int[k];
	cout << "enter  "; cin >>k ;
	for(int i=0;i<k;i++){
		cout << endl << "Enter element " << i << ":  "; cin >> a[i];
	}
}
void output(int *a,int k ){
	for(int i=0;i<k;i++){
			cout <<endl <<  a[i] << "  ";
	}
}
// in ra hai day
// tim phan tu co trong day a va b
int find(int *a,int n, int x){
	for(int i=0;i<n;i++){
		if(a[i]==x) return 1;
	}	
	return 0;
	}
void listAandB(int *a,int m,int *b, int n){
	cout <<"Cac so co trong 2 day ";
	for(int i=0;i<m;i++){
		if(find(b,n,a[i])==1) cout << a[i] << "  ";
	}
}
// in ra cac phan tu co trong a hoac b
void listAorB(int *a,int m,int *b, int n){
	cout <<"Cac so co trong day a hoac b la  = ";
	for(int i=0;i<m;i++){
		if(find(b,n,a[i])==0) cout << a[i] << "  ";
	}
	for(int i=0;i<m;i++){
		cout << b[i] << "  ";
	}
}
// in ra cac phan tu co trong a 
void listA(int *a,int m,int *b, int n){
	cout <<"Cac so co trong day a ";
	for(int i=0;i<m;i++){
		if(find(b,n,a[i])==0) cout << a[i] << "  ";
	}
}
// nhap so khong trung nhau
void nhap(int *&a, int &n){
	cout << "Nhap n: ";  cin >>n;
	a=new int[n];
	int x;
	int d=0;
	while(d<n){
		cout << "enter element: " << d << ": ";
		cin >> x;
		if(find(a,d,x)) cout << "Da co " << x << "roi!";
		else a[d++]=x;
	}
}
// sinh ngau nhien mang
void nhap1(int *&a, int &n){
	cout << "Nhap n: ";  cin >>n;
	a=new int[n]; srand(100);
	int d=0;
	while(d<n){
		int x=rand()%100;
		if(find(a,d,x));
		else a[d++]=x;
	}
}
int main(){
	int m,n,*a,*b,x;
//	nhap1(a,n);
//	output(a,n);
//	nhap1(b,n);
//	output(b,n);
	input(a,n);
	output(a,n);
	input(b,m);
	output(b,m);
	listAorB(a,m,b,n);
//	nhap(a,n);
//	output(a,n);
//	listAorB(a,m,b,n);
//	listA(a,m,b,n);

}
