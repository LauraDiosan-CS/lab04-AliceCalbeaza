//
//  Tests.cpp
//  Laborator 4 FINAL Alice Calbeaza
//
//  Created by Alice Călbează on 16/03/2020.
//  Copyright © 2020 Laborator 4. All rights reserved.
//

#include "Tests.h"


void test_get_name()
{
    char* name = new char[strlen("Alice") + 1];
    char* date = new char[strlen("20/09/2000") + 1];
    strcpy_s(name, sizeof "Alice", "Alice");
    strcpy_s(date, sizeof "20/09/2000", "20/09/2000");
    Examen e(name, date, 6);
    assert(strcmp(e.get_name(), name)==0);
}

void test_set_grade()
{
    char* name = new char[strlen("Alice") + 1];
    char* date = new char[strlen("20/09/2000") + 1];
    strcpy_s(name, sizeof "Alice", "Alice");
    strcpy_s(date, sizeof "20/09/2000", "20/09/2000");
    Examen e(name, date, 6);
    e.set_grade(8);
    assert(e.get_grade() == 8);
}

void test_add_grade()
{
    char* name = new char[strlen("Alice") + 1];
    char* date = new char[strlen("20/09/2000") + 1];
    strcpy_s(name, sizeof "Alice", "Alice");
    strcpy_s(date, sizeof "20/09/2000", "20/09/2000");
    Examen n(name, date, 6);

    Repository r;

    r.add_grade(n);

    assert(r.get_size() == 1);
}
void test_get_date()
{
    char* name = new char[strlen("Alice") + 1];
    char* date = new char[strlen("20/09/2000") + 1];
    strcpy_s(name, sizeof "Alice", "Alice");
    strcpy_s(date, sizeof "20/09/2000", "20/09/2000");
    Examen e(name, date, 6);
    assert(strcmp(e.get_date(), date) == 0);
}

void test_get_grade()
{
    char* name = new char[strlen("Alice") + 1];
    char* date = new char[strlen("20/09/2000") + 1];
    strcpy_s(name, sizeof "Alice", "Alice");
    strcpy_s(date, sizeof "20/09/2000", "20/09/2000");
    Examen e(name, date, 6);
    assert(e.get_grade() == 8);
}

void test_set_name()
{
    char* name = new char[strlen("Alice") + 1];
    char* new_name = new char[strlen("Cristi") + 1];
    char* date = new char[strlen("20/09/2000") + 1];
    strcpy_s(name, sizeof "Alice", "Alice");
    strcpy_s(date, sizeof "20/09/2000", "20/09/2000");
    Examen e(name, date, 6);
    strcpy_s(new_name, sizeof "Cristi", "Cristi");
    e.set_name(new_name);
    assert(strcmp(e.get_name(), new_name) == 0);
}

void test_set_date()
{
    char* name = new char[strlen("Alice") + 1];
    char* new_date = new char[strlen("20/2/2020") + 1];
    char* date = new char[strlen("20/09/2000") + 1];
    strcpy_s(name, sizeof "Alice", "Alice");
    strcpy_s(date, sizeof "20/09/2000", "20/09/2000");
    Examen e(name, date, 6);
    strcpy_s(new_date, sizeof "20/2/2020", "20/2/2020");
    e.set_date(new_date);
    assert(strcmp(e.get_date(), new_date) == 0);
}

void test_get_size()
{
    char* name = new char[strlen("Alice") + 1];
    char* date = new char[strlen("20/09/2000") + 1];
    strcpy_s(name, sizeof "Alice", "Alice");
    strcpy_s(date, sizeof "20/09/2000", "20/09/2000");
    Examen n(name, date, 6);

    Repository r;

    r.add_grade(n);

    assert(r.get_size() == 1);
}

void test_get_all()
{
    char* name = new char[strlen("Alice") + 1];
    char* date = new char[strlen("20/09/2000") + 1];
    strcpy_s(name, sizeof "Alice", "Alice");
    strcpy_s(date, sizeof "20/09/2000", "20/09/2000");
    Examen n1(name, date, 6);

    char* name2 = new char[strlen("Cristi") + 1];
    char* date2 = new char[strlen("20/09/2000") + 1];
    strcpy_s(name2, sizeof "Cristi", "Cristi");
    strcpy_s(date2, sizeof "20/09/2000", "20/09/2000");
    Examen n2(name2, date2, 8);

    Repository r;

    r.add_grade(n1);
    r.add_grade(n2);

    Examen* result = r.get_all();
    Examen v[2]{ n1, n2 };

    for (int i = 0; i < r.get_size(); i++)
        assert(result[i] == v[i]);
}

