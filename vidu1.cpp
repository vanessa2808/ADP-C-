#include<iostream>
#include<vector>
#include<stdlib.h>
#include<unistd.h>
#include<algorithm>
#include<fstream>
#include<sstream>
#include<conio.h>
#include<time.h>
#include<windows.h>
using namespace std;
typedef struct ps{
	int tu, mau;
};
int main()
{
	char c;
	FILE *fi=fopen("D:\\phan so.inp","r");	//mo file de doc dung r (r=read), mo file de ghi dung w(w=write)
	if(fi==NULL){
		cout<<"khong mo duoc file";
		getch();
	}
	else{
		while(!feof(fi)){ 
		fscanf(fi,"%c",&c);
		cout<<c; Sleep(1);
		}
		cout<<"\n Da in xong";
	}
}
