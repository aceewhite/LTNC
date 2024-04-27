#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int q;
    std::cin >> q;

    while (q--) {
        int query;
        std::cin >> query;

        int left = 0, right = n - 1, idx = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (numbers[mid] == query) {
                idx = mid;
                right = mid - 1;
            } else if (numbers[mid] < query) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (idx != -1) {
            std::cout << "Yes " << idx + 1 << std::endl;
        } else {
            int next_idx = left;
            std::cout << "No " << next_idx + 1 << std::endl;
        }
    }

    return 0;
}

