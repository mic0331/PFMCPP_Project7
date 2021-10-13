#pragma once

#include <iostream>
#include "Dwarf.h"
#include "Character.h"
#include "Utility.h"

Dwarf::Dwarf(const std::string name_, int hitPoints_, int amor_) : 
    Character(4, hitPoints_, amor_),
    name(name_)
{ }

const std::string& Dwarf::getName() 
{
    return this->name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}

void Dwarf::attack( Character& other )
{
    Character::attack(other);
}

Dwarf::~Dwarf()
{

}
