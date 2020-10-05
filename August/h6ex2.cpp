#include <iostream>
#include <cstring>
#include <algorithm>

struct Student
{
   std::string name;
   int mark;
};

void bubbleSort(Student *array, const int &length)
{
    for (int iteration=0; iteration < length-1; ++iteration)
    {
        int endOfArrayIndex(length - iteration);
        
        bool swapped(false);
        
        for (int currentIndex = 0; currentIndex < endOfArrayIndex-1; ++currentIndex)
        {
            if (array[currentIndex].mark < array[currentIndex+1].mark)
                {
                    std::swap(array[currentIndex], array[currentIndex+1]);
                    swapped = true;
                }
        }
        
        if (!swapped)
        break;
        
    }
}

void insertionSort(Student *array, const int &length)
{
    for (int startIndex = 0; startIndex < length-1; ++startIndex)
    {
        int maxIndex = startIndex;
        for (int currentIndex = startIndex+1; currentIndex < length; ++currentIndex)
        {
            if (array[maxIndex].mark < array[startIndex].mark)
            {
                maxIndex = currentIndex;
            }
        }
        std::swap(array[startIndex], array[maxIndex]);
    }
}

void getStudentInfo(Student *students, const int &numStudents)
{
    for (int student = 0; student < numStudents; ++student)
    {
        std::cout << "Enter name #" << student+1 << ": ";
        std::cin >> students[student].name;
        std::cout << "Enter mark #" << student+1 << ": ";
        std::cin >> students[student].mark;
    }
}

void showStudentsInfo(Student *students, const int &numStudents)
{
    for (int index = 0; index < numStudents; ++index)
    {
        std::cout << students[index].name << " got a grade of " << students[index].mark << std::endl;
    }
}
void h6ex2()
{
    int numStudents{};
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;
    
    
    Student *students = new Student[numStudents];
    
    getStudentInfo(students, numStudents);
    
    insertionSort(students, numStudents);
    
    delete[] students;
    
}
