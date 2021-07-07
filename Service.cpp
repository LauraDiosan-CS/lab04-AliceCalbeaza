#include <iostream>
#include "Service.h"
#include "Repo.h"
Service::Service(){

}
Service::Service(const Repo repo) {
    this->repo = repo;
}

void Service::addExam(Exam exam) {
    this->repo.addExam(exam);
}
std::vector<Exam> Service::getAll() {
    return this->repo.getAll();
}
std::vector<Exam> Service::getAllExamsWithGradeGreaterThan(int grade){
    std::vector<Exam> allExams = this->repo.getAll();
    std::vector<Exam> filteredExams;
    for ( Exam exam : allExams ){
        if( grade < exam.getGrade() ) {
            filteredExams.push_back( exam );
        }
    }
    return filteredExams;
}

std::vector<Exam> Service::getAllExamsOfStudent(std::string student_name) {
    std::vector<Exam> allExams = this->repo.getAll();
    std::vector<Exam> filteredExams;
    for ( Exam &exam : allExams ){
        if( student_name == exam.getStudentName() ) {
            exam.setBonus(true);
            filteredExams.push_back( exam );
        }
    }
    return filteredExams;
}
void Service::setBonusForStudent(std::string student_name){
    this->repo.setBonusForStudent(student_name);
}
