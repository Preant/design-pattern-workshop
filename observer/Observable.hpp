/*
** EPITECH PROJECT, 2020
** hub
** File description:
** Observable.hpp
*/

#ifndef OBSERVABLE_HPP_
#define OBSERVABLE_HPP_

#include <string>
#include <set>

#include "IObserver.hpp"

class Observable {
    public:
        void notify(std::string data) const;
        bool subscribe(IObserver *observer);
        bool unsubscribe(IObserver *observer);
    private:
        std::set<IObserver *> _observers;
};

#endif /* !OBSERVABLE_HPP_ */
