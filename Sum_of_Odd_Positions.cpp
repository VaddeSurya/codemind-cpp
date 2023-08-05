#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    int even = 0;

    for (int i = 1; i < n; i += 2) {
        even += arr[i];
    }
    cout<<even;
    return 0;
}
