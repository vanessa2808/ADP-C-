#include<iostream>
#include<conio.h>
using namespace std;
//prototype
void AddMatrix(int *A, int *B,int *C,int M,int N);
int AllocMatrix(int **A, int M, int N);
void FreeMatrix(int *A);
void InputMatrix(int *A,int M, int N, char Symbol);
void DisplayMatrix(int *A, int M,int N);
int main(){
	int M,N;
	int *A= NULL, *B=NULL, *C=NULL;
//	clrscr();
	cout <<"Nhap so dong cua ma tran: ";
	cin>>M;
	cout<<"Nhap so cot cua ma tran: ";
	cin >>N;
	//cap phat vung nho cho ma tran A
	if(!AllocMatrix(&A,M,N)){
	// endl: xuat ra ki tu xuong dong 
	cout<<"Khong con du bo nho!"<< endl;
	return 1;
	}
	// cao phat vung nho cho ma tran B
	if(!AllocMatrix(&B,M,N)){
	cout<<"Khong con du bo nho!"<< endl;
	FreeMatrix(A); // giai phong cho vung nho A
	return 1;
	}
	// cap phat vung nho cho ma tran C
	if(!AllocMatrix(&C,M,N)){
		cout<<"Khong con du bo nho !"<< endl;
		FreeMatrix(A);// giai phong cho vung nho A
		FreeMatrix(B); // giai phong cho vung nho B
		return 1;
		
	}
	cout<<"Nhap ma tran thu 1 "<< endl;
	InputMatrix(A,M,N,'A');
	cout <<"Nhap ma tran thu 2"<< endl;
	InputMatrix(B,M,N,'B');
	//clrscr();
	cout<<"Ma tran thu 1: ";
	DisplayMatrix(A,M,N);
	cout<<"Ma tran thu 2";
	DisplayMatrix(B,M,N);
	AddMatrix(A,B,C,M,N);
	cout<<"Tong cua hai ma tran "<< endl;
	DisplayMatrix(C,M,N);
	FreeMatrix(A);
	FreeMatrix(B);
	FreeMatrix(C);
	return 0;	
}
// cong hai ma tran 
void AddMatrix(int *A, int *B, int *C,int M, int N){
	for(int i=0;i<M*N;i++)
		C[i]=A[i]+B[i];
	}
	// cap phat vung nho cho ma tran
int AllocMatrix(int **A, int M, int N){
	*A= new int[M*N];
	if(*A==NULL) return 0;
	return 1;
}
// giai phong vung nho
void FreeMatrix(int *A){
	if(A!=NULL)
		delete[]A;
}
// nhap cac gia tri cua ma tran
void InputMatrix(int *A,int M, int N, char Symbol){
	for(int i=0;i<M;++i)
	for(int j=0;j<N;++j){
		cout<< Symbol<<"[" << i << "] [" << j<< "]= ";
		cin >> A[i*N+j];
	}
}
// hien thi ma tran
void DisplayMatrix(int *A, int M,int N){
	for(int i=0;i<M;++i){
		for(int j=0;j<N;j++){	
			out.width(7); // canh le phai voi chieu dai 7 ki tu
			cout<<A[i*N+j] << "  ";
		}
		cout<< endl;
	}
}

