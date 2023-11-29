#include <iostream>
#include <valarray>

int main()
{
    std::valarray<double> array1 = {1.0, 2.0, 3.0, 4.0};
    std::valarray<double> array2 = {2.0, 1.5, 2.5, 3.5};

    std::valarray<double> sum = array1 + array2;
    std::valarray<double> difference = array1 - array2;
    std::valarray<double> product = array1 * array2;
    std::valarray<double> quotient = array1 / array2;

    std::cout << "Suma: ";
    for (double num : sum) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Resta: ";
    for (double num : difference) {
        std::cout << num << " ";
    }