// nhap nam sinh 1999 (chia 10 du 0--9
// cho biet tuoi gi
// conL giaps , at, bih ,dinh, mau, ki, canh, tan nham, qui
// chi: ti suu dan meo thin ti ngo mui than dau tuat hoi
//  
#include<iostream>
#include<math.h>
#include<string>
using namespace std;
	string can[10]={"canh","tan","nham","qui","giap","at","binh","dinh","mau", "ki"};
	string chi[12]={"than","dau","tuat","hoi","ti","suu","dan","meo","thin","ti","ngo","mui"};
int main(){
	int year;
	cout<<" enter year" ; cin >> year;
	cout<<"theo am lich, ban tuoi:  " << can[year%10]+ " " << chi[year%12];
//	int sd= year%10;
//	int sd1= year%12;
//	if ( sd== 0  ) cout<<"canh ";
//	else if (sd==1 ) cout<< " tan " ;
//	else if (sd==2 ) cout <<" nhan " ;
//	else if (sd==3 )cout<<" qui ;";
//	else if (sd==4 )cout<< "giap ";
//	else if (sd==5)cout<< "at ";
//	else if (sd==6 )cout<< "binh ";
//	else if (sd==7 )cout<< "dinh ";
//	else if (sd==8)cout<< "mau ";
//	else if (sd==9 )cout<< "ki ";
//	
//	if ( sd1== 0  ) cout<<"than ";
//	else if (sd1==1 ) cout<< " dau " ;
//	else if (sd1==2 ) cout <<" tuat " ;
//	else if (sd1==3 )cout<<" hoi ;";
//	else if (sd1==4 )cout<< "ti ";
//	else if (sd1==5)cout<< "suu ";
//	else if (sd1==6 )cout<< "dan ";
//	else if (sd1==7 )cout<< "mao ";
//	else if (sd1==8)cout<< "thin ";
//	else if (sd1==9 )cout<< "ti ";
//	else if (sd1==10 )cout<< "ngo ";
//	else if (sd1==11 )cout<< "mui ";
//	
//	// switch
//	switch(sd){
//		case 0: cout<<"canh "; break;
//		case 1: cout<<"ta  "; break;
//		case 2: cout<<"nhan "; break;
//		case 3: cout<<"qui ";break;
//		case 4: cout<<"giap ";break;
//		case 5: cout<<"an ";break;
//		case 6: cout<<"binh ";break;
//		case 7: cout<<"dinh  ";break;
//		case 8: cout<<" mau  ";break;
//		case 9: cout<<"ki ";break;
//	}
//		switch(sd1){
//		case 0: cout<<"than ";break;
//		case 1: cout<<"dau  ";break;
//		case 2: cout<<"tuat ";break;
//		case 3: cout<<"hoi ";break;
//		case 4: cout<<"ti ";break;
//		case 5: cout<<"suu ";break;
//		case 6: cout<<"dan ";break;
//		case 7: cout<<"meo  ";break;
//		case 8: cout<<" thin  ";break;
//		case 9: cout<<"ti ";break;
//		case10: cout<<"ngo ";break;
//		case 11: cout<<"mui ";break;
//	}
		
	}
	
	
	
