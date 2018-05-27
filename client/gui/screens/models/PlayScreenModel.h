#pragma once

#include <string>

class ClientInstance;
class MinecraftGame;
class MinecraftEventing;
class LocalWorldInfo;
class SceneStack;
class SceneFactory;
class Social
{
    class MultiplayerGameInfo;
    class MultiplayerServiceIdentifier;
}

class PlayScreenModel
{
public:
    static int mRetryTimeout;
    
    PlayScreenModel(MinecraftGame&, ClientInstance&, SceneStack&, SceneFactory&);
    ~PlayScreenModel();
    
    void startLocalWorld(LocalWorldInfo);
    void _startLocalWorld(LocalWorldInfo&);
    void _updateOwnerInfo();
    void _fetchInviteCount();
    void _passLicenseCheck(LocalWorldInfo&);
    void _populateLocalWorlds();
    void _fetchTrialAvailability();
    void uploadArchivedFile(std::string const&);
    void resetUpdateIntervals();
    void repopulateLocalWorlds();
    void initializeRealmsWorlds();
    void initLegacyWorldImporter();
    
    MinecraftEventing* getMinecraftEventing();
    bool _isCrossPlatformGame(Social::MultiplayerGameInfo const&) const;
    bool isServiceMultiplayerAvailable(Social::MultiplayerServiceIdentifier) const;
    bool isServiceMultiplayerConnected(Social::MultiplayerServiceIdentifier) const;
    bool _hasEditionMismatch(LocalWorldInfo&);
    bool supportsLegacyWorlds() const;
    bool supportsLegacyWorldUpload() const;
    bool supportsManualAddedServers() const;
    int getPendingInviteCount() const;
};
