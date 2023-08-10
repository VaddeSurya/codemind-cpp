#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[100], n;
    cin >> n;

    unordered_set<int> odd_set;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 != 0) {
            odd_set.insert(arr[i]);
        }
    }

    int sum = 0;
    for (int num : odd_set) sum += num;

    cout << sum;

    return 0;
}
