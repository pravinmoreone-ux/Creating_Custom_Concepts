#include <concepts>
#include <iostream>

template <typename T>
concept IntClass = std::is_class_v<T> &&
  requires {
    requires std::convertible_to<int, T>;
    requires std::convertible_to<T, int>;
  };

struct SomeType {
    SomeType(int x) : Value{x} {};
    operator int() { return Value; };

    int Value;
};

int main() {
    if (IntClass<SomeType>) {
        std::cout << "The concept is satisfied";
    }
}
//The concept is satisfied
//Below, our type must be a class or struct, and convertible to either a float or an int:
/*
#include <concepts>
#include <iostream>

template <typename T>
concept IntOrFloatClass = std::is_class_v<T> &&
  requires {
    requires std::convertible_to<int, T>;
    requires std::convertible_to<T, int>;
  } || requires {
    requires std::convertible_to<float, T>;
    requires std::convertible_to<T, float>;
  };

struct SomeType {
    SomeType(int x) : Value{x} {};
    operator int() { return Value; };

    int Value;
};

int main() {
    if (IntOrFloatClass<SomeType>) {
        std::cout << "The concept is satisfied";
    }
}
//The concept is satisfied

*/