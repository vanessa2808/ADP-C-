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
	FILE *fi=fopen("D:\\a.txt","r");
	char c;	
	int dem=0;
	//ifstream fi("D:\\a.txt"); 
	while(!feof(fi)){
		fscanf(fi,"%c",&c);
		if(c==' '||c==','|| c=='.'||c=='?')
			if(feof(fi));
			else dem++;
			
	}
		//cout << int(c);
		//cout<< "so tu "<< ": "<<dem;
	//	if(f[i]>0) cout<<" \n "<<char(i)<<": "<< f[i];
						//dem so tu xuat hien trong chuoi
	
}
