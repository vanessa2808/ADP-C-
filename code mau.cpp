


#include <iostream>
#include<fstream>
using namespace std;
typedef struct phanso PHANSO;

struct phanso
{
	int tuso,mauso;
};


void docfile(ifstream &filein,PHANSO a,PHANSO b)

{
	filein.open("phan so.inp",ios_base::in);
	if(!filein)
	{
		cout<<"khong tim thay file input!";
		
	}
	filein>>a.tuso;
	filein.seekg(1,ios_base::cur);
	filein>>a.mauso;
	filein>>b.tuso;
	filein.seekg(1,ios_base::cur);
	filein>>b.mauso;
	filein.close();
	
	
	
}


int UCLN(int a,int b)
{
	int c=a%b;
	if(c==0)	return b;
	else return UCLN(b,c);
	
}



void rutgon(PHANSO &x)// rut gon => thay doi ca tu so va mau so
{
	int ucln;
	ucln=UCLN(x.tuso, x.mauso);
	x.tuso/=ucln;
	x.mauso/=ucln;
}




PHANSO operator +(PHANSO a,PHANSO b)
{
	PHANSO tong;
	tong.tuso=a.tuso*b.mauso+b.tuso*a.mauso;
	tong.mauso=a.mauso*b.mauso;
	rutgon(tong);
	return tong;
}




PHANSO operator -(PHANSO a,PHANSO b)
{
	PHANSO hieu;
	hieu.tuso=a.tuso*b.mauso-b.tuso*a.mauso;
	hieu.mauso=a.mauso*b.mauso;
	rutgon(hieu);
	return hieu;
}




PHANSO operator *(PHANSO a,PHANSO b)
{
	PHANSO tich;
	tich.tuso=a.tuso*b.tuso;
	tich.mauso=a.mauso*b.mauso;
	rutgon(tich);
	return tich;
		
	
}



PHANSO operator /(PHANSO a,PHANSO b)
{
	PHANSO thuong;
	thuong.tuso=a.tuso*b.mauso;
	thuong.mauso=a.mauso*b.tuso;
	rutgon(thuong);
	return thuong;
	
}



void ghifile(ofstream &fileout ,PHANSO a,PHANSO b)
{
	fileout.open("output.txt",ios_base::out);
	PHANSO tong,hieu,tich,thuong;
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=a/b;
	
	fileout<<"tong :" <<tong.tuso<<"/"<<tong.mauso<<endl;
	fileout<<"hieu: "<<hieu.tuso<<"/"<<hieu.mauso<<endl;
	fileout<<"tich :" <<tich.tuso<<"/"<<tich.mauso<<endl;
	fileout<<"thuong :" <<thuong.tuso<<"/"<<thuong.mauso<<endl;
	
	
	fileout.close();
	
	
	
	
}




int main(int argc, char** argv) {
	PHANSO a,b;
	ifstream filein;
	ofstream fileout;
	docfile(filein,a,b);
	ghifile(fileout,a,b);
	return 0;
}
