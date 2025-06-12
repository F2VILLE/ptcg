#ifndef ENERGY_BASE_HPP
#define ENERGY_BASE_HPP

#include "./Card.hpp"

enum class EnergyType
{
    None,
    Fire,
    Water,
    Grass,
    Lightning,
    Psychic,
    Fighting,
    Metal,
    Fairy,
    Darkness,
    Colorless
};

class Energy : public Card
{
public:
    Energy() = default;
    CardType type = CardType::Energy;
    EnergyType energyType = EnergyType::None;
    int energyAmount = 0;
    char *energyType = nullptr;
};

#endif