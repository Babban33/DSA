/******************************************************************************
time= O(n^3)
Use a variable k that will iterate between i till j.
*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
void findSubarray(vector <int> arr, int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<j; k++){
                cout<<arr[k]<<", ";
            }
            cout<<endl;
        }
    }
    return;
}
int main()
{
    vector <int> arr={1,2,3,4,5};
    findSubarray(arr, arr.size());
}
