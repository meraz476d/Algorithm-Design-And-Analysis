#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;     // Declared a variable named n.
    cin >> n;  // Taken input from user for array size.

    int arr[n];                     // Declared an array of n size.
    for (int i = 0; i < n; i++){    // Taken input from user.
        cin >> arr[i];
    }

    int k;     // Declared varible to store k.
    cin >> k;  // Taken input of k.

    bool f = false;                // Declared variable to track k.
    for (int i = 0; i < n; i++){   // Traversing the array to find k.
        if (arr[i] == k){       // Checking if the value of this index is the k.
            f = true;           // If the current number is k, the value of f will be true.
            break;              // If the number is found, loop will break.
        }
    }

    if (f == true){         // If the value of f is true, the output will be Number is found.
        cout << "Number is found\n";
    } else{                 // If the value of flag is false, the output will be Number isn't found.
        cout << "Number isn't found\n";
    }
return 0;
}
