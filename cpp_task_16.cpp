#include <iostream>
#include "TKlasa.h"
int main() {
    TKlasa obj1("String number one");
    TKlasa obj2("Cat jumps over fence");

    const char* sub1 = obj1["number"];
    const char* sub2 = obj2["over"];
    const char* sub3 = obj1["ing"];

    if (sub1 != nullptr) {
        std::cout << "Substring found in obj1: " << sub1 << std::endl;
    } else {
        std::cout << "Substring not found in obj1." << std::endl;
    }

    if (sub2 != nullptr) {
        std::cout << "Substring found in obj2: " << sub2 << std::endl;
    } else {
        std::cout << "Substring not found in obj2." << std::endl;
    }

    if (sub3 != nullptr) {
        std::cout << "Substring found in obj1: " << sub3 << std::endl;
    } else {
        std::cout << "Substring not found in obj1." << std::endl;
    }

    if (obj1 < obj2) {
        std::cout << "obj1 is less than obj2." << std::endl;
    } else if (obj1 > obj2) {
        std::cout << "obj1 is greater than obj2." << std::endl;
    } else {
        std::cout << "obj1 is equal to obj2." << std::endl;
    }
}
