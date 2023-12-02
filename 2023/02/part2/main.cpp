#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("input");
    std::string line;
    int powerSum = 0;

    while (std::getline(file, line)) {
            int reds   = 0;
            int greens = 0;
            int blues  = 0;
            int power  = 0;
            line = line.substr(line.find(":"), -1);
            std::cout << line << std::endl;
            for (int i = 0; i < line.size(); i++) {
                if (isdigit(line[i])) {
                    int j = i;
                    std::string quantity = "";
                    while (isdigit(line[j])) {
                        quantity += line[j];
                        j++;
                    }
                    j++;
                    if (line[j] == 'r') {
                        if (std::stoi(quantity) > reds) reds = std::stoi(quantity);
                    }
                    if (line[j] == 'g') {
                        if (std::stoi(quantity) > greens) greens = std::stoi(quantity);
                    }
 
                    if (line[j] == 'b') {
                        if (std::stoi(quantity) > blues) blues = std::stoi(quantity);
                    }
                    i = j;
                }
            }
            std::cout << "r - " << reds << " * g -" << greens << " * b-" << blues << std::endl;
            std::cout << "POWER = " << reds*greens*blues << std::endl;
            powerSum += reds*greens*blues;
            std::cout << "POWERSUM = " << powerSum << std::endl;
    }
}

