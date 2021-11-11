#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
<<<<<<< HEAD
	if(phepToan=='-'){
		int kq = hieu(a,b);
=======
		if(phepToan=='+'){
		int kq = tong(a,b);
>>>>>>> 2df07b767f39dc69a972ba9947b5aabffee65349
		cout<<kq;
	}
	system("pause");
	return 0;
}
<<<<<<< HEAD
int hieu(int a, int b){
	return a-b;
=======

int tong(int a, int b){
	return a+b;
>>>>>>> 2df07b767f39dc69a972ba9947b5aabffee65349
}