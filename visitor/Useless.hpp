/*
** EPITECH PROJECT, 2021
** hub
** File description:
** Useless.hpp
*/

#ifndef USELESS_HPP_
#define USELESS_HPP_

#include "Visitor.hpp"

#include <memory>

class Useless: public std::enable_shared_from_this<Useless> {
    public:
        Useless() = default;
        ~Useless() = default;

        void accept(std::weak_ptr<Visitor> visitor) {
            /*to do*/
        }

    private:
};

#endif /* !USELESS_HPP_ */
