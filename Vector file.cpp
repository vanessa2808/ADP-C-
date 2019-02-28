#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	ifstream fi1("D:\\du lieu a.inp");
	ifstream fi2("D:\\du lieu b.inp");
	ofstream fo("D:\\ket qua c1.out");
	if(fi1== NULL || fo== NULL || fi2==NULL) cout<<"\n loidoc/ghifile ";
	else {
		vector <int>a;int x;
		while(!fi1.eof()) {
			fi1>> x; a.push_back(x);
		}
		while(!fi2.eof()) {
			fi2>> x; a.push_back(x);
		}
		sort(a.begin(),a.end());
		for(int i=0;i<a.size();i++) fo<<a[i]<<" ";
		fo.close();
		cout<<"\n success ";
		
	
	}}
