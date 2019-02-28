#include<iostream>
#include
using namespace std;
int main(int argc, char** argv []){
char s=0;
	for(int i=0;i<argc;i++){
		cout <<"\n "<< i<< ":"<< argv[i];
	}
	for(int i=0;i<argc;i++){
		s=s+argv[i];
	}
	cout << s;

