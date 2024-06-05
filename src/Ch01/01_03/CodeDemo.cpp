// Learning C++ 
// Challenge 01_03 with changes
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Type your name: ";
    std::cin >> name;
    std::cout << "Hello " << name;

    std::cout << std::endl << std::endl;
    return (0);
}
