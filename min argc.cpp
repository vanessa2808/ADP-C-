#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char ** argv){
	if(argc<2) cout<<"\n Khong tim duoc so nho nhat!";
	else{
		int m=atoi(argv[1]);
		for(int i=1;i<argc;i++){
			int t=atoi(argv[i]); cout <<" "<< argv[i];
			if(t<m) m=t;
		}
		cout <<endl<< "so nho nhat " << m << "\n";
	}
}
