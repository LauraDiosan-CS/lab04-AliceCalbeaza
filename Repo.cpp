#include "domain.h"
#include <string.h>

Repo::Repo() {
	this->n = 0;
}
Repo::~Repo() {
    this->n = 0;
}
void Repo::addExam(Exam e) {
    this->exams[this->n++] = e;
}

Exam* Repo::getAll() {
    return this->exams;
}

int Repo::getSize()
{
    return this->n;
}
void Repo::setBonus(char *student_name)
{
    int i;
    for(i=0; i<this->n; i++)
    {
        if( strcmp(this->exams[i].getStudentName(), student_name) == 0 )
        {
            this->exams[i].setBonus(true);
        }

    }
}
