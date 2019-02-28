#include <iostream>
#include <ctime>

using namespace std;

int main( )
{
   // tra ve date/time hien tai dua tren system hien tai
   time_t baygio = time(0);

   cout << "So giay ke tu 1/1/1970 la: " << baygio << endl;

   tm *ltm = localtime(&baygio);

   // in cac thanh phan cua cau truc tm struct.
   cout << "Nam: "<< 1900 + ltm->tm_year << endl;
   cout << "Thang: "<< 1 + ltm->tm_mon<< endl;
   cout << "Ngay: "<<  ltm->tm_mday << endl;
   cout << "Thoi gian: "<< ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;
}
