#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;
int main(){

stack <int> s;
int a = 22, b = 44; s.push(2);
 s.push(a); s.push(a + b);
 b = s.top(); s.pop(); s.push(b);
  s.push(a - b); s.pop(); 
  while (!s.empty()) { 
  	cout << s.top() << endl; 
	s.pop(); }
	}
