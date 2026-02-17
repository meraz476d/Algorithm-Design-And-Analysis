#include <iostream>
using namespace std;

int main()
{
    int n;    // Declared a variable named n
    cin >> n; // Taken input from user for array size

    int arr[n]; // Declared an array of n size
    for (int i = 0; i < n; i++)
    { // Taken input from user
        cin >> arr[i];
    }

    int k;    // Declared varible to store k
    cin >> k; // Taken input of k

    sort(arr, arr + n); // Sorted the array

    int leftI = 0;      // Initialized left index
    int rightI = n - 1; // Initialized right Index

    int idx = -2; // Initialized idx with some random minus number

    while (leftI <= rightI)
    {                                   // Checking if leftI is less than or equal to rightI
        int mid = (leftI + rightI) / 2; // Calculating the mid index

        if (arr[mid] == k)
        {                     // Checking if the value of mid index is equal to k
            idx = mid;        // Index is setting to mid
            rightI = mid - 1; // The right index will go to the previous index of mid
        }
        else if (arr[mid] > k)
        {                     // Checking if the value of mid is greater than k
            rightI = mid - 1; // The right index will go to the previous index of mid
        }
        else
        {
            leftI = mid + 1; // the left index will go to the next index of mid
        }
    }

    if (idx == -2)
    { // If k doesn't exist on the array, it’s mean number isn’t found
        cout << "Number Isn't Found\n";
    }
    else
    { // If k exists on the array, the leftmost index of k will be the idx
        cout << "The Leftmost index of " << k << " is " << idx << '\n';
    }
    return 0;
}