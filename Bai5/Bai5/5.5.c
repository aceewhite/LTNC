#include <iostream>
#include <set>

int main() {
    int q;
    std::cin >> q;

    std::set<int> s;

    while (q--) {
        int type, num;
        std::cin >> type >> num;

        if (type == 1) {

            s.insert(num);
        } else if (type == 2) {

            s.erase(num);
        } else if (type == 3) {

            auto it = s.find(num);
            if (it != s.end()) {
                std::cout << "Yes" << std::endl;
            } else {
                std::cout << "No" << std::endl;
            }
        }
    }

    return 0;
}

