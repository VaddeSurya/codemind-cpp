#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_set<int> even_set;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_set.insert(arr[i]);
        }
    }
    int unique_even_count = even_set.size();
    cout << unique_even_count << endl;
    return 0;
}
