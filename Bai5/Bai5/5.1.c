#include <iostream>
#include <cstdlib>

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);

    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    update(&a, &b);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}

