/******************************************************************************
initialize two pointers on start and end
keep on swapping them until start > end.

time: O(n)

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (const auto &var : arr) {
        cout << var << " ";
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    reverseArray(arr);

    return 0;
}
