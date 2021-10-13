#pragma once

#include <string>

struct Character;
struct Item
{
    // to avoid warning - place at least one method in 'out-of-line' so the compiler has a way to select a 
    // translation unit in which to place a single shared copy of ctable ...
    virtual ~Item();
    virtual void use(Character*) = 0;
    Item(const std::string& name_, int effect ) : name(name_), boost(effect) { }
    
    inline const std::string& getName() { return name; }
    inline int getBoost() const { return boost; }
private:
    std::string name;
    int boost;
};
