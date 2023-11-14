/******************************************************************************

K-Rotate
Given an integer vector and a value k, your task is to rotate the array k times clockwise.

Input Format
In the function an integer vector and number k is passed.

Output Format
Return an integer vector.

Sample Input
{1, 3, 5, 7, 9}, x = 2


Sample Output
{7, 9, 1, 3, 5}


Explanation

After 1st rotation - {9, 1, 3, 5, 7}
After 2nd rotation - {7, 9, 1, 3, 5}

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    // Use When you want to return a different array the space complexity will be O(k*n)
    // int n = a.size();
    // k = k%n;
    // vector<int> output;
    // for(int i = n-k; i<n; i++){
    //     output.push_back(a[i]);
    // }
    // for(int j = 0; j< n-k; j++)
    // {
    //     output.push_back(a[j]);
    // }
    // return output;
    
    //This will return the same array with space complexity O(n)
    int n = a.size();
    k = k%n;
    //reverse the original array from start till n-k
    reverse(a.begin(), a.begin()+ n-k);
    //reverse the original array from n-k till end
    reverse(a.begin()+ (n-k), a.end());
    //reverse the original array from start till end
    reverse(a.begin(), a.end());
    return a;
}
