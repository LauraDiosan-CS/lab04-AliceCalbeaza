//
//  Examen.h
//  Laborator 4 FINAL Alice Calbeaza
//
//  Created by Alice Călbează on 16/03/2020.
//  Copyright © 2020 Laborator 4. All rights reserved.
//

#pragma once

#include <ostream>

using namespace std;


class Examen
{
private:
    char* name;
    char* date;
    int grade;
public:
    Examen();
    Examen(char* name, char* date, int grade);
    Examen(const Examen& e);
    ~Examen();

    char* get_name();
    char* get_date();
    int get_grade();

    void set_name(char* new_name);
    void set_date(char* new_date);
    void set_grade(int new_grade);

    Examen& operator=(const Examen& e);
    bool operator==(const Examen& e);

    friend ostream& operator<<(ostream& os, const Examen& e);
};

