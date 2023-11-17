/******************************************************************************

Sorting with Comparator
Given an integer vector and a bool variable flag, your task is to sort the vector in accordance to the boolean value. If the bool value passed is true then sort it in non-decreasing order or vice versa.
You can use any sorting technique of your choice.

Input Format
In the function an integer vector and a boolean is passed.


Output Format
Return an integer vector.

Sample Input
{111, 33, 5, 7, 29}, flag = 1

Sample Output
{5, 7, 29, 33, 111}

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    if(flag){
        for(int i = 0; i < a.size() - 1; i++)
        {
            for(int j = 0; j < a.size() - i - 1; j++)
            {
                if(a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                }
            }
        }
    }
    else{
        for(int i = 0; i < a.size() - 1; i++)
        {
            for(int j = 0; j < a.size() - i - 1; j++)
            {
                if(a[j] < a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                }
            }
        }
    }
    return a;
    // else using merge sort
    // if(flag){
    //     sort(a.begin(), a.end());
    // }
    // else{
    //     sort(a.rbegin(), a.rend());
    // }
    // return a;
}
