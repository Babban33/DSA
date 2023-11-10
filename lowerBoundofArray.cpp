/******************************************************************************

Lower Bound


Given an array of integers A (sorted) and a integer Val.
Implement a function that takes A and Val as input parameters and returns the lower bound of Val.
Note : If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer.
Otherwise Val itself is the answer.
If Val is less than smallest element of array A then return '-1' in that case.
Example 1  :
A = [-1, -1, 2, 3, 5]
Val = 4
Answer :  3
Since 3 is just smaller than 4 in the array.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val)
{
    int low = 0, high = A.size() - 1;
    int result = -1;  // Default value if Val is less than the smallest element

    while (low <= high) {
        int mid = (low + high) / 2;

        if (A[mid] == Val) {
            return Val;
        } else if (A[mid] < Val) {
            result = A[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}