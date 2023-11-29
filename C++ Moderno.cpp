#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

int main()
{
    auto square = [](int x) { return x * x; };

    auto number = 5;
    auto result = square(number);

    std::cout << "El cuadrado de " << number << " es " << result << std::endl;

    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Recorriendo el contenedor con for_each: ";
    std::for_each(numbers.begin(), numbers.end(), [](int n) { std::cout << n << " "; });
    std::cout << std::endl;