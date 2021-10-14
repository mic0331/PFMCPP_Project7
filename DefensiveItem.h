#pragma once

#include "Item.h"

struct DefensiveItem : Item
{
    ~DefensiveItem() override;
    DefensiveItem() : Item("defensive item", 3) { }
    void use(Character* character) override;
};
