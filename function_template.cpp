#include<iostream> 
using namespace std;

template<class T>
T Max(T a, T b) {
	if(a>b) {
		return a;
	} else {
		return b;
	}
}
int main() {
	
	cout<<Max(5,9)<<endl;
	cout<<Max(10.6f, 6.8f)<<endl;

	return 0;
}
