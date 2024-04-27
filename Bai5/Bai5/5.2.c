#include <iostream>
#include <algorithm> // For sort function
#include <vector>    // For vector container

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);


    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end());

    for (int i = 0; i < n; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

