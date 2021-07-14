#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(int arr[], int n){

		int result = 0;
		for(int i = 0;i<n;i++){
			result ^= arr[i];
		}
		return result;
	}

};

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0;i<n;i++){
			cin >> arr[i];
		}

		Solution obj;
		cout << obj.search(arr, n) << endl;
	}
	return 0;
}