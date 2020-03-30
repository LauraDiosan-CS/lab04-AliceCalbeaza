#pragma once
#include <vector>
#include "Exam.h"
class Repo {
    private:
        std::vector<Exam> exams;
    public:
        void addExam(Exam exam);
        void setBonusForStudent(std::string student_name);
        std::vector<Exam> getAll();
};
