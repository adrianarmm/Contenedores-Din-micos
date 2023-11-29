#include <boost/lexical_cast.hpp>
#include <iostream>
#include <string>

int main() {
    int number = 42;
    std::string numberAsString = boost::lexical_cast<std::string>(number);
    std::cout << "Integer as String: " << numberAsString << std::endl;

    std::string numStr = "3.14";
    try {
        double parsedDouble = boost::lexical_cast<double>(numStr);
        std::cout << "String as Double: " << parsedDouble << std::endl;
    } catch(const boost::bad_lexical_cast& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

