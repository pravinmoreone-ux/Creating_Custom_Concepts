//
// Created by PravinMore on 02/01/2026.
//

#include <iostream>

template <typename T>
concept Arithmetic = requires(T x) {
    x + x;
    x - x;
    x * x;
    x / x;
};

int main() {
    if (Arithmetic<int>) {
        std::cout << "int satisfies the concept";
    }
    if (!Arithmetic<std::string>) {
        std::cout << "\nstd::string does not";
    }
}