#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::string reverseString(const std::string &input)
{
    std::string reversed = input;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main()
{
    std::vector<std::string> inputs;
    std::string input;

    std::cout << "Enter three strings: " << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::getline(std::cin, input);
        inputs.push_back(input);
    }

    std::cout << "Reversed strings: " << std::endl;

    for (const auto &str : inputs)
    {
        std::string reversed = reverseString(str);
        std::cout << reversed << std::endl;
    }

    return 0;
}
