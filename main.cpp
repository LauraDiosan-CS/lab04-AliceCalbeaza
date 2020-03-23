#include <iostream>
#include "domain.h"
#include <string.h>
#include "ui.h"
int main()
{
    char option;
    Repo repo;
    Exam* exams;
    char student_name[100];
    char date[100];
    int grade;
    while( true ) {
        menu();
        std::cout << "Optiune" << std::endl;
        std::cin >> option;
        switch (option) {
            case '1':
                {
                    std::cout << "Nume student: "; 
                    std::cin >> student_name;
                    std::cout << std::endl;
                    std::cout << "Data: "; 
                    std::cin >> date;
                    std::cout << std::endl;
                    std::cout << "Grade: "; 
                    std::cin >> grade;
                    std::cout << std::endl;
                    Exam exam(student_name, date, grade);
                    std::cout << "Examenul a fost salvat" << std::endl;
                    repo.addExam(exam);
                    break;
                }
            case '4':
                {
                    int noOfStudents;
                    int i = 0;
                    exams = repo.getAll();
                    noOfStudents = repo.getSize();
                    if(noOfStudents < 1)
                    {
                        std::cout << "Nu exista examene" << std::endl;
                        break;
                    }
                    for(i=0; i< noOfStudents; i++ )
                    {
                        exams[i].displayInfo();
                        std::cout << "----------" << std::endl;
                    }
                    break;
                }
            case '5':
                {
                    std::cout << "Nume student:";
                    std::cin >> student_name;
                    repo.setBonus(student_name);
                }
                break;
            case 'x':
                std::cout << "Bye" << std::endl;
                return 0;
                break;
            default:
               std::cout << "Optiune invalida" << std::endl; 
        }
    }
}
