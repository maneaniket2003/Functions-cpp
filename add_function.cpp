#include<iostream>
using namespace std;

float add(float x, float y) {
	float z;
	z = x+y;
	return z;
}


int main() {
	float x=20.516, y=3.67, z;
	z = add(x, y);
	cout<<"Sum is "<<z;
	

}
