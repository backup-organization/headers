#pragma once

#include "Entity.h"

class EntityDamageSource;
class MobEffectInstance;

class Mob : public Entity
{
public:
    void die(EntityDamageSource const&);
    void onEffectAdded(MobEffectInstance&);
};
