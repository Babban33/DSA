/******************************************************************************

Counting Sort
time: O(n+range)
useful when the given array elements lie in a certain range for example marks of students
lie in range (0-100)

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void countingSort(vector<int> &arr)
{
    //Find the largest number
    int largest=-1;
    for(int i=0; i<arr.size(); i++)
    {
        largest=max(largest, arr[i]);
    }
    
    //create a count array/vector
    vector<int> freq(largest+1, 0); //initialize vector of size "largest+1" with all "0"
    for(int x: arr)
    {
        freq[x]++; //for every occurance of number increase its frequency
    }
    
    //Put back the elements from freq into original array
    int j=0;
    for(int i=0; i <= largest; i++)
    {
        while(freq[i]>0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}
int main()
{
    vector<int> arr={88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    countingSort(arr);
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}
