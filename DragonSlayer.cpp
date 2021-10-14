#include "DragonSlayer.h"
#include "Dragon.h"
#include "Character.h"
#include "Utility.h"

DragonSlayer::DragonSlayer(const std::string name_, int hitPoints_, int armor_) : 
    Character(hitPoints_, armor_, 4),
    name(name_)
{ 
    helpfulItems = makeHelpfulItems(getRandomNumber());
    defensiveItems = makeDefensiveItems(getRandomNumber());
}


const std::string& DragonSlayer::getName() 
{
    return this->name;
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note: they should only use the item if the dragon's hitpoints are > 0...
        //note: items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        if(attackItem != nullptr)
        {
            attackItem->use(this);
            attackItem.reset();
        }
        while( dragon->getHP() > 0 )
        {            
            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}
