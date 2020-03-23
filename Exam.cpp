#include "domain.h"
#include "iostream"
#include <string.h>
#include <ostream>
Exam::Exam()
{
    this->student_name = NULL;
    this->date = NULL;

}
Exam::Exam( char* name, char* date, int grade )
{
    this->student_name = new char(strlen(name) + 1);
    strcpy(this->student_name, name);
    this->date = new char(strlen(date) + 1);
    strcpy(this->date, date);
    this->grade = grade;
}
Exam::~Exam()
{
    /* delete[] this->student_name; */
    /* this->student_name = NULL; */
    /* delete[] this->date; */
    /* this->date = NULL; */
}
void Exam::setStudentName(char* name)
{
    this->student_name = new char(strlen(name) + 1);
    strcpy(this->student_name, name);
}

char* Exam::getStudentName()
{
    std::cout << this->student_name << std::endl;
    return this->student_name;
}

void Exam::setDate(char* date)
{
    this->date = new char(strlen(date) + 1);
    strcpy(this->date, date);
}

char* Exam::getDate()
{
    return this->date;
}

void Exam::setGrade(int grade)
{
    this->grade = grade;
}

int Exam::getGrade()
{
    return this->grade;
}

void Exam::setBonus(bool bonus)
{
    this->bonus = bonus;
}

bool Exam::getBonus()

{
    return this->bonus;
}

unsigned int Exam::getFinalGrade()
{
    bool bonus;
    unsigned int final_grade;
    final_grade = this->getGrade();
    bonus = this->getBonus();
    if(bonus && (final_grade < 10))
    {
        final_grade += 1;

    }
    return final_grade;
}

void Exam::displayInfo()
{
    std::cout << "Nume student:" << this->getStudentName() << std::endl;
    std::cout << "Nota:" << this->getFinalGrade() << std::endl;
    std::cout << "Data:" << this->getDate() << std::endl;
}
