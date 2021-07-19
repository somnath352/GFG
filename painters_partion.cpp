#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

	long long find(int arr[], int n, int at_most){
		long total = 0;
		int painters = 1;

		for(int i = 0; i < n; i++){
			total += arr[i];

			if(total > at_most){
				total = arr[i];
				painters++;
			}
		}
		return painters;
	}

	long long minTime(int arr[], int n, int k){
		long total = 0;
		int m = 0;
		for(int i = 0;i<n;i++){
			m = max(m, arr[i]);
			total = total + arr[i];
		}

		long low = m, high = total;

		while(low < high){
			int mid = (low+high) / 2;

			long long painters = find(arr, n, mid);

			if(painters <= k){
				high = mid;
			}
			else
				low = mid+1;
		}
		return low;
	}

};

int main(){

	int t;
	cin >> t;
	while(t--){
		int k, n;
		cin >> k >> n;

		int arr[n];
		for(int i = 0; i < n; ++i){
			cin >> arr[i];
		}

		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;

	}
	return 0;
}