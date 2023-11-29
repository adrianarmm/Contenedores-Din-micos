#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    try {
        std::string input = "123";
        int number = boost::lexical_cast<int>(input);

        std::cout << "El número es: " << number << std::endl;
    } catch (boost::bad_lexical_cast& e) {