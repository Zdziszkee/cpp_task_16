//
// Created by Kacper Kuchta on 5/11/23.
//

#ifndef CPP_TASK_16_TKLASA_H
#define CPP_TASK_16_TKLASA_H


#include <string>
#include <compare>
#include <cstring>

class TKlasa {
private:
    std::string str;
public:
    TKlasa(const char* c) : str(c) {}

    const char* operator[](const char* s) const {
        if (str.find(s) != std::string::npos) {
            return str.c_str() + str.find(s);
        }
        return nullptr;
    }

    auto operator<=>(TKlasa const &other) const {
        if (str < other.str) return std::strong_ordering::less;
        if (str > other.str) return std::strong_ordering::greater;
        return std::strong_ordering::equal;
    }


};

#endif //CPP_TASK_16_TKLASA_H
