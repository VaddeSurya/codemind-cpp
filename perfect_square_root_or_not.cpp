#include <iostream>
#include<cmath>
bool isPerfectSquare(int num) {
    if (num <= 0) {
        return false;
    }
    int root = int(sqrt(num));
    int ans = root * root;

    return ans == num;
}
int main() {
    int num;
    std::cin >> num;
    if (isPerfectSquare(num)) {
        std::cout <<"True"<< std::endl;
    } else {
        std::cout <<"False"<< std::endl;
    }
    return 0;
}
