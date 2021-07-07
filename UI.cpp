#include <iostream>
#include <string>
#include "UI.h"
UI::UI(Service& service) {
    this->service = service;
}
void UI::showMenu(){
    bool end = false;
    while (!end) {
        std::cout << std::endl;
        std::cout << "OPTIUNI: " << std::endl;
        std::cout << "	1. Adauga examen " << std::endl;
        std::cout << "	2. Afiseaza examene" << std::endl;
        std::cout << "	3. Afiseaza examene cu nota mai mare decit nota data" << std::endl;
        std::cout << "	4. Acorda bonus" << std::endl;
        std::cout << "	x. Iesire" << std::endl;
        std::cout << "Optiune: " << std::endl;
        char opt;
        std::cin >> opt;
        switch (opt) {
            case '1':{
                         this->addExam();
                         break;
                     }
            case '2':{
                         this->listAll();
                         break;
                     }
            case '3':{
                         this->listExamsWithGradeGreaterThan();
                         break;
                     }
            case '4':{
                         this->addBonus();
                         break;
                     }
            case 'x': {
                          end = true;
                      }
        }
    }
}

void UI::addExam() {
    std::string student_name;
    std::string date;
    int grade;
    std::cout << "Nume student: "; 
    std::cin >> student_name;
    std::cout << "Data: "; 
    std::cin >> date;
    std::cout << "Grade: "; 
    std::cin >> grade;
    Exam exam = Exam(student_name, grade, date);
    std::cout << exam << std::endl;
    this->service.addExam(exam);
}
void UI::listAll() {
    std::vector<Exam> exams = service.getAll();
    for (Exam exam : exams)
        std::cout << exam << std::endl;
}
void UI::listExamsWithGradeGreaterThan(){
    int grade;
    std::cout << "Grade: "; 
    std::cin >> grade;
    std::vector<Exam> exams = service.getAllExamsWithGradeGreaterThan( grade );
    for (Exam exam : exams)
        std::cout << exam << std::endl;
}

void UI::addBonus(){
    std::string student_name;
    std::cout << "Nume student: "; 
    std::cin >> student_name;
    service.setBonusForStudent(student_name);
    std::cout << "Bonusul a fost acordat" << std::endl;
}
