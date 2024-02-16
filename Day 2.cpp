#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    std::ifstream inputFile ("inputs/input_Day1");
    
    string input;
    vector<string> sizes;

    if (inputFile.is_open()) {
        while (inputFile) {
            sizes.push_back (getline(inputFile,input));
        }
        

        inputFile.close();
    } else {
        cout << "Failed to open the file !" << endl;
    }

    return 0;
}