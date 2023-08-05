#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int Even = 0;
    int Odd = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            Even += arr[i];
        } else {
            Odd += arr[i];
        }
    }

    int diff = abs(Even - Odd);
    cout << diff << endl;
    return 0;
}
