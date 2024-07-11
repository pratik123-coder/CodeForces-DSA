#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    vector<string> res(n);
    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }
    for ( int i = 0 ; i < n ; i ++ ){
        if (arr[i].length() <= 10 ){
            res[i] = arr[i];
        }
        else{
            int a;
            string b, c;
            a=arr[i].size();
            b=arr[i].substr(0,1);
            c=arr[i].substr(a - 1,1);
            res[i] = b + to_string(a - 2) + c;
        }
    }
    for ( int i = 0 ; i < n ; i++ ){
    	cout << res[i] << "\n";
    }
    return 0;
}