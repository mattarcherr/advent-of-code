#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("input");
    std::string line;
    int id = 0;
    int idSum = 0;

    while (std::getline(file, line)) {
            id++;
            int reds   = 0;
            int greens = 0;
            int blues  = 0;
            bool possible = true;
            line = line.substr(line.find(":"), -1);
            std::cout << " <<< ID = " << id << std::endl; 
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
                    if (line[j] == 'r' && std::stoi(quantity) > 12) {
                        possible = false;
                    }
                    if (line[j] == 'g' && std::stoi(quantity) > 13) {
                        possible = false;
                    }
 
                    if (line[j] == 'b' && std::stoi(quantity) > 14) {
                        possible = false;
                    }
                    i = j;
                }
            }
            if (possible) {
                std::cout << "POSSIBLE: " << idSum << " + " << id << std::endl;
                idSum += id;
            }
            std::cout << std::endl;
    }
    std::cout << idSum << std::endl;
}

