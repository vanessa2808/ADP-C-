#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class TH {
	vector <int> collection;
	int n;
public:
	friend istream &operator>>(istream &is, TH  &b) {
		int x;
		int  index = 0;
		do 
		{
			cout <<endl<<"Enter element at "<< index + 1 << ": ";
			cin >> x;
			bool isExist = false;
			for (int i = 0; i < b.collection.size(); i++) 
			{
				if (b.collection[i] == x)
				{
					cout << "Element "<<x<<" is exist in collection, enter different number!";
					index = index - 1;
					isExist = true;
					break;
				}
			}
			if (!isExist) 
			{
				b.collection.push_back(x);
			}
			index++;
		} while (x != 0);
		return is;
	}

	friend ostream &operator<< (ostream &os, TH b) {
		if (b.collection.size() == 0) {
			os << "Empty!";
			return os;
		}
		for (int i = 0; i < b.collection.size(); i++) {
			if (b.collection[i] != 0)  	os << " " << b.collection[i] << " ";
		}
		return os;
	}
	TH operator+(TH b) {
		TH temp;
		temp.collection = this->collection;
		for (int i = 0; i < b.collection.size(); i++) {
			bool isExist = false;
			for (int j = 0; j < temp.collection.size(); j++)
			{
				if (b.collection[i] == temp.collection[j])
				{
					isExist = true;
					break;
				}
			}
			if (!isExist) 
			{
				temp.collection.push_back(b.collection[i]);
			}
		}
		return temp;
	}
	TH operator -(TH b) 
	{
		TH temp;
		for (int i = 0; i < this->collection.size(); i++) {
			bool isExist = false;
			for (int j = 0; j < b.collection.size(); j++)
			{
				if (this->collection[i] == b.collection[j])
				{
					isExist = true;
					break;
				}
			}
			if (!isExist)
			{
				temp.collection.push_back(this->collection[i]);
			}
		}
		return temp;
	}
	TH operator *(TH b)
	{
		TH temp;
		for (int i = 0; i < b.collection.size(); i++) {
			bool isExist = false;
			for (int j = 0; j < this->collection.size(); j++)
			{
				if (b.collection[i] == this->collection[j])
				{
					temp.collection.push_back(b.collection[i]);
				}
			}
		}
		return temp;

	}

};
int main() {
	//vector <int> a;
	TH a, b, c;

	cout << " Enter collection a "; cin >> a;  
	cout <<endl<< "Collection a = " << a;
	cout <<endl<< "Enter collection b: "; cin >> b; 
	cout <<endl<< "Collection b = " << b;
	cout << endl << "a+b = " <<( a + b);
	cout << endl << "a*b = " << (a * b);
	cout << endl << "a-b = " << (a - b);

	// bellow is useless code to prevent console auto close. Feel free to delete.
	int x;
	cin >> x;
}
