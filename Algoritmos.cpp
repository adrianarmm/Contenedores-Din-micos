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
    auto maxElement = std::max_element(miVector.begin(), miVector.end());

    if (maxElement != miVector.end()) {
        std::cout << "El elemento más grande es: " << *maxElement << std::endl;
    } else
    {
        std::cout << "El vector está vacío." << std::endl;
    }
    return 0;
}