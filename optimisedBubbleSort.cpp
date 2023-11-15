/******************************************************************************

Optimized Bubble Sort
In simple bubble sort algorithm, the time complexity will remain O(n^2) every time, even if the given array is already sorted.
Your task is to optimized the bubble sort such that its best case time complexity becomes O(n).

Input Format
In the function an integer vector is passed.

Output Format
Return an integer vector in non decreasing order.

Sample Input
{1, 3, 5, 7, 9}


Sample Output
{1, 3, 5, 7, 9}}


Explanation
given vector is already sorted

*******************************************************************************/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void bubblesort(vector<int> &arr)
{
    bool swapped;
    for(int i = 0; i < arr.size() - 1; i++)
    {
        bool swapped= false;
        for(int j = 0; j < arr.size() - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
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