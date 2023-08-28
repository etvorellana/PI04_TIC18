#include <iostream>

int main(void)
{
    char ch = '0';
    std::cout << ch << " --- " << (int)ch << std::endl;
    ch = '1';
    std::cout << ch << " --- " << (int)ch++ << std::endl;
    std::cout << ch << " --- " << (int)ch++ << std::endl;
    std::cout << ch << " --- " << (int)ch++ << std::endl;
    std::cout << ch << " --- " << (int)ch++ << std::endl;
    std::cout << ch << " --- " << (int)ch++ << std::endl;
    std::cout << ch << " --- " << (int)ch++ << std::endl;
    std::cout << ch << " --- " << (int)ch++ << std::endl;
    std::cout << ch << " --- " << (int)ch++ << std::endl;
    std::cout << ch << " --- " << (int)ch << std::endl;


    return 0;
}