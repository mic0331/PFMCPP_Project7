#include "AttackItem.h"
#include "Item.h"

void AttackItem::use(Character *character)
{
    useAttackItem(character, this);
}
