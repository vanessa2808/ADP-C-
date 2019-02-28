#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream fi1("D:\\du lieu a.inp");
	ifstream fi2("D:\\du lieu b.inp");
	ofstream fo("D:\\ket qua c.out");
	if(fi1== NULL || fo== NULL || fi2==NULL) cout<<"\n loidoc/ghifile ";
	else {
		int d1=1,d2=1;// bien d1 d2 dung de ghi lai trang thai dc phep doc tu file 1,f2 hay ko
		int x,y;
		while(!(fi1.eof() && !fi2.eof())){
			if(d1==1){
				fi1>>x;
				d1=0;
			}
			if(d2==1){
				fi2>>y;
				d2=0;
			} 
			if(x<=y) {
				fo << x;
				d1=1;
			}
			else {
				fo<< y;
				d2=1;
			}
		}
		if(d1==0) {
			fo << x <<" ";
			}
		else {
		fo << y <<" ";
		}
		while(!fi1.eof()) {
			fi1>>x;
			fo <<x<<" "; 
		}
		while(!fi2.eof()) {
			fi2>>y;
			fo << y <<" "; 
		}
		fo.close();
		fi1.close();
		fi2.close();
		cout<<endl<< "xu li xong !";
	}
}
		
