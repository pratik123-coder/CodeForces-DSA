#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string a,b;
	cin>> a >> b;

	int n1 = a.length();
	int n2 = b.length();
	int large =n1 > n2? n1 : n2; 

	for( int i = 0;i < large ; i++ ){
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
	}
	int compare = a.compare(b);
	if( compare < 0){
		cout << "-1";
	}
	else if( compare > 0){
		cout << "1";
	}
	else{
		cout<<"0";
	}
}