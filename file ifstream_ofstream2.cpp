#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream fi("D:\\du lieu2.inp"); ofstream fo("D:\\ket qua2.out");
	if(fi== NULL || fo== NULL) cout<<"\n loidoc/ghifile ";
	else {
		int x,t=0;
		while(!fi.eof()) {
			fi>>x;
			if(x%2!=0) fo << " "<< x;
		}
		fo.close();
		fi.close();
		cout<<endl<< "xu li xong !";
		}
	}
		
