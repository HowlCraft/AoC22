#include <iostream>
#include <fstream>
#include <sstream>
#include <variant>

#include "day_5b.hpp"
#include "main.hpp"


std::variant<int, std::string> day_function(const std::string &inventory) {
    return aoc::day_5b(inventory);
}