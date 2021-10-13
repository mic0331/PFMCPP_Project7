#pragma once

#include <iostream>
#include "Character.h"

struct Dwarf : Character
{
    Dwarf(const std::string name_, int hitPoints_, int amor_);
    ~Dwarf() override;

    const std::string& getName() override;
    std::string getStats() override;
    void attack( Character& other ) override;
    
private:
    const std::string name;
};
