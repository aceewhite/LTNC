#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int first, int last)
{
    if (last >= first) {
        int m = first + (last - first) / 2;
        if (n == arr[m]) return m;
        else if (n < arr[m]) return binarySearch(arr, n, first, m - 1);
        else return binarySearch(arr, n, m + 1, last);
    }
    return -1;
}

int main()
{
    cout << "Please enter the size of your array: ";
    int size;
    cin >> size;

    cout << "Please enter all the values in your array: ";
    vector<int> arr;
    arr.resize(size);
    for (int i = 0; i < size; i++) cin >> arr[i];

    cout << "Please enter the value you want to search for: ";
    int n;
    cin >> n;

    sort(arr.begin(), arr.end());
    int result = binarySearch(arr, n, 0, size - 1);
    cout << "The value you are looking for is in the index of " << result << " after sorted" << endl;
    return 0;
}
