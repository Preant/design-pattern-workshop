/*
** EPITECH PROJECT, 2021
** hub
** File description:
** strats.hpp
*/

#ifndef STRATS_HPP_
#define STRATS_HPP_

#include <iostream>
#include <string>

#include "IStrat.hpp"

class StratRain: public IStrat {
    private:
        void process() override {
            std::cout << "use an umbrella" << std::endl;
        }
};

class StratSun: public IStrat {
    private:
        void process() override {
            std::cout << "use sunglasses" << std::endl;
        }
};

#endif /* !STRATS_HPP_ */
