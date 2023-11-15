/******************************************************************************

Selection Sort
time: O(n^2)

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr){
    for(int i=0; i<arr.size()-2; i++)
    {
        int current = arr[i];
        int min_position = i;
        //Find the smallest element
        for(int j=i; j<arr.size(); j++)
        {
            if(arr[j] < arr[min_position]){
                min_position = j;
            }
        }
        //Swap the smallest element with correct position
        swap(arr[min_position], arr[i]);
    }
}

int main()
{
    vector<int> arr = {5, 4, 1, 3, 2};
    selectionSort(arr);
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}