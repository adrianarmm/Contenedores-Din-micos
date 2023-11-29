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
