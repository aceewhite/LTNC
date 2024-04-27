#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int remove_index;
    std::cin >> remove_index;
    numbers.erase(numbers.begin() + remove_index - 1);

    int a, b;
    std::cin >> a >> b;

    numbers.erase(numbers.begin() + a - 1, numbers.begin() + b - 1);

    std::cout << numbers.size() << std::endl;

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

