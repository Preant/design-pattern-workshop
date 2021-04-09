/*
** EPITECH PROJECT, 2020
** hub
** File description:
** IObserver.hpp
*/

#ifndef IOBSERVER_HPP_
#define IOBSERVER_HPP_

#include <string>

class IObserver {
    public:
        ~IObserver(void) {};

        virtual void update(std::string data) = 0;
};

#endif /* !IOBSERVER_HPP_ */
