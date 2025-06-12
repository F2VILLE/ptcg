#ifndef CARD_BASE_HPP
#define CARD_BASE_HPP

enum class CardType
{
    None,
    Pokemon,
    Trainer,
    Energy,
    Item,
    Tool,
    Supporter,
    Stadium
};

class Card
{
public:
    Card() = default;
    int id = 0;
    char *name = nullptr;
    CardType type = CardType::None;
};

#endif