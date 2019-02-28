

#include<iostream>
using namespace std;
class arrayTransform{
	private:
		int n,m,u,l,r,v,p,k=0;
		int *a;
	public:
		void input(){
		cout<<"Enter n: "; cin>>n;
		cout<<"Enter m: ";cin>>m;
		cout<<"Enter u: ";cin>>u;
		a=new int[n];
		for(int i=m;i<=n;i++){
			cout<<"Enter a["<<i<<"]: ";cin>>a[i];
		}
		cout<<"Enter L: ";cin>>l;
		cout<<"Enter R: ";cin>>r;
		cout<<"Enter v: ";cin>>v;
		cout<<"Enter p: ";cin>>p;
	}
	void output(){
		cout<<n<<" "<<m<<" "<<u;
		for(int i=m;i<=n;i++){
			cout<<endl<<a[i];
		}
		cout<<endl;
		cout<<l<<" "<<r<<" "<<v<<" "<<p;
	}
	void calculate(){
		for(int i=m;i<=n;i++){
			if(a[i]>=l&&a[i]<=r&&a[i]<v) k++;
		}
		a[p]=u*k/(r-l + 1);
		for(int i=m;i<=n;i++){
			cout<<endl<<a[i];
		}
	}
};
int main(){
	arrayTransform a;
	a.input();
	a.output();
	a.calculate();
}
