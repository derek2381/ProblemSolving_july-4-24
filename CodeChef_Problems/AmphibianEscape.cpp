// problem link
// https://www.codechef.com/problems/WELLLEFT


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long int n, x, h;
	    cin >> n >> x >> h;


	    long long int res = 0;
	    long long int k = 0;

	    for(long long int i = 1;i <= n;i++){
	        if(i >= h){
	            res += n;
	        }else{
	            long long int val = (i*x);
	            val -= h;
	            res += max(k, val/(x-1));
	        }
	    }

	    cout << res << endl;
	}

}
