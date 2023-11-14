/******************************************************************************

Sorted Pair Sum
Given a sorted array and a number x, find a pair in array whose sum is closest to x.

Input Format
In the function an integer vector and number x is passed.

Output Format
Return a pair of integers.



Sample Input
{10, 22, 28, 29, 30, 40}, x = 54


Sample Output
22 and 30

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    int start=0;
    int end = arr.size()-1;
    int cs =0;
    int diff = INT_MAX;
    int left, right;
    while(start < end){
        cs = arr[start] + arr[end];
        if( abs(cs - x) < diff)
        {
            left = start;
            right = end;
            diff = abs(cs -x);
        }
        if(cs < x){
            start++;
        }
        else if(cs> x){
            end--;
        }
    }
    return {arr[left], arr[right]};
}