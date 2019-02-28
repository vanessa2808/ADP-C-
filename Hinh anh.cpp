#include<iostream>
#include<vector>
#include<stdlib.h>
#include<unistd.h>
#include<algorithm>
#include<fstream>
#include<sstream>
#include<conio.h>
#include<windows.h>
#include<malloc.h>
#include<stdint.h>
#include<cmath>
#include<string.h>
using namespace std;
int main(){
	char *c;
	ifstream fi("5.jpg",ios::in |ios:: binary);
	ofstream fo("7.jpg",ios:: out| ios:: binary);
	long bg=fi.tellg();
	fi.seekg(0,ios::end);
	long end=fi.tellg();
	long size= bg-end;
	int i=1;
	while(i<=size){
		fi.read(c,1);
		fo.write(c,1);
	}
	fo.close();
	fi.close();
}
