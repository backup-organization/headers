#pragma once

#include "../Mob.h"

class Entity;

class Wolf : public Mob
{
public:  
    void onBorn(Mob&, Mob&);
    void setInterested(bool);
    void setSitting(bool);
    void setWet(bool);
    void addRider(Entity&);
    
    bool isAlliedTo(Mob*);
    bool isInterested() const;
    bool isWet() const;
};
