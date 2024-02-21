#include <iostream>
#include <string>

void threeN(std::string id, int& dep, int& num, int& arr)
{
    dep = std::stoi(id.substr(0,2));
    num = std::stoi(id.substr(2,3));
    arr = std::stoi(id.substr(5,2));
}

int* parser(std::string id)
{
    int* arr = new int(3);
    arr[0] = std::stoi(id.substr(0,2));
    arr[1] = std::stoi(id.substr(2,3));
    arr[2] = std::stoi(id.substr(5,2));
    return arr;
}


int main()
{
    // pass by reference.
    int a,b,c;
    threeN("1234567",a,b,c);
    std::cout<< a << "\n" << b << "\n" << c << "\n";
    
    std::cout<< "--------------------------------" << std::endl;

    // return array.
    int* ptr = parser("8910112");
    for(int i = 0 ; i < 3; i++)
        std::cout << ptr[i] << "\n";
    delete ptr;

    return 0; 
}