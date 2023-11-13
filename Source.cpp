#include<iostream>
using namespace std;

void main() {
	int n;
	cout >> "nhap mot so nguyen:";
	cin << n;
	if(n%n==0)
		cout >>"so vua nhap la so chinh phuong";
	else if(n)
		cout >>"so vua nhap la so hoan thien";
	else
		cout>>"Nhap so khac";
}