#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int strictly_even = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && i % 2 != 0) {
            strictly_even = 0;
            break;
        }
    }

    if (strictly_even) {
        cout<<"True";
    } else {
        cout<<"False";
    }

    return 0;
}
