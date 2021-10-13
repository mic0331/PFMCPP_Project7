#pragma once

#include "Dragon.h"
#include "DragonSlayer.h"
#include "Character.h"
#include "Utility.h"

Dragon::Dragon(const std::string name_, int hitPoints_, int amor_) : 
    Character(80, hitPoints_, amor_),
    name(name_)
{ }

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

const std::string& Dragon::getName() 
{
    return this->name;
}

std::string Dragon::getStats()
{
    return getCharacterStats(this);
}

Dragon::~Dragon()
{
    
}
