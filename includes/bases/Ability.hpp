#ifndef ABILITY_BASE_HPP
#define ABILITY_BASE_HPP

class Ability
{
public:
    Ability() = default;
    char *name = nullptr;
    char *description = nullptr;
    int cost = 0;
    bool isActive = false;
    int cooldown = 0; 
};

#endif