#include <iostream>
#include "Paladin.h"
#include "Character.h"
#include "Utility.h"

Paladin::Paladin(const std::string name_, int hitPoints_, int amor_) : 
    Character(10, hitPoints_, amor_),
    name(name_)
{ 
    helpfulItems = makeHelpfulItems(getRandomNumber());
    defensiveItems = makeDefensiveItems(getRandomNumber());
}

const std::string& Paladin::getName() 
{
    return this->name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}

void Paladin::attack( Character& other )
{
    Character::attack(other);
}
