#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
typedef struct ps{
	int t, m;
};
void nhap(vector<ps>&a, int &n){
	ps x;
	cout<<"Enter element: ";
	cin >> n;
	for(int i=0;i<n;i++){
		cout <<"Enter ps "<<i; 
		cout<<"tu so: "; cin>> x.t;
		cout<<"mau so: "; cin >> x.m;
		a.push_back(x);
	}
}
void in(vector<ps> a, int n){
	for(int i=0;i<n;i++)
		cout << a[i].t <<"/"<< a[i].m <<" ";
}
int mycmp(ps a, ps b){	
	if(a.t*b.m> b.t*a.m) return 1;
	else return 0;
}
void sortDecrese(vector <ps> a, int n){
	sort(a.begin(),a.end(),mycmp);
	for(int i=0;i<a.size();i++) cout <<endl <<"vector contain: "<< a[i].t<<"/"<<a[i].m << "  ";
}
int main(){	
	int n;
	vector <ps> a;
	 nhap(a,n);
	 in(a,n);
	 sortDecrese(a,n);
}

