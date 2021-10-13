#pragma once

#include <iostream>
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string name_, int hitPoints_, int amor_);
    ~DragonSlayer() override;

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};
