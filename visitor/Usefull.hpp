/*
** EPITECH PROJECT, 2021
** hub
** File description:
** Usefull.hpp
*/

#ifndef USEFULL_HPP_
#define USEFULL_HPP_

#include <memory>
#include <iostream>

#include "Visitor.hpp"

class Usefull: public std::enable_shared_from_this<Usefull> {
    public:
        Usefull() = default;
        ~Usefull() = default;

        void accept(std::weak_ptr<Visitor> visitor) {
            /*to do*/
        }

        void print(std::string message) {
            std::cout << message << std::endl;
        }

    private:
};

#endif /* !USEFULL_HPP_ */
