#include<iostream>
using namespace std;
int *a;
void input(int *&a, int &n)
{
	cout<<"Enter n: ";   cin>>n;
	a= new int[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element "<<i<<": ";
		cin>>a[i];
	}
}
void output(int *a,int n){
 	cout << endl <<"   Array contains: ";
	for(int i=0;i<n;i++){
		cout << a[i] <<"    ";
	}
}
void selectionSort(int *a, int n)
{
	for(int i=0; i<n-1; i++)
	{
		int min=i;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]<a[min])	
				min=j;
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
}	
int main()
{
	int *a, n;
	input(a, n);
	output(a,n);
	selectionSort(a,n);
	output(a,n);
}

