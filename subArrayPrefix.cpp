/******************************************************************************
time = O(n^2)
*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
void prefixSum(vector <int> &arr, int n){
    vector <int> prefix(n);
    //finding prefix array
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    //finding largest sum array
    int largestSum =0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subarraySum = i >0 ? prefix[j] - prefix[i-1] : prefix[j];
            largestSum = max(largestSum, subarraySum);
        }
    }
    cout<<largestSum;
}
int main()
{
    vector <int> arr={-2,3,4,-1,5,-12,6,1,3};
    prefixSum(arr, arr.size());
    return 0;
}
