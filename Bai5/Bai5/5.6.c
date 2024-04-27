#include <iostream>
#include <map>
#include <string>

int main() {
    int q;
    std::cin >> q;

    std::map<std::string, int> marks;

    while (q--) {
        int type;
        std::string name;
        std::cin >> type >> name;

        if (type == 1) {
            int score;
            std::cin >> score;

            marks[name] += score;
        } else if (type == 2) {

            marks.erase(name);
        } else if (type == 3) {

            std::cout << marks[name] << std::endl;
        }
    }

    return 0;
}

