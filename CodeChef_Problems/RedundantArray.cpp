// problem link
// https://www.codechef.com/problems/REDUARRAY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    map<int ,int> mp;

	    int n;
	    cin >> n;
	    vector<int> arr(n);

	    long long int max_val = 0, max_freq = 0;

	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	        mp[arr[i]]++;


	    }

	    long long int res = n;

	     for(long long int i = 1;i <= n;i++){
	         long long int count = mp[i];
	         long long int freq = n - count;
	         long long int cost = freq*i;
	         res = min(cost, res);
	     }

	     cout << res << endl;
	}

}
