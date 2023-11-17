/******************************************************************************

Chopsticks
Given N sticks and an array length where each length[i] represents length of each stick. Your task is to make maximum number of pairs of these sticks such that the difference between the length of two sticks is at most D. A stick can't be part of more than one pair of sticks.

Input Format
In the function an integer vector length and number D is passed.

Output Format
Return an integer representing total number of such pairs.

Sample Input
{1, 3, 3, 9, 4}, x = 2

Sample Output
2

Explanation
(1st, 3rd) and (2nd, 5th) can be paired together.
*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    // int count=0;
    // for(int i=0; i<length.size(); i++)
    // {
    //     for(int j=i+1; j<length.size(); j++){
    //         if(abs(length[i] - length[j]) == D){
    //             count++;
    //         }
    //     }
    // }
    // return count;
    sort(length.begin(), length.end());
    int count = 0;
    int i = 0;
    int j = 1;
    while(j < length.size()){
        if(length[j] - length[i] <= D){
            count++;
            i += 2;
            j += 2;
        }
        else{
            i++;
            j++;
        }
    }
    return count;
}