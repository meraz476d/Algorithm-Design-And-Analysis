#include <bits/stdc++.h>
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

    bool f = false; // Declared variable to track k

    int leftI = 0;      // Initialized left index
    int rightI = n - 1; // Initialized right Index

    while (leftI <= rightI)
    {                                   // Checks if leftI is less than or equal to rightI
        int mid = (leftI + rightI) / 2; // Calculating mid index

        if (arr[mid] == k)
        {             // Checks if the value of mid index is equal to k
            f = true; // If value of mid index is equal to k, the value of f will be true
            break;    // breaking the loop
        }
        else if (arr[mid] > k)
        {                     // Checks if the value of mid is greater than k
            rightI = mid - 1; // The right index is the previous index of mid
        }
        else
        {                    // The value of mid is less than the k
            leftI = mid + 1; // the left index is the next index of mid
        }
    }

    if (f == true)
    { // If the value of f is true, the output will be Number is found
        cout << "Number is found\n";
    }
    else
    { // If the value of flag is false, the output will be Number isn't found
        cout << "Number isn't found\n";
    }

    return 0;
}