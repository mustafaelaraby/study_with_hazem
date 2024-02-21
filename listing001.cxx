#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string version = "app version 1.1.1";
    if (argc > 1 && std::string(argv[1]) == "--version")
        std::cout << version << std::endl;
    return 0;
}
