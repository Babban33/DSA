/******************************************************************************
Maximum Subarray Sum
Implement a function that takes an array as input and returns the maximum subarray sum.

Sample Input:
1 -2 3 4 4 -2
5 0 -1 0 1 2 -1

Sample Output:
11
7
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int cs = 0;
	int largest = INT_MIN;
	bool isnegative = true;
	for(int x: A)
	{
	    if(x > 0){
	        isnegative = false;
	    }
	    largest = max(largest, x);
	}
	if(isnegative){
	    return largest;
	}
	int ans = 0;
	for(int i=0;i<A.size();i++){
		cs = cs + A[i];
		if(cs < 0){
			cs = 0;
		}
		ans = max(ans, cs);
	}

	return ans;
}
