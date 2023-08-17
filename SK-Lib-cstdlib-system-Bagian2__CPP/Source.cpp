#include <cstdlib>
#include <fstream>
#include <iostream>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    std::system("ls -l >test.txt"); 
    std::cout << std::ifstream("test.txt").rdbuf();

    _getch();
    return 0;
}