/******************************************************************************
time: O(n^2)

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int>arr={1,2,3,4};
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i+1;j<arr.size(); j++)
        {
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
    return 0;
}