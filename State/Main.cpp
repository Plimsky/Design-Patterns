#include <iostream>
#include <cctype>

int main()
{
    char input;
    while ((input = std::cin.get()) != 27)
    {
        if (std::isspace(input) != 0)
            std::cout << "Space\n";
    }

    return 0;
}
