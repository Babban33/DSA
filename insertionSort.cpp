/******************************************************************************

Insertion Sort
time: O(n^2)

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr)
{
    for(int i =1; i<arr.size(); i++)
    {
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 and arr[prev]> current)
        {
            arr[prev+1] = arr[prev];
            prev = prev -1;
        }
        arr[prev+1] = current;
    }
}

int main()
{
    vector<int> arr = {5, 4, 1, 3, 2};
    insertionSort(arr);
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}