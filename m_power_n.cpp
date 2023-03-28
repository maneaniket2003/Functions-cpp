#include<iostream>
using namespace std;

int power(int a, int b) {
	int pow = 1;
	for(int i=1; i<=b; i++) {
		pow *= a;
	}
	return pow;
}
int main() {
	int a, b, c;
	cout<<"Enter number : ";
	cin>>a;
	cout<<"Enter power : ";
	cin>>b;
	c = power(a, b);
	cout<<c;
}
