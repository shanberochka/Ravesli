#include <iostream>
#include <cstring>

int getNameNumber()
{
    std::cout << "How many names would you like to enter? ";
    int number;
    std::cin >> number;
    return number;
}

void getNames(std::string *names, int nameNumber)
{
    for (int person = 0; person < nameNumber; ++person)
    {
        std::cout << "Enter name #" << person << ": ";
        std::cin >> names[person];
    }
}

void sortArray(std::string *array, int length)
{
    for (int iteration = 0; iteration < length-1; ++iteration)
    {
        // последний элемент будет отсортирован
        int endOfArrayIndex(length - iteration);
        
        // отслеживаем, были ли замены в этом итерации
        bool swapped(false);
        
        for (int currentIndex = 0; currentIndex < endOfArrayIndex-1; ++currentIndex)
        {
            if (array[currentIndex] > array[currentIndex+1])
            {
                std::swap(array[currentIndex], array[currentIndex+1]);
                swapped = true;
            }
        }
        
        if (!swapped)
        {
            break;
        }
    }
}
void showArray(std::string *array, int length)
{
    for(int iteration=0; iteration < length; ++iteration)
    {
        std::cout << "Name #" << iteration << " " << array[iteration] <<std::endl;
    }
}
void ex86()
{
    int nameNumber = getNameNumber();
    
    std::string *names = new std::string[nameNumber];
    
    getNames(names, nameNumber);
    
    sortArray(names, nameNumber);
    
    showArray(names, nameNumber);
    
    delete[] names;
    names = nullptr;
}
