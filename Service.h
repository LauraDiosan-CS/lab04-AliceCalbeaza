#pragma once
#include "Repo.h"
class Service
{
    Repo repo;
    public:
        Service();
        Service(const Repo repo);
        void addExam(Exam exam);
        std::vector<Exam> getAllExamsWithGradeGreaterThan( int grade );
        std::vector<Exam> getAll();
        std::vector<Exam> getAllExamsOfStudent( std::string student_name );
        void setBonusForStudent(std::string student_name);
};
