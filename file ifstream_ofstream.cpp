#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream fi("D:\\du lieu1.inp"); ofstream fo("D:\\ketqua1.out");
	if(fi== NULL || fo== NULL) cout<<"\n loidoc/ghifile ";
	else {
		int n,x,t=0; fi>>n;
		for(int i=1;i<=n;i++){
			fi>> x; t=t+x;
		}
		fo <<"TOng cac so = "<< t;
		fo.close();
		fi.close();
		cout<< endl <<"Su li xong!";
	}
}
