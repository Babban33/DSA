/******************************************************************************

Bubble Sort
Time = O(n^2)

*******************************************************************************/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void bubblesort(vector<int> &arr)
{
    for(int i = 0; i < arr.size() - 1; i++)
    {
        for(int j = 0; j < arr.size() - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    bubblesort(arr);
    
    for(auto x: arr){
        cout << x << ", ";
    }
    
    return 0;
}