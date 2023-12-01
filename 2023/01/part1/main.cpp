#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>

int main() {
    std::ifstream file("input");
    std::string line;

    int first = 0;
    int last = 0;
    int sum = 0;
    while (std::getline(file, line)) {
        for (char& c : line) {
            if (isdigit(c)) {
                first = c - '0';
                break;
            }
        }
        for (char& c : std::string(line.rbegin(), line.rend())) {
            if (isdigit(c)) {
                last = c - '0';
                break;
            }
        }

        std::cout << line << " >> " << first << "," << last;
        std::cout << std::endl;
        std::cout << sum << " + " << (first*10) + last;
        std::cout << std::endl;
        sum += (first*10) + last;
    }
    std::cout << sum << std::endl;
}
