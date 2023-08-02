#include <iostream>

bool isUgly(int num) {
    if (num <= 0) {
        return false;
    }
    while (num % 2 == 0) {
        num /= 2;
    }
    while (num % 3 == 0) {
        num /= 3;
    }
    while (num % 5 == 0) {
        num /= 5;
    }
    return num == 1;
}
int main() {
    int num;
    std::cin >> num;
    if (isUgly(num)) {
        std::cout <<"Ugly Number"<<std::endl;
    } else {
        std::cout<< "Not Ugly Number" << std::endl;
    }
    return 0;
}
