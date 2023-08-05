#include <iostream>
int main() {
    int N, M, K;
    std::cin >> N;
    std::cin >> M;
    std::cin >> K;

    int totalDaysNeeded = (N + K - 1) / K;
    if (totalDaysNeeded <= M) {
        std::cout << "YES"<< std::endl;
    } else {
        std::cout << "NO"<< std::endl;
    }

    return 0;
}
