#ifndef EFFECT_BASE_HPP
#define EFFECT_BASE_HPP

enum class EffectType {
    None,
    Poison,
    Burn,
    Freeze,
    Paralyze,
    Sleep,
    Confuse
};

class Effect {
public:
    Effect() = default;
    char* name = nullptr;
    int duration = 0; 
    EffectType type = EffectType::None;
};

#endif 