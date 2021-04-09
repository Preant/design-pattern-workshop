/*
** EPITECH PROJECT, 2021
** hub
** File description:
** WeatherAnnouncer.hpp
*/

#ifndef WEATHERANNOUNCER_HPP_
#define WEATHERANNOUNCER_HPP_

#include <memory>
#include "IStrat.hpp"

class WeatherAnnouncer {
    public:
        WeatherAnnouncer(std::shared_ptr<IStrat> strat): _strat(strat) {};
        ~WeatherAnnouncer() = default;

        void execute() {
            this->_strat->execute();
        }

        void setStrat(std::shared_ptr<IStrat> newStrat) {
            this->_strat = newStrat;
        }
    private:
        std::shared_ptr<IStrat> _strat;

};

#endif /* !WEATHERANNOUNCER_HPP_ */
