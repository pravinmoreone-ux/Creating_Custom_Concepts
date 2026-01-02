cmake_minimum_required(VERSION 4.0)
project(Creating_Custom_Concepts)

set(CMAKE_CXX_STANDARD 20)

add_executable(Creating_Custom_Concepts main.cpp
        "Writing Our Own Concepts.cpp"
        "Combining and Negating requires Expressions.cpp"
        "Functional requires Syntax.cpp"
        "Multiple Template Parameters.cpp")
