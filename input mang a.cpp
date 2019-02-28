#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void input(int*&a, int &n){
	cout<< "Nhap so phan tu: "; cin >>n;
	a= new int [n];
	for(int i=0;i<n;i++){
	cout<<"a [ " << i << "]=";
	cin >> a[i];
	}
}
// print mang 
void print(int*a, int n){
	cout<< "\n Noi dung mang: \n ";
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
}
//sum
float sum(int*&a, int &n ){
	int s=0;
	for(int i=0;i<n;i++){
		 s=s+a[i];
	}
	
	cout <<  s;
}
//sum odd number 
void sum1(int*&a, int &n){
	int s1=0;
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			cout << " \n odds number in array: " << a[i] << "\n ";
			s1=s1+a[i];
			dem++;
		}
	}
	cout<<"\n sum of odd number = ";
	cout << s1;
	cout<< "\n count = " << dem;
}
// print even number
void printEvenNumber(int*&a, int &n){
	cout<< "\n in so chan trong mang : \n ";
	for(int i=0;i<n;i++){
	if(a[i]%2==0){
		cout << a[i] << " ";
	}
}
}
// is prime number
bool isPrimeNumber(int x){
	for(int i=2; i<= sqrt(x);i++){
		 if(x%i==0 ) return false;
		else return true;
	}
}
void checkArray(int*&a, int &n){
	for(int i=0;i<n;i++){
		bool kt= isPrimeNumber(a[i]);
		if(kt==true || a[i]==2 || a[i]==3) cout << a[i] << "   ";
	}
}
// sort
void sortNumber(int*&a, int &n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]> a[j]){
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
}
}
float maxNumber(int*&a, int &n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if( a[i]> max) max= a[i];
	}
	cout << " \n Max Number = " << max;
}
// sum lon nhat of 2 so ke nhau
// sum lon nhat cua 2 so bat ki
// in ra so hoan thien trong mang
// kiem tra mang tang dan
bool checkIncreasingarray(int*&a, int &n){	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]) return true;
		else return false;
	}
}
}
// kiem tra mang giam dan
// kiem tra mang doi xung
// chen so vao mang, xoa so vao mang, sap sep
void insertSort(int*&a, int&n){
	int index,value;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]> a[j]){
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout << "\n Enter index that you want to insert: "; cin >> index;
	cout << "\n ENter value that you want to insert: "; cin >> value;
	for(int i=n;i >=index ;i--){
		a[i]=a[i+1];
	}
	n++;
	a[n]= value;
}
// kiem tra mang co so doi xung, sau do tinh tong
// kiem tra mang co chua gia tri x khong
bool checkX(int*&a, int&n,int &x){	
		cout << "Enter value that you wanna find: "; cin >> x;
		for(int i=0;i<n;i++){
			if(a[i]==x) return 1;
			return 0;
		}
		
	}
	// dao mang
	void dao(int*&a, int&n){
		for(int i=0;i<=n/2-1;i++){
			a[i]= a[n-i-1];
			break;
		}
//	int d=0;int c=n-1;
//	while(d<c){
//		int t= a[d];
//		a[d]=a[c];
//		a[c]=t;
//		d++;
//		c--;
//	}
	}
	// count so mang tang trong array
void countIncrease(int*a, int n){
		int dem=1;
		for(int i=0;i<n-1;i++){
			if(a[i]> a[i+1]) {
				dem= dem+1;
				cout << a[i] << "  " ;
				}
			else 
			 cout <<a[i];
		}

	cout << "\n dem = " << dem;
	}
	// in ra day con lien tiep  co tong max
int sumMax2(int*a, int n){
	int sum=0,dau,cuoi,max=sum=0,temp=0;
	for(int i=0;i<n;i++){
		sum=sum+a[i];
		if(sum>max)	{
			max=sum;
			dau=temp;
			cuoi=i;
		}
		if(sum < 0)	{
			temp=i+1;
			sum=0;
		}
	}
	for(int i=dau;i<=cuoi;i++)
		cout<<endl << a[i] << endl;
	cout<<endl<<"Max = " << max;
}
int mycmp(int a,int b){
	return a>b;
}
void sortDecrease(int *a,int n){
	cout<<endl;
	sort(a.begin(),a.end(),mycmp);
}
int main(){
	int *a,n,s,index,value,x;
	input(a,n);
	print(a,n);
	sortDecrease(a,n);
	print(a,n);
//	cout<<"\n sum = ";
//	sum(a,n);
//	sum1(a,n);
//	printEvenNumber(a,n);
//	cout<< "\n Prime Number in array is : ";
//	checkArray(a,n);
//	sortNumber(a,n);
//	print(a,n);
//	maxNumber(a,n);
	//insertSort(a,n);
	//print(a,n);
	//checkX(a,n,x);
//		if(checkX(a,n,x)==1) cout<< x<< "has in array";
//		else cout << x << "has not in array ";
//	if(checkIncreasingarray(a,n)== true ) cout << "Increasing array ";
//else cout << "not increasing array";
	//dao(a,n);
//	print(a,n);
//countIncrease(a,n);
//sumMax2(a,n);

}
// nhap tinh tong tinh so luong s =i ke
