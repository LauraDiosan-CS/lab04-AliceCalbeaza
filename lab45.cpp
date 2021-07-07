#include <iostream>

#include "UI.h"
#include "Service.h"
#include "Repo.h"
int main()
{
    Repo repo;
    Service service(repo);
    UI ui(service);
    ui.showMenu();
}
