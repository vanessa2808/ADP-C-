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
	FILE *fi=fopen("vidu2.cpp","r");	//mo file de doc dung r (r=read), mo file de ghi dung w(w=write)
	FILE *fo=fopen("phan so3.cpp","wt");
	if(fi==NULL || fo==NULL){
		cout<<"khong mo duoc file";
		getch();
	}
	else{
		while(!feof(fi) ){ 
		fscanf(fi,"%c",&c);
		fprintf(fo,"%c",c);
		}
		fclose(fo); fclose(fi);
		cout<<"\n Da in xong";
	}
}
