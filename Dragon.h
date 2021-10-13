#pragma once

#include <iostream>
#include "Character.h"

struct Dragon : Character
{
    Dragon(const std::string name_, int hitPoints_, int amor_);
    ~Dragon() override;

    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
