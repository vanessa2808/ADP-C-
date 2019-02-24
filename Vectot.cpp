#include<vector>
#include<iostream>
#include<algorithm>
#include <list>
using namespace std;
class myVector{
private:
	int size;
	int *a;
public :
void input(vector <int> &a, int &n){
	int x;
	cout << " please, Enter n: "; cin >> n;
	for(int i=0;i<n;i++){
		cout << "Nhap so thu " << i<<":";
		cin >>x;
		a.push_back(x);
	}
}
void output(vector <int> a, int n){
	for(int i=0;i<n;i++){
		cout << a[i] << "  ";
	}	
}	
// tim cac so co trong hai mang a va b
void listAandB(vector <int> a, int m,vector <int> b,int n){
	cout << "Cac so co trong hai day: ";
	for(int i=0;i<m;i++){
		if(find(b.begin(),b.end(),a[i])!=b.end()){
			cout<<a[i];
		}
	}
}
// tim so chi chua trong mang a
void listonlyA(vector <int> a, int m,vector <int> b,int n){
	cout << "Cac so co trong day a: ";
	for(int i=0;i<m;i++){
		if(find(b.begin(),b.end(),a[i])==b.end()){
			cout<<a[i];
		}
	}
}
// tim so co trong mang a hoac b
void listAorB(vector <int> a, int m,vector <int> b,int n){
	cout << "Cac so co trong mang a hoac b la : ";
	for(int i=0;i<m;i++){
		if(find(b.begin(),b.end(),a[i])==b.end()){
			cout<<a[i]<< "  ";
		}
	}
	for(int i=0;i<m;i++){
		if(find(b.begin(),b.end(),a[i])!=a.end()){
			 cout<< b[i] << "  ";
		}
	}
}
// dao vector reserve in vector
void reverseVector(vector <int> a, int m ){
	std::reverse(a.begin(),a.end());
	cout << "Vector contains = ";
	for(std::vector<int>::iterator it = a.begin();it!=a.end(); ++it){
	 cout << endl << "  " << *it << endl;
	}
} 
//chen xoa vector
void removeElement(vector <int> a, int m){
	int x;
	cout<<" Enter index you want to remove: "; cin >> x;
 	a.erase (a.begin(),a.end());
  std::cout << "myvector contains:";
  for (int i=0; i<a.size(); ++i)
    cout << "  "<< a[i];
 	cout << endl;
}
// decrease vector
bool mycmp(int a,int b){
	return a>b;
}
void sortDecrease(vector <int> a, int m){
	//sort(a.begin(),a.end(),mycmp);
	for(int i=0;i<a.size();i++) cout <<endl <<"vector contain: "<<  a[i] << "  ";
}
~myVector(){
		if(a!=NULL){
		 delete[]a;}
		}
	myVector(){
	
	}
		};
int main(){
vector <int> a;
vector <int> b ;
myVector a;
a.input(a,n);
myVector c(a);
///vector <int> a;
//vector <int> b ; 
//int n,x,m;
//	input(a,m);
//	output(a,m);
//	sortDecrease(a,m);//
//	input(b,n);
//	output(b,n);
//	sortDecrease(b,n);
//	MyVector();
	////removeElement(a,m);
	//removeElement(b,n);
	//reverseVector(a,m);
	//reverseVector(b,n);
	//listAorB(a,m,b,n);
	
	
}
	
