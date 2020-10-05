
#include <iostream>
#include <cstring>

void ex91()
{
    const std::string names[] = {"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};
    
    std::cout << "Enter a name: ";
    std::string enteredName;
    std::cin >> enteredName;
    
    bool found(false);
    
    for (const auto &name : names)
    {
        if (name == enteredName)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        std::cout << enteredName << " was found."  << std::endl;
    }
    else
    {
        std::cout << enteredName << " was not found." << std::endl;
    }
}

