#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class TH{
	vector <int> a;
	int n;
	public:
		friend istream &operator>>(istream &is, TH  &b){
		int x;
		int  i=0;
			while(x!=0  ){
				cout<<" Nhap phan tu thu "<< i+1<<": ";
				cin >>x;
				b.a.push_back(x);
				if(b.a[i]==x){
					cout<<"please, Enter number again!";
					i=i-1;
				}
				else{
					b.a[i]=x;
				}
				i++;
			}
			return is;
		}	
		friend ostream &operator<< (ostream &os, TH b){
			for(int i=0;i<b.a.size();i++){
				if(b.a[i] !=0)  	os<< " "<< b.a[i]<< " ";
			}
			return os;
		}
		TH operator+(TH b){
			for(int i=0;i<b.a.size();i++){
				if(find(b.a.begin(),b.a.end(),b.a[i])!=b.a.end()){
					cout<<b.a[i];
				}
			}
			return *this;
		}
		TH operator -(TH b){
		}
		TH operator *(TH b){
			
		}
		
};
int main(){
	//vector <int> a;
	TH a,b,c;
	
	cout <<" Tap hop a "; cin>>a;  cout<< "Day a = "<< a;
	cout<<"Tap hop b: "; cin>>b; cout<< "Day b = "<< b;
    //c=a+b;	cout<<"c=a+b"<<c;
}
