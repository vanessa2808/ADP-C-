

#include <iostream>
#include <cmath>
using namespace std;
class Quiz2{
	private:
		int n,m,u,L,R,v,p;
		int k=0;
		int *a,*b;
	public:
		void input(){
			do{
				cout<<"input m:";cin>>m;
			}while(m<1||m>300000);
			do{
				cout<<"input n:";cin>>n;
			} while(n<1||n>50000);
			do{
				cout<<"input u:";cin>>u;
			}while(u<1||u>1000000000);
			a=new int [m];
			cout<<"input array:\n";
			
			for (int i=0;i<m;i++){
				do{
				cin>>a[i];
				cout<<endl;
				}while(a[i]<1||a[i]>u);
			}
			b=new int [n];
			cout<<"input instructions:\n";
			for (int i=0;i<n;i++){
				cout<<"input L:"; cin>>L;
				cout<<"input R:"; cin>>R;
				cout<<"input v:"; cin>>v;
				cout<<"input p:"; cin>>p;
			}
			
		}
		void output(){
			
			for (int i=0;i<m;i++){
				if (a[i]>=L&&a[i]<=R)
					if(a[i]<v) k=k+1;					
			}
			for (int i=0;i<m;i++){
				a[p-1]=u*k/(R-L+1);
			}
			
			for (int i=0;i<m;i++){
				cout<<a[i]<<endl;
			}
		}
};
int main(){
	Quiz2 ab;
	ab.input(); ab.output();
}
