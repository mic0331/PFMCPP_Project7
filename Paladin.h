#pragma once

#include <iostream>
#include "Character.h"

struct Paladin : Character
{
    Paladin(const std::string, int, int);

    const std::string& getName() override;
    std::string getStats() override;
    void attack( Character& other ) override;

private:
    const std::string name;
};
