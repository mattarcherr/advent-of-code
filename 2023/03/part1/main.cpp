#include <cctype>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::ifstream file("input");
    std::string tempStr = ""; 
    std::vector<int> partNumbers     = {};
    std::vector<int> partNumbersTemp = {};

    bool adjacent = false;
    char c;
    char prevC;

    std::string line;

    while (getline(file, line)) {
        for (int i = 0; i < line.length(); i++) {
            while (std::isdigit(line[i])) {
               tempStr += line[i]; 
            }
        }
    }

    // std::vector<char> characters;
    // while (file.get(c)) {
    //     characters.push_back(c);
    // }
    // for (int i = 0; i < characters.size(); i++) {

    //     prevC = c;
    //     c = characters[i];

    //     if (!isdigit(c) && isdigit(prevC)) {
    //         if (c != '.') adjacent = true;
    //         int number = std::stoi(tempStr);
    //         tempStr = "";

    //         if (adjacent) {
    //             partNumbers.push_back(number);
    //         }
    //         adjacent = false;
    //     }

    //     if (!isdigit(c)) continue;


    //     if ((!isdigit(characters[i-1]) && characters[i-1] != '.') ||
    //         (!isdigit(characters[i+140]) && characters[i+140] != '.') ||
    //         (!isdigit(characters[i+141]) && characters[i+141] != '.') ||
    //         (!isdigit(characters[i+142]) && characters[i+142] != '.') ||
    //         (!isdigit(characters[i-140]) && characters[i-140] != '.') ||
    //         (!isdigit(characters[i-141]) && characters[i-141] != '.') ||
    //         (!isdigit(characters[i-142]) && characters[i-142] != '.')) {
    //         adjacent = true;
    //     }
    //     tempStr += c;
    // }

    // int sum = 0;
    // for (int j = 0; j < partNumbers.size(); j++) {
    //     std::cout << partNumbers[j] << std::endl;;
    //     sum += partNumbers[j];
    // }
    // std::cout << sum;
}
