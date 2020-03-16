//
//  Examen.cpp
//  Laborator 4 FINAL Alice Calbeaza
//
//  Created by Alice Călbează on 16/03/2020.
//  Copyright © 2020 Laborator 4. All rights reserved.
//

#include "Examen.h"
#include <cstddef>
#include <string.h>


Examen::Examen()
{
    this->name = NULL;
    this->date = NULL;
    this->grade = 0;
}

Examen::Examen(char* name, char* date, int grade)
{
    this->name = new char[strlen(name) + 1];
    this->date = new char[strlen(date) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
    strcpy_s(this->date, strlen(date) + 1, date);
    this->grade = grade;
}

Examen::Examen(const Examen& e)
{
    this->name = new char[strlen(e.name) + 1];
    this->date = new char[strlen(e.date) + 1];
    strcpy_s(this->name, strlen(e.name) + 1, e.name);
    strcpy_s(this->date, strlen(e.date) + 1, e.date);
    this->grade = e.grade;
}

Examen::~Examen()
{
    if (this->name && this->date)
    {
        delete[] this->name;
        delete[] this->date;
        this->name = NULL;
        this->date = NULL;
    }
}

char* Examen::get_name()
{
    return this->name;
}

char* Examen::get_date()
{
    return this->date;
}

int Examen::get_grade()
{
    return this->grade;
}

void Examen::set_name(char* new_name)
{
    if (this->name)
    {
        delete[] this->name;
        this->name = NULL;
    }
    this->name = new char[strlen(new_name) + 1];
    strcpy_s(this->name, strlen(new_name) + 1, new_name);
}

void Examen::set_date(char* new_date)
{
    if (this->date)
    {
        delete[] this->date;
        this->date = NULL;
    }
    this->date = new char[strlen(new_date) + 1];
    strcpy_s(this->date, strlen(new_date) + 1, new_date);
}

void Examen::set_grade(int new_grade)
{
    this->grade = new_grade;
}

Examen& Examen::operator=(const Examen& e)
{
    this->set_name(e.name);
    this->set_date(e.date);
    this->set_grade(e.grade);
    return *this;
}

bool Examen::operator==(const Examen& e)
{
    return (strcmp(this->date, e.date) == 0 && strcmp(this->name, e.name) == 0 && this->grade == e.grade);
}

ostream& operator<<(ostream& os, const Examen& e)
{
    os << e.name << " " << e.date << " " << e.grade;
    return os;
}

