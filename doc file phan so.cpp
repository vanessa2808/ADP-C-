#include<iostream>
#include<fstream>
#include<vector>
#include <sstream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
typedef struct ps{
	int t,m;
};
int main(){
	
	ifstream fi("D:\\phan so.inp"); ofstream fo("D:\\phan so.out");
	if(fi== NULL || fo== NULL) cout<<"\n loidoc/ghifile ";
	ps x;
	else {
		while(!fi.eof()){
			fi >>x;
		
		}
