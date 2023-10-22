/*
Time: O(n)
When to use: Small and unsorted Data, Finding Multiple Occurrences
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int search_element;
    int i=0;
    for(i=0; i<10; i++)
    {
        cout<<"Enter "<<i+1<<"th element: ";
        cin>> arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>search_element;
    for(i=0; i<10; i++)
    {
        if(arr[i]== search_element){
            cout<<"element present at index: "<<i+1<<endl;
        }
    }
    return 0;
}
