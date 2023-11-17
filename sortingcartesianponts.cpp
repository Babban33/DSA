/******************************************************************************

Sorting Cartesian Points
Given co-ordinates of N points on X-Y axis, your task is to sort them in accordance to the x-coordinate.
If the x-coordinates are same then compare y-coordinates.

Input Format
In the function an integer vector of pairs is passed.

Output Format
Return the vector in sorted order.

Sample Input
{ (3, 4), (2, 3), (3, 7), (1, 5), (3, 4) } 

Sample Output
{ (1, 5), (2, 3), (3, 4), (3, 4), (3, 7) }

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here
    // Sorting the vector of pairs
    sort(v.begin(), v.end());
    return v;
    
    
    // Sorting the vector of pairs using bubble sort
    // for (int i = 0; i < N - 1; ++i) {
    //     for (int j = 0; j < N - i - 1; ++j) {
    //         // Compare x-coordinates first
    //         if (v[j].first > v[j + 1].first || (v[j].first == v[j + 1].first && v[j].second > v[j + 1].second)) {
    //             // Swap if the current pair is greater
    //             swap(v[j], v[j + 1]);
    //         }
    //     }
    // }
}
