
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;
vector<vector<int> >a;
void input()
{
	string t;
	int m,k;
	ifstream fi("D:\\muc.inp");	
//	if(fi==NULL){cout<<"\nLoi doc file";	getch();}
	fi>>m;
	for(int i=0;i<=m;i++)
	{
		getline(fi,t);
		stringstream ss(t);
		vector <int> x;
		while(!ss.eof()){
			ss>>k;
			x.push_back(k);
		}
		a.push_back(x);
	}
}
void output(){
	for(int i=0; i<a.size(); i++){
		cout<<"\n";
		for(int j=0;j<a[i].size();j++)
		cout<<a[i][j]<<" ";
	}
}
void max(){
	int index;
	for(int i=0; i<a.size(); i++){
		cout<<"\n";
		int max=a[i][0];
		for(int j=1;j<a[i].size();j++){
			if(max<a[i][j])	{max=a[i][j];
			index=j;}
		}		cout<<a[i][index]<<" ";
	}
}
int main(){
	input();
	output();
	max();
}
