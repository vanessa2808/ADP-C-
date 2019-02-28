#include<iostream>
using namespace std;
float sum(float k){
	float s=0;
	int i=1;
	while((1.0/i )>= k){
		s=s+(1.0/i);
		i++;
	}
	return s; 
}
	int main(){
		float epsilon;
		do{
		cout<< "Enter epsilon: "; cin>> epsilon;
		} while (epsilon<=0 || epsilon>=1) ;
		cout<< "sum: "<< sum(epsilon);
}
