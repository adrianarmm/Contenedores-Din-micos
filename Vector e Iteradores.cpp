#include <iostream>
#include <vector>

int main()
{
    std::vector<int> Vector;
    Vector.push_back(10);
    Vector.push_back(20);
    Vector.push_back(30);
    Vector.push_back(40);

    std::cout << "Elementos del vector:" << std::endl;
    for (std::vector<int>::iterator it = Vector.begin(); it != Vector.end(); ++it) {
        std::cout << *it << " ";
    }
std::cout << std::endl;
    return 0;
}