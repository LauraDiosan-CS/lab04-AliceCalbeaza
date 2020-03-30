#pragma once
#include "Service.h"
#include <sstream>
class UI {
    Service service;
    public:
        UI(Service& service);
        void showMenu();
        void listAll();
        void addExam();
        void listExamsWithGradeGreaterThan();
        void addBonus();
};
