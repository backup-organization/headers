#pragma once

#include <string>

class GuiData;
class MinecraftEventing;

class MinecraftGame
{
public:
    static std::string WORLD_PATH;
    // TODO: find type
    static MinecraftGame * INTERACTION_FREQ_MS;
    
    MinecraftGame(int, char**);
    ~MinecraftGame();
    
    void _initMinecraftGame();
    void setEduMode(bool);
    void setIsInGame(bool);
    void onTick();
    void onDimensionChanged();
    void onOptionsLoadBegin();
    void onUserSignin();
    void handleBack(bool);
    
    GuiData* getPrimaryGuiData();
    bool isInGame();
    bool isInRealm();
    bool isEduMode() const;
};
