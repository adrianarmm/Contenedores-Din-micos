#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> miVector = {9, 2, 5, 1, 7, 4, 8, 3, 6};
    std::sort(miVector.begin(), miVector.end());

    std::cout << "Vector ordenado: ";
    for (int num : miVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;