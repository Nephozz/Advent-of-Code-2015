#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    std::ifstream inputFile ("inputs/input_Day2");


    if (!inputFile.is_open()) {
        cout << "Error: File not found" << endl;
        return 1;
    }

    vector<int> sizes;
    string line;

    while (getline(inputFile, line)) {
        istringstream iss(line);

        vector<int> currentSize;
        string size;
        while (getline(iss, size, 'x')) {
            currentSize.push_back(stoi(size));
        }

        sort(currentSize.begin(), currentSize.end());

        sizes.push_back(3 * currentSize[0] * currentSize[1] + 2 * currentSize[1] * currentSize[2] + 2 * currentSize[0] * currentSize[2]);
        cout << "Current: " << sizes.back() << endl;
    }

    int total = 0;
    for (int size : sizes) {
        total += size;
    }

    cout << "Total: " << total << endl;

    inputFile.close();

    return 0;
}
