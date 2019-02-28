#include<iostream>
#include<fstream>
#include<vector>
#include <sstream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
						// dem so ki tu xuat hien trong chuoi
	int f[256];
	char c;	
	ifstream fi("D:\\a.txt"); 
	for(int i=0;i<256;i++)
		f[i]=0;
	while(!fi.eof()){
		f[c]++;
		fi>>c;
	}
	for(int i=0;i<256;i++)
		if(f[i]>0) cout<<" \n "<<char(i)<<": "<< f[i];
						//dem so tu xuat hien trong chuoi
	
}
