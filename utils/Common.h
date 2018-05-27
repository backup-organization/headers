#pragma once

#include <string>

class Common {
public:
    static std::string getGameDevInfoString();
    static std::string getBuildDateISOString();
    static std::string getGameDevGitShaString();
    static std::string getGameDevVersionString();
    static std::string getGameVersionStringNet();
    static std::string getGameVersionString();
    static std::string getGameSemVerString();
    static std::string getBuildFlavor();
    static std::string getServerVersionString();
    static std::string getGameDevGitBranchString();   
};
