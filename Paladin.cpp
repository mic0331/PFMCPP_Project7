#include <iostream>
#include "Paladin.h"
#include "Character.h"
#include "Utility.h"

Paladin::Paladin(const std::string name_, int hitPoints_, int armor_) : 
    Character(hitPoints_, armor_, 10),
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
