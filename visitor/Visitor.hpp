/*
** EPITECH PROJECT, 2021
** hub
** File description:
** Visitor.hpp
*/

#ifndef VISITOR_HPP_
#define VISITOR_HPP_

#include <memory>

class Useless;
class Usefull;

class Visitor {
    public:
        virtual void visitUseless(std::weak_ptr<Useless> self) {(void)self;}
        virtual void visitUsefull(std::weak_ptr<Usefull> self) {(void)self;}
};

#endif /* !VISITOR_HPP_ */
