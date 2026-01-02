//
// Created by PravinMore on 02/01/2026.
//

#include <iostream>

template <typename T1, typename T2>
concept Addable = requires(T1 x, T2 y) {
    x + y;
};

int main() {
    if (Addable<int, float>) {
        std::cout << "int is addable to float";
    }
    if (!Addable<int, std::string>) {
        std::cout << "\nbut not to std::string";
    }
}