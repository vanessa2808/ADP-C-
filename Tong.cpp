#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char** argv){
    cout <<"Welcome to plus world!!!!!";
	float s=0;
	for(int i=0;i<argc;i++){
		cout <<"\n "<< i<< ":"<< argv[i];
		float t=atof(argv[i]);
		s=s+ t;
	}
	cout<< endl << "tong cua hai so a, b la : ";
	cout<< s;
	return 0;
}
	
