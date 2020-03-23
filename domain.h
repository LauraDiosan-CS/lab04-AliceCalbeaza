#pragma once
class Exam
{
    private:
        char* student_name;
        char* date;
        bool bonus = false;
        unsigned int grade;

    public:
        Exam();
        Exam( char* name, char* date, int grade );
        ~Exam();
        void setStudentName(char* name);
        char* getStudentName();
        void setDate(char* date);
        char* getDate();
        void setGrade(int grade);
        int getGrade();
        void setBonus(bool bonus);
        bool getBonus();
        void displayInfo();
        unsigned int getFinalGrade();
};

class Repo {
    private:
        Exam exams[20];
        int n;
    public:
        Repo();
        ~Repo();
        void addExam(Exam e);
        int getSize();
        void setBonus(char* student_name);
        Exam* getAll();
};
