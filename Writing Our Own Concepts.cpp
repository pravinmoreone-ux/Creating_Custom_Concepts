#include <concepts>
#include <iostream>

template <typename T>
concept Integer = std::integral<T>;

// As a constrained template parameter
template <Integer T>
void ConstrainedTemplate(T x) {
    std::cout << "That's an integer\n";
}

// As a compile-time boolean expression
template <typename T>
void UnconstrainedTemplate(T x) {
    if constexpr (Integer<T>) {
        std::cout << "That's an integer too\n";
    }
}

int main() {
    ConstrainedTemplate(1);
    UnconstrainedTemplate(2);
}
//That's an integer
//That's an integer too