#include <iostream>
#include "Dwarf.h"
#include "Character.h"
#include "Utility.h"

Dwarf::Dwarf(const std::string name_, int hitPoints_, int amor_) : 
    Character(hitPoints_, amor_, 4),
    name(name_)
{
    helpfulItems = makeHelpfulItems(getRandomNumber());
    defensiveItems = makeDefensiveItems(getRandomNumber());
}

const std::string& Dwarf::getName() 
{
    return this->name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
