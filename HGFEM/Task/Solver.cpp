#include "Solver.h"
#include<iostream>

void FEM_Solver::StaticSolver()
{
    std::cout<< "This is FEM_Solver process";
    cable.GetElementData();
    std::cout<< "Solver is success!";

}