#include <iostream>
#include "Repo.h"
#include "Exam.h"
void Repo::addExam(Exam exam){
    exams.push_back(exam);
}
void Repo::setBonusForStudent(std::string student_name){
    for( auto& exam : this->exams ) {
        if( student_name == exam.getStudentName() ){
            exam.setBonus(true);
        }
    }
}
std::vector<Exam> Repo::getAll(){
    return exams;
}
