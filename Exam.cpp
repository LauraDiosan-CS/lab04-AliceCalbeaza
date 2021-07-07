#include "iostream"
#include <string>
#include <sstream>
#include "Exam.h"

Exam::Exam(){}
Exam::Exam(std::string student_name, int grade, std::string date) {
    this->student_name = student_name;
    this->date = date;
    this->grade = grade;
}
void Exam::setBonus(bool bonus){
    this->bonus = bonus;
}
std::string Exam::getStudentName() {
    return this->student_name;
}
bool Exam::getBonus(){
    return this->bonus;
}
std::string Exam::getDate(){
    return this->date;
}
int Exam::getGrade(){
    return this->grade;
}
std::ostream& operator<<(std::ostream& os, Exam exam ) {
    std::string hasBonus;
    if(exam.bonus) {
        hasBonus = "Da";
    } else {
        hasBonus = "Nu";
    }
    os << "Nume student: " << exam.getStudentName() << std::endl;
    os << "Nota: " << exam.getGrade() << std::endl;
    os << "Bonus: " << hasBonus << std::endl;
    os << "Data: " << exam.getDate() << std::endl;
    return os;
}
