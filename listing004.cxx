#include <iostream>
#include <initializer_list>
#include <string>


template<typename T>
using ilist = std::initializer_list<T>;

template<typename T> 
void printList(ilist<T> lst)
{
    for(auto i : lst)
        std::cout << i << std::endl;
}


int main()
{
    printList({"Mustafa","Hazem"});
    return 0;
}