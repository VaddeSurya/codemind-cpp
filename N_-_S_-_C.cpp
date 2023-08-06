#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    for (int i = a+1; i <= b-1; i++) {
        int square = i * i;
        int cube = i * i * i;
        cout << i << " " << square << " " << cube << endl;
    }

    return 0;
}
