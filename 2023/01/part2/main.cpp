#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>

int main() {
    std::ifstream file("input");
    std::string line = "pxreightwo7";
    int sum = 0;
    while (std::getline(file, line)) {
        int first = 0;
        int last = 0;
        for (int i = 0; i < line.length(); i++) {
            if (first != 0) break;
            char c = line[i];
            if (isdigit(c)) {
                first = c - '0';
                break;
            }
            if (c == 'o') {
                if (line[i+1] == 'n' &&
                    line[i+2] == 'e') {
                    first = 1;
                    break;
                }
            }
            if (c == 't') {
                if (line[i+1] == 'w' &&
                    line[i+2] == 'o') {
                    first = 2;
                    break;
                }
                if (line[i+1] == 'h' &&
                    line[i+2] == 'r' &&
                    line[i+3] == 'e' &&
                    line[i+4] == 'e') {
                    first = 3;
                    break;
                }
            }
            if (c == 'f') {
                if (line[i+1] == 'o' &&
                    line[i+2] == 'u' &&
                    line[i+3] == 'r') {
                    first = 4;
                    break;
                }
                if (line[i+1] == 'i' &&
                    line[i+2] == 'v' &&
                    line[i+3] == 'e') {
                    first = 5;
                    break;
                }
            }
            if (c == 's') {
                if (line[i+1] == 'i' &&
                    line[i+2] == 'x') {
                    first = 6;
                    break;
                }
                if (line[i+1] == 'e' &&
                    line[i+2] == 'v' &&
                    line[i+3] == 'e' &&
                    line[i+4] == 'n') {
                    first = 7;
                    break;
                }
            }
            if (c == 'e') {
                if (line[i+1] == 'i' &&
                    line[i+2] == 'g' &&
                    line[i+3] == 'h' &&
                    line[i+4] == 't') {
                    first = 8;
                    break;
                }
            }
            if (c == 'n') {
                if (line[i+1] == 'i' &&
                    line[i+2] == 'n' &&
                    line[i+3] == 'e') {
                    first = 9;
                    break;
                }
            }

        }
        for (int i = line.length(); i >= 0; i--) {
            if (last != 0) break;
            char c = line[i];
            if (isdigit(c)) {
                last = c - '0';
                break;
            }
            if (c == 'e') {
                if (line[i-1] == 'n' &&
                    line[i-2] == 'o') {
                    last = 1;
                    break;
                }
                if (line[i-1] == 'e' &&
                    line[i-2] == 'r' &&
                    line[i-3] == 'h' &&
                    line[i-4] == 't') {
                    last = 3;
                    break;
                }
                if (line[i-1] == 'v' &&
                    line[i-2] == 'i' &&
                    line[i-3] == 'f') {
                    last = 5;
                    break;
                }
                if (line[i-1] == 'n' &&
                    line[i-2] == 'i' &&
                    line[i-3] == 'n') {
                    last = 9;
                    break;
                }
            }
            if (c == 'o') {
                if (line[i-1] == 'w' &&
                    line[i-2] == 't') {
                    last = 2;
                    break;
                }
            }
            if (c == 'r') {
                if (line[i-1] == 'u' &&
                    line[i-2] == 'o' &&
                    line[i-3] == 'f') {
                    last = 4;
                    break;
                }
            }
            if (c == 'x') {
                if (line[i-1] == 'i' &&
                    line[i-2] == 's') {
                    last = 6;
                    break;
                }
            }
            if (c == 'n') {
                if (line[i-1] == 'e' &&
                    line[i-2] == 'v' &&
                    line[i-3] == 'e' &&
                    line[i-4] == 's') {
                    last = 7;
                    break;
                }
            }
            if (c == 't') {
                if (line[i-1] == 'h' &&
                    line[i-2] == 'g' &&
                    line[i-3] == 'i' &&
                    line[i-4] == 'e') {
                    last = 8;
                    break;
                }
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
