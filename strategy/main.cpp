/*
** EPITECH PROJECT, 2021
** hub
** File description:
** main.cpp
*/

#include "WeatherAnnouncer.hpp"
#include "strats.hpp"

int main(void)
{
    std::shared_ptr<StratSun> sun = std::make_shared<StratSun>();
    std::shared_ptr<StratRain> rain = std::make_shared<StratRain>();

    WeatherAnnouncer weather(sun);
    sun->execute();
    weather.setStrat(rain);
    weather.execute();
    return (0);
}