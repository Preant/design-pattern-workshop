/*
** EPITECH PROJECT, 2021
** hub
** File description:
** visitors.cpp
*/

#include "visitors.hpp"

void
VisitForUseless::visitUseless(std::weak_ptr<Useless> self)
{
    std::cout << "do nothing" << std::endl;
}

void
VisitForUsefull::visitUsefull(std::weak_ptr<Usefull> self)
{
    self.lock()->print("I'm usefull !");
}