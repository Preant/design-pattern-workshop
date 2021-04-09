/*
** EPITECH PROJECT, 2021
** hub
** File description:
** main.cpp
*/

#include "IObserver.hpp"
#include "Observable.hpp"

#include <iostream>
#include <string>

class Player: public Observable {
    public:
        Player(std::string name): _name(name) {};
        ~Player() {};

        void score(void) {
            this->notify(_name);
        }
    private:
        std::string _name;
};

class Spectator: public IObserver {
    public:
        Spectator() {};
        ~Spectator() {};

        void update(std::string data) {
            this->cheer(data);
        }

        void cheer(std::string data) {
            std::cout << data << " has scored one point!" << std::endl;
        }
    private:
};

int main(void)
{
    Player jean("Jean");
    Spectator s;

    jean.subscribe(&s);
    jean.score();
    jean.unsubscribe(&s);
    jean.score();
    return (0);
}
