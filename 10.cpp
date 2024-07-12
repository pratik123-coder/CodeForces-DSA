#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.length();
	int flag;
    unordered_set<char> distinct_chars;
    
    for(char c : s) {
        distinct_chars.insert(c);
    }
    
    int dist_char = distinct_chars.size();
    
	if(dist_char % 2 == 0 ){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}
	return 0;
}