//
//  Repository.cpp
//  Laborator 4 FINAL Alice Calbeaza
//
//  Created by Alice Călbează on 16/03/2020.
//  Copyright © 2020 Laborator 4. All rights reserved.
//


#include "Repository.h"


Repository::Repository()
{
    this->dim = 0;
}

Repository::~Repository()
{
    this->dim = 0;
}

void Repository::add_grade(Examen e)
{
    this->list[this->dim++] = e;
}

Examen* Repository::get_all()
{
    return this->list;
}

int Repository::get_size()
{
    return this->dim;
}
