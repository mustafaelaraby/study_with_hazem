#include <iostream>
#include <initializer_list>

int main()
{
    bool x{true};
    std::initializer_list<bool> y = {true, false,false};
    std::cout << std::boolalpha << *(y.begin()+1) << std::endl;
    std::cout << std::boolalpha << x << std::endl;
}