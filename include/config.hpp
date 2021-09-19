#pragma once

#include "beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "beatsaber-hook/shared/config/config-utils.hpp"
#include "modloader/shared/modloader.hpp"

struct config_t {
    bool foscEnabled = false;
};

Configuration& getConfig();
void SaveConfig();
bool LoadConfig();
