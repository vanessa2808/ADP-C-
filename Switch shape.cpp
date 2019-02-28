// enter 1 2 3 nhap ban kinh hinhf trn
//2. nhap hinh chu nhat
//3. hinh tam giac
//4. khong hop le
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a;
	do{
		cout<<" Welcome to shape\n";
		cout<<"1--Circle!..\n";
		cout<<"2--Rectangle!..\n";
		cout<<"3--Triangle!..\n";
		cout<<"please, choosing correctly!....\n";
	cout<<"please, choosing your demand: "; cin>>a;
	switch(a){
		case 1: cout<< " welcome to circle" ;
				float r,s;
				cout<<" enter radius: "; cin>> r;
				s=3.14*r*r;
				cout<< " Area: " << s;
				break;
		case 2: cout<<" welcome to rectangle" ;
				float a,b,s1;
				cout <<" enter a:"; cin >>a;
				cout<< "enter b: ";cin >> b;
				s1=a*b;
				cout<< " Area: " << s1;
				break;
		case 3: cout << "welcome to triangle" ;
				float a1,b1,c1,p,s2;
				cout<< "enter a"; cin>> a1;
				cout<< "enter b"; cin >> b1;
				cout << "enter c: "; cin >>c1;
				if((a1+b1>c1 || a1+c1>b1 || b1+c1>a1)&&(a1>0 && b1>0 && c1>0)){
					cout<< a1 << ","<< b1 << ", "<< c1<< " create triangle\n" ;
					p=(a1+b1+c1)/2;
					s2=sqrt(p*(p-a1)*(p-b1)*(p-c1));
					cout<< " Area: " << s2;
		} 
			else cout<<" not create triangle";
			break;
		default: cout<<" enter invalidly number.....!";
	}
	}while(a!=0);
}

