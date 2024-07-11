#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n, k;
	int res = 0;
	cin >> n >> k;
	vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
	int compare = arr[k - 1];
	for( int i = 0 ; i < n ; i++ ){
		if(arr[i] >= compare && arr[i] > 0){
			res++;
		}
	}
	cout<< res;
	return 0;
}