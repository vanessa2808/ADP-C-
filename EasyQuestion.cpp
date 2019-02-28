#include<iostream>
using namespace std;
char a[40] = "EAS*Y*QUE***ST***IO*N***", s[20], b[30];
//char s[20], b[30];
//void input(char *&a,int &n){
//	cout<<"Enter n: "; cin>> n;
//	for(int i=0;i<n;i++){
//		cout <<"Element " <<i<<": ";
//		cin>>a[i];
//}	
//}
int top = -1;
char pop(){
    if(top < 0)
       cout << "Underflow";
    else
       top--;

   return s[top+1];
 }
void push(char a){
	static int i=0;
    if(top>=24)
        cout << "Overflow.";
    else if(a=='*')
        b[i++]=pop();
    else
        s[++top]=a;
}
 int main(){
// 	char *a;
//	int n;
// 	input(a,n);
  	int i;
	cout <<a;
	for (i=0; i<24; i++)
    push(a[i]) ;
    cout << endl;
	for (i=0; i<24; i++)
    cout << b[i] ;
}
			
