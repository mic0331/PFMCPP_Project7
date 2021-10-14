#include "DefensiveItem.h"
#include "Utility.h"

struct Character;

void DefensiveItem::use(Character* character)
{
    //make your defensive item use the appropriate Utility helper functions
    useDefensiveItem(character, *this);
}

DefensiveItem::~DefensiveItem()
{
    
}
