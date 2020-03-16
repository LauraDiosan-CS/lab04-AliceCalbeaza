//
//  Repository.h
//  Laborator 4 FINAL Alice Calbeaza
//
//  Created by Alice Călbează on 16/03/2020.
//  Copyright © 2020 Laborator 4. All rights reserved.
//


#pragma once
#include "Examen.h"


class Repository
{
private:
    Examen list[30];
    int dim;
    
public:
    Repository();
    ~Repository();
    void add_grade(Examen e);
    Examen* get_all();
    int get_size();
