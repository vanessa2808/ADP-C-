#include<iostream>
#include<fstream>
#include<vector>
#include <sstream>
using namespace std;
	int m,k;
	vector <vector<int> >a;
	string t;
void input(){
	ifstream fi("D:\\muc.inp");
	fi>>m;
	for(int i=0;i<=m;i++){
		getline(fi,t);
		stringstream ss(t); 	vector <int> x;
		while(!ss.eof()){
				ss>>k;
				x.push_back(k);
			}
			a.push_back(x);
		}
}
void output(){
	for(int i=0;i<a.size();i++){
		cout << endl;
		for(int j=0;j<a[i].size();j++){
			cout << a[i][j] << "   " ;
		}
	}
	}
void max(){
	int max;
	for(int i=0;i<a.size();i++){
		max=a[i][0];
		for(int j=1;j<a[i].size();j++){
			 int max1= a[i][j];
			if(max<max1) max=max1;
	}
	}
	cout<<max;
}
int main(){
	input();
	output();
	max();
}

