#pragma once

#include <string>

class GuiData;
class MinecraftEventing;
class Options;
class Realms;
class ClientInstance;
class Player;

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
    void onPlayerLoaded(ClientInstance&, Player&);
    void onUserSignin();
    void handleBack(bool);
    
    GuiData* getPrimaryGuiData();
    Options* getPrimaryUserOptions();
    Realms* getRealms();
    bool isInGame();
    bool isInRealm();
    bool isEduMode() const;
};
