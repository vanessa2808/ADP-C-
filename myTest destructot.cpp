#include<iostream>
using namespace std;
class myTest{
	int size,*a;
	public:
		void sinh(int n){
			size=n;
			a= new int[n];
			for(int i=0;i<n;i++){
				a[i]=i;
			}
		}
		~myTest(){
		if(a!=NULL){
		 delete[]a; cout <<"Goi ham huy;";}
		}
//		myTest(const myTest &b){
//			 size=b.size; a= new int[size]; for(int i=0;i<size;i++) a[i]=b.a[i];	
//		}
myTest(){
	
}
void ss(myTest &b){
	if(size!=b.size) cout <<"\hai day so khac nhau";
	else cout<<"\n hai day so giong size nhau ";
}
};
int main(){
	myTest a;
	a.sinh(5);
	myTest c(a);
	a.ss(c);
}
