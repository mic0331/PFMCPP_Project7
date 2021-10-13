#pragma once

#include <iostream>
#include "Paladin.h"

struct Paladin : Character
{
    Paladin(const std::string name_, int hitPoints_, int amor_);
    ~Paladin() override;

    const std::string& getName() override;
    std::string getStats() override;
    void attack( Character& other ) override;

private:
    const std::string name;
};
