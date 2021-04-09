/*
** EPITECH PROJECT, 2021
** hub
** File description:
** main.cpp
*/

#include "visitors.hpp"

int main(void)
{
    std::shared_ptr<Useless> useless = std::make_shared<Useless>();
    std::shared_ptr<Usefull> usefull = std::make_shared<Usefull>();

    std::cout << "creating useless visitor." << std::endl;
    std::shared_ptr<VisitForUseless> vUseless = std::make_shared<VisitForUseless>();
    std::cout << "visiting useless..." << std::endl;
    useless->accept(vUseless);
    std::cout << "visiting usefull..." << std::endl;

    return (0);
}