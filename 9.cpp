#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int val = int(s[0]);
	if(val>96){
		val-=32;
	}
	s[0]=val;
	cout<<s;
}