#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int n ;
	cin >> n;
	
	vector<string> arr(n);

	for(int i = 0 ; i < n ; i++ ){
		cin >> arr[i];
	}
	int incr = 0;
	int dcre = 0;

	for ( int i = 0 ; i < n ; i++) {
		if(arr[i] == "X++" || arr[i] =="++X"){
			incr++;
		}
		if(arr[i] == "--X" || arr[i] =="X--"){
			dcre++;
		}
	}
	cout <<  incr-dcre;
}