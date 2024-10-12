#include <iostream>
#include <vector>

template <typename T>
std::vector<T> stalinSort(std::vector<T> array) {
    if (array.empty()) return array;

    std::vector<T> result;
    result.push_back(array[0]);

    for (size_t i = 1; i < array.size(); ++i) {
        if (array[i] >= result.back()) {
            result.push_back(array[i]);
        }
    }

    return result;
}

int main() {
    // Integer Input
    std::vector<int> integers = {4, 23, 6, 78, 1, 54, 231, 9, 12};
    std::vector<int> sortedIntegers = stalinSort(integers);
    for (int num : sortedIntegers) std::cout << num << " ";
    std::cout << std::endl;

    // String Input
    std::vector<std::string> strings = {"c", "a", "e", "b", "d"};
    std::vector<std::string> sortedStrings = stalinSort(strings);
    for (const auto &str : sortedStrings) std::cout << str << " ";
    std::cout << std::endl;

    return 0;
}
