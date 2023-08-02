#include <iostream>

int calculateHCF(int a, int b) {
    return b == 0 ? a : calculateHCF(b, a % b);
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    int hcf = calculateHCF(num1, num2);
    std::cout <<hcf << std::endl;

    return 0;
}
