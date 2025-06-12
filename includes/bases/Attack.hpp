#ifndef ATTACK_BASE_HPP
#define ATTACK_BASE_HPP
#include "./Effect.hpp"

class Attack
{
public:
    Attack() = default;
    int damage = 0;
    Effect *effect = nullptr;
    
};

#endif