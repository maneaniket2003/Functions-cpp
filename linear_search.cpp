#include<iostream>
using namespace std;

int linearSearch(int arr[], int key) {
	for(int i=0; i<7; i++) {
		if(arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {
	int arr[]={2,4,5,7,10,9,13};
    int key;
    cout<<"Enter an Element to be Searched : ";
    cin>>key;
    int index = linearSearch(arr, key);
    cout<<"Element fount at : "<<index;
}
