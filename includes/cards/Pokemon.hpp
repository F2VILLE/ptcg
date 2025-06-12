#ifndef POKEMON_BASE_HPP
#define POKEMON_BASE_HPP

#include "../bases/Card.hpp"
#include "../bases/Attack.hpp"
#include "../bases/Ability.hpp"

class Pokemon : public Card
{
public:
    Pokemon() = default;
    CardType type = CardType::Pokemon;
    int health = 0;
    Attack *attack[4] = {nullptr, nullptr, nullptr, nullptr}; 
    Ability *ability = nullptr;
    char *description = nullptr;
    int retreatCost = 0;
    bool basic = false;

};


#endif