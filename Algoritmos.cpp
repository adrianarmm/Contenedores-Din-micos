#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> myVector = {9, 2, 5, 1, 7, 4, 8, 3, 6};
    std::sort(myVector.begin(), myVector.end());

    std::cout << "Vector ordenado: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    auto maxElement = std::max_element(myVector.begin(), myVector.end());

