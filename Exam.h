#pragma once
#include <string>
class Exam{
    private:
        unsigned int grade;
        bool bonus = false;
        std::string student_name;
        std::string date;
    public:
        Exam();
        Exam(std::string student_name, int grade, std::string date);
        void setBonus(bool bonus);
        bool getBonus();
        int getGrade();
        std::string getDate();
        std::string getStudentName();
        friend std::ostream& operator<<(std::ostream& os, Exam exam);
};
