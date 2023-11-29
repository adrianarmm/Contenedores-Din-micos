#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> myVector = {9, 2, 5, 1, 7, 4, 8, 3, 6}; // Vector de enteros

    // Ordenar los elementos del vector usando la función sort
    std::sort(myVector.begin(), myVector.end());

    // Mostrar el vector ordenado
    std::cout << "Vector ordenado: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Encontrar el elemento más grande usando la función max_element
    auto maxElement = std::max_element(myVector.begin(), myVector.end());

    if (maxElement != myVector.end()) {
        std::cout << "El elemento más grande es: " << *maxElement << std::endl;
    } else
    {
        std::cout << "El vector está vacío." << std::endl;