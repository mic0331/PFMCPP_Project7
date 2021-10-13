#pragma once

#include "Item.h"
#include "Character.h"

struct DefensiveItem : Item
{
    ~DefensiveItem() override;
    DefensiveItem() : Item("defensive item", 3) { }
    void use(Character* character) override;
};
