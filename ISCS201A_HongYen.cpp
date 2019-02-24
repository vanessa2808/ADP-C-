#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class TH{
	vector <int> a;
	public:
		friend istream &operator>>(istream &is, TH  &b){
		int x;
		int index =0;
			do{
				cout<<endl << " Nhap phan tu thu "<< index +1<<": ";
				cin >>x;
				bool isExist =false;
				for(int i=0;i<b.a.size();i++){
				if(b.a[i]==x){
					cout << endl;
					cout<< "    Element " << x << "   is exist in collection, Please enter different number again! ";
					cout << endl ;
					index =index -1;
					isExist= true;
					break;
					}
				}
				if(!isExist){
				   b.a.push_back(x);
				}
				index++;
				}while(x!=0);
			return is;
			}
			
		friend ostream &operator<< (ostream &os, TH b){
			if(b.a.size()==0){
				os <<"Empty!";
				return os;
			}
			for(int i=0;i<b.a.size();i++){
				if(b.a[i]!=0)
				 	os<< " "<< b.a[i]<< " ";
			}
			return os;
		}
		TH operator+(TH b){
			TH temp;
			temp.a=this -> a;
			for(int i=0;i<b.a.size();i++){
				bool isExist= false;
				for(int j=0;j<temp.a.size();j++){
					sort(temp.a.begin(),temp.a.end());
					if(b.a[i]==temp.a[j]){
						isExist=true;
						break;
					}
				}
				if(!isExist){
					temp.a.push_back(b.a[i]);
				}
			}
				return temp;
		}
		TH operator -(TH b){
			TH temp;
			for (int i = 0; i < this->a.size(); i++) {
			bool isExist = false;
			for (int j = 0; j < b.a.size(); j++){
				sort(temp.a.begin(),temp.a.end());
				if (this->a[i] == b.a[j])
				{
					isExist = true;
					break;
				}
			}
			if (!isExist)
			{
				temp.a.push_back(this->a[i]);
			}
		}
		return temp;
		}
		TH operator *(TH b){
			TH temp;
			for(int i=0;i<b.a.size();i++){
				bool isExist=false;
				for(int j=0; j< this ->a.size();j++){
				sort(temp.a.begin(),temp.a.end());
				if(b.a[i]==this -> a[j]){
					temp.a.push_back(b.a[i]);
			}
			}
			}
			return temp;
		}
		
};
int main(){
	//vector <int> a;
	TH a,b,c;
	cout <<" TAP HOP A:  "; cin>>a;  cout<< "  Day a = { "<< a << " } "<< endl;
	cout<<endl <<"TAP HOP B:   "; cin>>b; cout<< "  Day b = { "<< b << "} ";
	cout<< endl <<"------------------> a+b = { " <<(a+b) <<" } ";
	cout<< endl <<"------------------> a-b = { " <<(a-b) <<" } ";
	cout<< endl <<"------------------> b-a = { " <<(b-a) <<" } ";
	cout<< endl <<"------------------> a*b = { " <<(a*b) <<" } ";
   	
}
