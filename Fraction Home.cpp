#include<iostream>
using namespace std;
class Fraction{
private:
	int numerator, denominator;
public:
	void setnumerator(int n){
		numerator=n;
	}
	void setdenominator(int d){
		denominator=d;
	}
	double getnumerator(void){
		return numerator;
	}
	double getdenominator(void){
		return denominator;
	}
public:
	void input(){
		cout<<"Enter numerator: "; cin>> numerator;
		cout<<"Enter denominator: "; cin>> denominator;
	}
	void output(){
		cout<< numerator << "/"  << denominator;
	}
int main(){
	input();
	output();
}
};
