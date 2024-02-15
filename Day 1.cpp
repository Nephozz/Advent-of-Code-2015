#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile ("inputs/input_Day1");
    
    std::string input;

    if (inputFile.is_open()) {
        int i = 0;
        char currentChar;
        while (inputFile.good()) {
            currentChar = inputFile.get();
            if (currentChar == '(') { i++; }
            else if (currentChar == ')') { i--; }
        }
        inputFile.close();

        std::cout << "Floor : " << i << std::endl;
    } else {
        std::cout << "Failed to open the file !" << std::endl;
    }

    return 0;
}