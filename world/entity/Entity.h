#pragma once

#include <string>

class BlockPos;
class Vec3;
class Mob;
class EntityDamageSource;
class Level;
class BlockSource;
class EntityDefinitionGroup;
class EntityDefinitionIdentifier;

class Entity
{
public:
    // TODO: find types
    static Entity * RIDING_TAG;
    static Entity * TOTAL_AIR_SUPPLY;
    static Entity * DAMAGE_NEARBY_MOBS_DURATION;
    
    Entity(EntityDefinitionGroup*, EntityDefinitionIdentifier const&);
    Entity(BlockSource&, std::string const&);
    Entity(Level&);
    ~Entity();
    
    void doFireHurt(int);
    void normalTick();
    void restrictTo(BlockPos const&, float);
    void burn(int, bool);
    void feed(int);
    void hurt(EntityDamageSource const&, int, bool, bool);
    void setCharged(bool);
    void setDancing(bool);
    void setNameTag(std::string const&);
    void setPowered(bool);
    void setResting(bool);
    void setSitting(bool);
    void setSwimmer(bool);
    void setTempted(bool);
    void setVariant(int);
    void setRiding(bool, bool);
    void setCanClimb(bool);
    void setClimbing(bool);
    void setHurtTime(int);
    void setStanding(bool);
    void setStrength(int);
    void startRiding(Entity&);
    void setEnchanted(bool);
    void setCanPowerJump(bool);
    void setExperimental(bool);
    void setCanFly(bool);
    void setOnFire(int);
    void setMoving(bool);
    void setInLove(Entity*);
    void setSaddle(bool);
    void setTarget(Entity*);
    void stopSwimming();
    void startSwimming();
    void teleportTo(Vec3 const&, bool, int, int);
    void animateHurt();
    void moveRelative(float, float, float, float);
    void onTame();
    void onMate(Mob&);
    void despawn();
    
    bool isInsidePortal();
    bool canShowNameTag();
    bool wantsMoreFood();
    bool canBeLeashed();
    bool isSwimming() const;
    bool isSneaking() const;
    bool isFishable() const;
    bool isClimbing() const;
    bool isInClouds() const;
};
